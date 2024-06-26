#include "pauloLinux.h"
void metodo_sustitucion_imprimir_resultado(const arma::vec& resultado_sistema_de_ecuaciones);
arma::vec metodo_sustitucion_resolver_sistema(const arma::mat& matriz_de_variables_de_ecuaciones, const arma::vec& vector_de_resultados_de_las_ecuaciones);
std::pair<arma::mat, arma::vec> metodo_sustitucion_construir_matriz(float x1, float x2, float y1, float y2, float resultado1, float resultado2);
void metodo_sustitucion_registrar_datos();
void imprimir_resultado(const arma::vec& resultado_sistema_de_ecuaciones){
    std::cout << "La solucion del sistema es: \n\n";
    system("sleep 2");
    std::cout << resultado_sistema_de_ecuaciones << std::endl;
}
arma::vec resolver_sistema(const arma::mat& matriz_de_variables_de_ecuaciones, const arma::vec& vector_de_resultados_de_las_ecuaciones){
    return arma::solve(matriz_de_variables_de_ecuaciones, vector_de_resultados_de_las_ecuaciones);
}
std::pair<arma::mat, arma::vec> construir_matriz(float x1, float x2, float y1, float y2, float resultado1, float resultado2){
    arma::mat matriz_de_variables_de_ecuaciones = {
        {x1, x2},
        {y1, y2}
    };
    arma::vec vector_de_resultados_de_las_ecuaciones = {resultado1, resultado2};
    return std::make_pair(matriz_de_variables_de_ecuaciones, vector_de_resultados_de_las_ecuaciones);
}

void registrar_datos(){
    float x1, x2, y1, y2, resultado1, resultado2;
    cambiar_fondo("70");
    system("clear");
    std::cout << "INGRESE LOS DATOS DE LA ECUACION\n\n";
    std::cout << "___________-Primera ecuacion-___________\n\n";
    std::cout << " X = ";
    std::cin >> x1;
    std::cout << " Y = ";
    std::cin >> y1;
    std::cout << "Resultado de la ecuacion: ";
    std::cin >> resultado1;
    std::cout << "___________-Segunda ecuacion-___________\n\n";
    std::cout << " X = ";
    std::cin >> x2;
    std::cout << " Y = ";
    std::cin >> y2;
    std::cout << "Resultado de la ecuacion: ";
    std::cin >> resultado2;

    auto [matriz, vector] = construir_matriz(x1, x2, y1, y2, resultado1, resultado2);
    arma::vec resultado = resolver_sistema(matriz, vector);
    imprimir_resultado(resultado);
}
int main(){
    std::cout << "SOLUCION AL METODO DE SUSTITUCIÓN PARA RESOLVER SISTEMAS DE ECUACIONES 2x2\n\n";
    system("sleep 2");
    registrar_datos();
    return 0;
}