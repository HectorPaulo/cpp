#include "pauloLinux.h"

//______-Solucion al sistema de ecuaciones por metodo de sustitucion-________
void metodo_sustitucion_imprimir_resultado(const arma::vec& resultado_sistema_de_ecuaciones_por_metodo_de_sustitucion);
arma::vec metodo_sustitucion_resolver_sistema(const arma::mat& matriz_de_variables_de_ecuaciones, const arma::vec& vector_de_resultados_de_las_ecuaciones);
std::pair<arma::mat, arma::vec> metodo_sustitucion_construir_matriz(float x1, float x2, float y1, float y2, float resultado1, float resultado2);
void metodo_sustitucion_registrar_datos();

void metodo_sustitucion_imprimir_resultado(const arma::vec& resultado_sistema_de_ecuaciones_por_metodo_de_sustitucion) {
    std::cout << "La solucion del sistema es: \n\n";
    system("sleep 2");
    std::cout << resultado_sistema_de_ecuaciones_por_metodo_de_sustitucion << std::endl;
}

//___________________-Resolver sistema de ecuaciones-____________________
arma::vec metodo_sustitucion_resolver_sistema(const arma::mat& matriz_de_variables_de_ecuaciones, const arma::vec& vector_de_resultados_de_las_ecuaciones) {
    return arma::solve(matriz_de_variables_de_ecuaciones, vector_de_resultados_de_las_ecuaciones);
}

//_________-Construir la matriz de variables y el vector de resultados-__________________
std::pair<arma::mat, arma::vec> metodo_sustitucion_construir_matriz(float x1, float x2, float y1, float y2, float resultado1, float resultado2) {
    arma::mat matriz_de_variables_de_ecuaciones = {
        {x1, x2},
        {y1, y2}
    };
    arma::vec vector_de_resultados_de_las_ecuaciones = {resultado1, resultado2};
    return std::make_pair(matriz_de_variables_de_ecuaciones, vector_de_resultados_de_las_ecuaciones);
}

// ____________________________-Registrar los datos de las ecuaciones-__________________________
void metodo_sustitucion_registrar_datos() {
    system("clear");
    // cambiar_fondo("70"); // Esta función no está definida, coméntala o elimínala
    float x1, x2, y1, y2, resultado1, resultado2;
    std::cout << "Tomando en cuenta que el sistema de ecuaciones es de dos incógnitas ingrese sus datos porfavor: \n\n";
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

    auto [matriz, vector] = metodo_sustitucion_construir_matriz(x1, x2, y1, y2, resultado1, resultado2);
    arma::vec resultado = metodo_sustitucion_resolver_sistema(matriz, vector);
    metodo_sustitucion_imprimir_resultado(resultado);
}

int main() {
    std::cout << "cargando...\n";
    system("sleep 2");
    metodo_sustitucion_registrar_datos();
    return 0;
}
