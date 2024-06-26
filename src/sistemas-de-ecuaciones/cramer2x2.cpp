#include "pauloLinux.h"
// --> Se supone que vamos a resolver sistemas de ecuaciones 2x2
int solucion_sistema();
int solucion_sistema(int x1,int x2,int y1,int y2,int resultado_primera_ecuacion,int resultado_segunda_ecuacion){
  int delta, x, y;
  delta = (x1 * y2) - (x2 * y1);
  if (delta != 0){
    x = (resultado_primera_ecuacion * y2 - resultado_segunda_ecuacion * y1) / delta;
    y = (x1 * resultado_segunda_ecuacion - x2 * resultado_primera_ecuacion) / delta;
  } else {
    std::cout << "El sistema no tiene una solucion unica.\n\n";
  }
  std::cout << "SOLUCION: \n\nx = " << x << "\ny = " << y << "\n\n";
  return x, y;
}

int main(){
  try{
    int opt, x1, x2, y1, y2, resultado_primera_ecuacion, resultado_segunda_ecuacion;
    system("clear");
    std::cout << "SOLUCION A SISTEMAS DE ECUACIONES 2x2 POR CRAMER\n\n" << "POR HECTOR PAULO\n\n" << "ESTRUCTURA DE INSERCION DE DATOS DE LAS ECUACIONES: \n\n" << "\nx1x + y1y = resultado\nx2x + y2y = resultado\n\n";
    std::cout << "\n\n";
    std::cout << "INGRESE LOS DATOS: \n\n";
    std::cout << "___________-Primera ecuacion-___________\n\n";
    std::cout << "X = ";
    std::cin >> x1;
    std::cout << "Y = ";
    std::cin >> y1;
    std::cout << "resultado = ";
    std::cin >> resultado_primera_ecuacion;
    std::cout << "___________-Segunda ecuacion-___________\n\n";
    std::cout << "X = ";
    std::cin >> x2;
    std::cout << "Y = ";
    std::cin >> y2;
    std::cout << "resultado = ";
    std::cin >> resultado_segunda_ecuacion;
    solucion_sistema(x1, x2, y1, y2, resultado_primera_ecuacion, resultado_segunda_ecuacion);
  }
  catch(const std::exception& e){
    std::cerr << e.what() << '\n';
    std::cout << "Opcion no valida. Solo se aceptan numero reales.";
  }
  
  
  return 0;
}