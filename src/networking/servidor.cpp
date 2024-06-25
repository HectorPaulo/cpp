#include <iostream>
#include <sys/socket.h> // --> Incluye definiciones de estructuras y funciones para manejar sockets
#include <arpa/inet.h> // --> Contiene funciones para operaciones de direcciones de red (como convertir direcciones IP)
#include <unistd.h> // --> Acceso a la API del sistema POSIX, incluyendo funciones como 'close' y 'read'
#include <cstring> // --> Funciones de manipulación de cadenas de caracteres
#include <thread> // --> Librería para manejar hilos (threads)
#include <vector> // --> Contenedor para manejar múltiples hilos
#include <unordered_map> // --> Contenedor para almacenar sockets con identificadores únicos
#include <mutex> // --> Librería para manejar exclusión mutua

#define PORT 8080 // --> Puerto en el que el servidor escucha las peticiones

std::mutex cout_mutex; // --> Mutex para proteger la salida estándar
std::unordered_map<int, int> client_sockets; // --> Mapa para almacenar los sockets de los clientes
std::unordered_map<int, std::string> client_names; // --> Mapa para almacenar los nombres de los clientes
std::mutex client_mutex; // --> Mutex para proteger el acceso al mapa de sockets

void manejarCliente(int socket, int client_id); // --> Declaración de la función para manejar cada cliente

int main() {
    int server_fd, new_socket; // --> server_fd: Descriptor de archivo del servidor, new_socket: Descriptor de archivo para la conexión aceptada
    struct sockaddr_in address; // --> Estructura para almacenar dirección y puerto
    int opt = 1;
    int addrlen = sizeof(address);
    std::vector<std::thread> threads; // --> Contenedor para almacenar los hilos de clientes
    int client_id = 0; // --> Identificador único para cada cliente

    //__________________-Crear el socket-__________________
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        // --> Crea un socket de dominio AF_INET de IPv4 y tipo SOCK_STREAM de TCP
        perror("Error en el socket");
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Socket creado exitosamente. Descriptor de archivo: " << server_fd << std::endl;
    }

    //__________________-Opciones del socket-__________________
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        // setsockopt --> Configura opciones del socket, en este caso 'SO_REUSEADDR' y 'SO_REUSEPORT'
        // SO_REUSEADDR | SO_REUSEPORT --> Permiten reutilizar la dirección y el puerto
        perror("setsockopt");
        close(server_fd); // --> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "setsockopt asignado exitosamente." << std::endl;
    }

    //__________________-Asignar dirección y puerto-__________________
    address.sin_family = AF_INET; // address --> Estructura 'sockaddr_in' que contiene la familia de direcciones, dirección IP y puerto
    address.sin_addr.s_addr = INADDR_ANY; // INADDR_ANY --> Acepta conexiones desde cualquier dirección IP
    address.sin_port = htons(PORT); // htons --> Convierte el puerto al orden de bytes de red

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        // bind --> Asigna la dirección y el puerto al socket
        perror("Error en la creación de la unión");
        close(server_fd); // --> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Unión al puerto " << PORT << " exitosa." << std::endl;
    }

    //__________________-Escuchar conexiones entrantes-__________________
    if (listen(server_fd, 3) < 0) {
        // listen --> Marca al socket como pasivo que escucha conexiones entrantes
        // 3 --> Cantidad máxima de conexiones en cola
        perror("escuchar");
        close(server_fd); // --> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Buscando conexiones..." << std::endl;
    }

    //__________________-Aceptar conexiones-__________________
    while (true) {
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
            // accept --> Acepta una conexión entrante y crea un nuevo socket para la conexión aceptada
            perror("aceptar");
            continue;
        } else {
            std::lock_guard<std::mutex> lock(client_mutex); // lock_guard --> Objeto RAII para bloquear el mutex
            client_sockets[client_id] = new_socket; // --> Almacena el socket del cliente con un identificador único
            std::cout << "Cliente conectado. Cliente ID: " << client_id << std::endl;
            threads.emplace_back(manejarCliente, new_socket, client_id); // --> Crear un nuevo hilo para manejar la conexión
            client_id++;
        }
    }

    //__________________-Cerrar el socket del servidor-__________________
    close(server_fd); // close --> Cierra el descriptor de archivo del socket del servidor
    return 0;
}

void manejarCliente(int socket, int client_id) {
    char buffer[1024] = {0}; // --> Buffer para almacenar datos recibidos del cliente
    const char *saludo = "¡Bienvenido!";

    //__________________-Solicitud de nombre de usuario-__________________
    send(socket, "Por favor ingrese su nombre de usuario:", 38, 0); // send --> Envía datos al cliente a través del socket
    read(socket, buffer, 1024); // read --> Lee datos desde el socket conectado al cliente y los almacena en el buffer
    std::string username(buffer);
    {
        std::lock_guard<std::mutex> lock(client_mutex);
        client_names[client_id] = username; // --> Almacena el nombre de usuario con su identificador único
    }
    system("clear");
    //__________________-Solicitud de contraseña-__________________
    send(socket, "Por favor ingrese la contraseña:", 31, 0); // send --> Envía datos al cliente a través del socket
    read(socket, buffer, 1024); // read --> Lee datos desde el socket conectado al cliente y los almacena en el buffer

    if (strncmp(buffer, "pass", 7) != 0) {
        // strncmp --> Compara los primeros n caracteres de dos cadenas de caracteres
        send(socket, "Contraseña incorrecta. Desconectando...", 40, 0);
        close(socket); // --> Cerrar el socket antes de salir
        return;
    }

    send(socket, saludo, strlen(saludo), 0);

    //__________________-Comunicación bidireccional continua-__________________
    while (true) {
        int bytesRead = read(socket, buffer, 1024);
        if (bytesRead <= 0) {
            std::lock_guard<std::mutex> lock(cout_mutex); // lock_guard --> Objeto RAII para bloquear el mutex
            std::cout << username << "  se ha ido." << std::endl;
            break;
        }

        std::string message(buffer, bytesRead);
        std::lock_guard<std::mutex> lock(cout_mutex); // Protege la salida estándar
        std::cout << " < " <<username << " > " << message << std::endl;

        //__________________-Envío de mensajes entre clientes-__________________
        {
            std::lock_guard<std::mutex> lock(client_mutex); // Protege el acceso al mapa de sockets
            for (const auto& pair : client_sockets) {
                if (pair.first != client_id) {
                    send(pair.second, message.c_str(), message.length(), 0); // Envía el mensaje a todos los demás clientes
                }
            }
        }
    }

    close(socket); // --> Cerrar el socket después de terminar la comunicación

    std::lock_guard<std::mutex> lock(client_mutex); // Protege el acceso al mapa de sockets
    client_sockets.erase(client_id); // Elimina el cliente desconectado del mapa
    client_names.erase(client_id); // Elimina el nombre de usuario del cliente desconectado del mapa
}
