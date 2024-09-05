#include "pauloLinux.h"

int solucion_sistema(float x, float y, float z,float x1, float x2, float x3, float y1, float y2, float y3, float resultado_primera_ecuacion, float resultado_segunda_ecuacion, float resultado_tercera_ecuacion, float z1, float z2, float z3, float delta){
  int seccion_positiva = (x1 * y2 * resultado_tercera_ecuacion) + (y1 * resultado_segunda_ecuacion * x3) + (resultado_primera_ecuacion * x2 * y3);
  int seccion_negativa = (-1 * x3 * y2 * resultado_primera_ecuacion) + (-1 * y3 * resultado_segunda_ecuacion * x1) + (-1 * resultado_tercera_ecuacion * x2 * y1);
    if (delta != 0) {
      seccion_positiva = (z1 * y2 *resultado_tercera_ecuacion) + (y1 * resultado_segunda_ecuacion * z3) + (resultado_primera_ecuacion * z2 * y3);
      seccion_negativa = (-1 * z3 * y2 * resultado_primera_ecuacion) + (-1 * y3 * resultado_segunda_ecuacion * z1) + (-1 * resultado_tercera_ecuacion * z2 * y1);
      x = (seccion_positiva + seccion_negativa) / delta;
      seccion_positiva = (x1 * z2 * resultado_tercera_ecuacion) + (z1 * resultado_segunda_ecuacion * x3) + (resultado_primera_ecuacion * x2 * z3);
      seccion_negativa = (-1 * x3 * z2 * resultado_primera_ecuacion) + (-1 * z3 * resultado_segunda_ecuacion * x1) + (-1 * resultado_tercera_ecuacion * x2 * z1);
      y = (seccion_positiva + seccion_negativa) / delta;
      seccion_positiva = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3);
      seccion_negativa = (-1 * x3 * y2 * z1) + (-1 * y3 * z2 * x1) + (-1 * z3 * x2 * y1);
      z = (seccion_positiva + seccion_negativa) / delta;
    } else {
      std::cout << ("Delta = 0. No se puede resolver el sistema.\n\n");
    }
  return x, y, z;
}
int main(){
  try{
    int opt;
    float x = 0, y = 0, z = 0, delta = 0;
    float x1,x2,x3,y1,y2,y3,resultado_primera_ecuacion,resultado_segunda_ecuacion,resultado_tercera_ecuacion,z1,z2,z3;
    system("clear");
    std::cout << "SOLUCION A SISTEMAS DE ECUACIONES 3x3 POR METODO DE CRAMER\n\n" << "POR HECTOR PAULO\n\n" << "ESTRUCTURA DE INSERCION DE DATOS DE LAS FUNCIONES: \n\n" << "\nX + Y = resultado\nX + Y = resultado" << "\nX + Y = resultado\n";
    std::cout << "\n\n";
    std::cout << "INGRESE LOS DATOS: \n\n";
    std::cout << "__________________-PRIMERA ECUACION-__________________\n\n";
    std::cout << "X = ";
    std::cin >> x1;
    std::cout << "Y = ";
    std::cin >> y1;
    std::cout << "Z = ";
    std::cin >> z1;
    std::cout << "RESULTADO = ";
    std::cin >> resultado_primera_ecuacion;
    std::cout << "__________________-SEGUNDA ECUACION-__________________\n\n";
    std::cout << "X = ";
    std::cin >> x2;
    std::cout << "Y = ";
    std::cin >> y2;
    std::cout << "Z = ";
    std::cin >> z2;
    std::cout << "RESULTADO = ";
    std::cin >> resultado_segunda_ecuacion;
    std::cout << "__________________-TERCERA ECUACION-__________________\n\n";
    std::cout << "X = ";
    std::cin >> x3;
    std::cout << "Y = ";
    std::cin >> y3;
    std::cout << "Z = ";
    std::cin >> z3;
    std::cout << "RESULTADO = ";
    std::cin >> resultado_tercera_ecuacion;
    solucion_sistema(x, y, z, x1, x2, x3, y1, y2, y3, z1, z2, z3, resultado_primera_ecuacion, resultado_segunda_ecuacion, resultado_tercera_ecuacion, delta);
  } catch (std::exception& e) {
    std::cout << "No se puede resolver el sistema.\n\n";
  }
  return 0;
}
