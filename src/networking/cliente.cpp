#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

#define PORT 8080

using namespace std;

int main(){
  int sock = 0, valread;
  struct sockaddr_in serv_addr;
  const char *hello = "¡Hola!";
  char buffer[1024] = {0};
  //_______________________-CREAR SOCKET-_______________________
  if((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0){
    cout << "Error al crear el socket." << endl;
    return -1;
  }
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(PORT);
  //_______-CONVERTIR DIRECCIONES IPv4 E IPv6 DE TEXTO A BINARIO-_______
  if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
    cout << "Invalid address/ Address not supported." << endl;
    return -1;
  }
  //_______________________-CONECTAR AL SERVIDOR-_______________________
  if(connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
    cout << "Error en la conexion." << endl;
    return -1;
  }
  //_______________________-ENVIAR DATOS AL SERVIDOR-_______________________
  send(sock, hello, strlen(hello), 0);
  cout << "Mensaje enviado." << endl;

  //_______________________-LEER DATOS DEL SERVIDOR-_______________________
  valread = read(sock, buffer, 1024);
  cout << "El servidor dice: " << buffer << endl;
  //_______________________-CERRAR SOCKET-_______________________
  close(sock);
  return 0;
}