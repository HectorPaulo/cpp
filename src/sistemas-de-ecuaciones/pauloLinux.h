#include <iostream>
#include <unistd.h> // --> Para el sleep
#include <armadillo> // --> Para el sistema de ecuaciones
void cambiar_fondo(const std::string &color) {
  std::cout << "\033[" << color << "m"; // --> cambia el color del fondo
  std::cout << "\033[2J"; // --> Limpia la pantalla para aplicar el nuevo color de fondo
  std::cout << "\033[H"; // --> Mover el cursor a la posición 0, 0
}
