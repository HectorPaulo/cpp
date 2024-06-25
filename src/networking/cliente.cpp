#include <iostream>
#include <sys/socket.h> // --> Incluye definiciones de estructuras y funciones para manejar sockets
#include <arpa/inet.h> // --> Contiene funciones para operaciones de direcciones de red (como convertir direcciones IP)
#include <unistd.h> // --> Acceso a la API del sistema POSIX, incluyendo funciones como 'close' y 'read'
#include <cstring> // --> Funciones de manipulación de cadenas de caracteres
#include <thread> // --> Librería para manejar hilos (threads)

#define PORT 8080 // --> Puerto en el que el servidor escucha las peticiones

void enviarMensajes(int sock, const std::string& username); // --> Declaración de la función para enviar mensajes al servidor

int main() {
    int sock = 0; // --> Descriptor de archivo del socket
    struct sockaddr_in serv_addr; // --> Estructura para almacenar dirección y puerto del servidor
    char buffer[1024] = {0};

    //__________________-Crear el socket-__________________
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        // socket --> Crea un socket de dominio AF_INET de IPv4 y tipo SOCK_STREAM de TCP
        std::cout << "Error al crear el socket." << std::endl;
        return -1;
    }

    serv_addr.sin_family = AF_INET; // --> Familia de direcciones AF_INET de IPv4
    serv_addr.sin_port = htons(PORT); // htons --> Convierte el puerto al orden de bytes de red

    //__________________-Convertir dirección IP-__________________
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        // inet_pton --> Convierte la dirección IP de texto a binario
        std::cout << "Dirección no válida o no soportada." << std::endl;
        return -1;
    }

    //__________________-Conectar al servidor-__________________
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        // connect --> Conecta el socket al servidor
        std::cout << "Error en la conexión." << std::endl;
        return -1;
    }

    //__________________-Leer mensaje de autenticación-__________________
    read(sock, buffer, 1024); // read --> Lee datos desde el socket conectado al servidor y los almacena en el buffer
    std::cout << buffer << std::endl;

    //__________________-Enviar nombre de usuario-__________________
    std::string username;
    system("clear");
    std::cout << "Ingrese su nombre de usuario: ";
    std::cin >> username;
    send(sock, username.c_str(), username.length(), 0); // send --> Envía datos al servidor a través del socket
    std::cin.ignore(); // --> Ignorar el carácter de nueva línea dejado en el buffer de entrada

    //__________________-Leer mensaje del servidor-__________________
    read(sock, buffer, 1024); // read --> Lee datos desde el socket conectado al servidor y los almacena en el buffer
    std::cout << buffer << std::endl;

    //__________________-Enviar contraseña-__________________
    std::string password;
    system("clear");
    std::cout << "Ingrese la contraseña: ";
    std::cin >> password;
    send(sock, password.c_str(), password.length(), 0); // send --> Envía datos al servidor a través del socket
    std::cin.ignore(); // --> Ignorar el carácter de nueva línea dejado en el buffer de entrada
    system("clear");
    //__________________-Leer respuesta del servidor-__________________
    read(sock, buffer, 1024); // read --> Lee datos desde el socket conectado al servidor y los almacena en el buffer
    //std::cout << buffer << std::endl;
    std::cout << " ¡Bienvenido, " << username << "!" << std::endl; // Mensaje de bienvenida

    //__________________-Enviar mensajes al servidor-__________________
    std::thread enviar_thread([sock, username] { enviarMensajes(sock, username); }); // --> Crear un hilo para enviar mensajes al servidor usando una lambda function
    enviar_thread.join(); // --> Esperar a que el hilo termine

    //__________________-Cerrar el socket-__________________
    close(sock); // close --> Cierra el descriptor de archivo del socket
    return 0;
}

void enviarMensajes(int sock, const std::string& username) {
    std::string mensaje;
    char buffer[1024] = {0};

    while (true) {
        std::cout << " < " << username << " > ";
        std::getline(std::cin, mensaje);

        if (mensaje == "exit") {
            std::cout << "Cerrando conexión." << std::endl;
            break;
        }

        std::string full_message = username + ": " + mensaje;
        send(sock, full_message.c_str(), full_message.length(), 0); // send --> Envía datos al servidor a través del socket
        int valread = read(sock, buffer, 1024); // read --> Lee datos desde el socket conectado al servidor y los almacena en el buffer
        if (valread <= 0) {
            std::cout << "El servidor ha cerrado la conexión." << std::endl;
            break;
        }
        std::cout << buffer << std::endl;
    }
}
