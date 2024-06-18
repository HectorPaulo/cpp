#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

#define PORT 8080

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    const char *hello = "¡Un saludo desde el servidor!";

    //__________________-Crear el socket-__________________
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("Error en el socket");
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Socket create exitosamente. Descriptor de archivo: " << server_fd << std::endl;
    }

    //__________________-Opciones del socket-__________________
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        perror("setsockopt");
        close(server_fd); // --> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "setsockopt asignado exitosamente." << std::endl;
    }

    //__________________-Asignar dirección y puerto-__________________
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Error en la creación de la unión");
        close(server_fd); // --> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Unión al puerto " << PORT << " exitosa." << std::endl;
    }

    //__________________-Escuchar conexiones entrantes-__________________
    if (listen(server_fd, 3) < 0) {
        perror("escuchar");
        close(server_fd); //--> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Buscando conexiones..." << std::endl;
    }

    //__________________-Aceptar una conexión-__________________
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
        perror("aceptar");
        close(server_fd); //--> Cerrar el socket antes de salir
        exit(EXIT_FAILURE);
    } else {
        std::cout << "Conexión aceptada." << std::endl;
    }

    // __________________-Leer datos del cliente-__________________
    read(new_socket, buffer, 1024);
    std::cout << "Mensaje del cliente: " << buffer << std::endl;

    //__________________-Enviar datos al cliente-__________________
    send(new_socket, hello, strlen(hello), 0);
    std::cout << "Mensaje de bienvenida enviado." << std::endl;

    //__________________-Cerrar el socket-__________________
    close(new_socket);
    close(server_fd);
    return 0;
}
