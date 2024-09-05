#include <iostream>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
#include <vector>

//_______________________________-DEFINICIÓN DE FUNCIONES-_______________________________
void pantalla_error(); // --> Pantalla de error en caso de que la entrada sea incorrecta

void menu_principal(); // --> Pantalla de inicio del programa
void menu_temas(); // --> Menú que clasifica los programas por partes de la programación en c++
//_______________________________-DEFINICIÓN ESPECÍFICA DE FUNCIONES_______________________________

void menu_temas(){
  int opt;
  system("clear");
  std::cout << "______________________________TEMAS______________________________\n\n";
  std::cout << "0. Volver\n";
  std::cout << "1. Fundamentos de C++\n";
  std::cout << "2. Estructuras de Datos\n";
  std::cout << "3. Programación Orientada a Objetos\n";
  std::cout << "4. Algoritmos\n";
  std::cout << "5. Redes\n";
  std::cout << "6. Interfaces Graficas\n";
  std::cout << "Opcion: ";
  std::cin >> opt;
  do{
    switch (opt) {
    case 0: { // --> Opción seleccionada: Volver al menú principal
      system("clear");
      menu_principal();
      system("sleep 2");
      break;
    }
    case 1: { //--> Opción seleccionada: Fundamentos de C++
      system("clear");
      fundamentos();
      system("sleep 2");
      break;
    }
    case 2: { // --> Opción seleccionada: Estructuras de Datos
      system("clear");
      estructuras_de_datos();
      system("sleep 2");
      break;
    }
    case 3: {
      system("clear");
      poo();
      system("sleep 2");
      break;
    }
    case 4: {
      system("clear");
      algoritmos();
      system("sleep 2");
      break;
    }
    case 5: {
      system("clear");
      redes();
      system("sleep 2");
      break;
    }
    case 6: {
      system("clear");
      interfaces_graficas();
      system("sleep 2");
      break;
    }
    default:
      system("clear");
      pantalla_error();
      system("sleep 2");
      break;
    }
  }
}
void menu_principal(){
  int opt;
  do{
    system("clear");
  std::cout << "UNIVERSIDAD LA SALLE OAXACA\n";
  std::cout << "PROGRAMAS DE TODO EL SEMESTRE\n";
  std::cout << "INGERNIERIA EN SOFTWARE & SISTEMAS COMPUTACIONALES\n";
  std::cout << "SEGUNDO SEMESTRE\n";
  std::cout << "FUNDAMENTOS DE PROGRAMACION ESTRUCTURADA\n";
  std::cout << "Hector Adrian Paulo Vazquez\n";
  std::cout << "Profesor: Dr. Carlos Miguel\n";
  std::cout << "MENU PRINCIPAL\n";
  std::cout << "0. Terminar programa\n";
  std::cout << "1. Ir al menu parciales\n";
  std::cout << "Opcion: ";
  int opcion;
    switch(opt){
      case 0: {
        system("clear");
        exit(0);
        break;
      }
      case 1: {
        system("clear");
        menu_temas();
        system("sleep 2");
        break;
      }
      default: {
        system("clear");
        pantalla_error();
        system("sleep 2");
        std::cout << "0. Salir\n";
        std::cout << "1. Ir al menu de temas\n";
        std::cout << "Elija una opcion: ";
        std::cin >> opt;
      }
    }
  } while (opt != 2);
}
//_______________________________-PROGRAMA PRINCIPAL_______________________________
int main(){
  menu_principal();
  system("sleep 1");
  return 0;
}
//_______________________________-FIN-_______________________________