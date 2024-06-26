#include "pauloLinux.h"
// ______-Solucion al sistema de ecuaciones por metodo de suma y resta-________
void metodo_suma_resta_registrar_datos(){
    system("clear");
    cambiar_fondo("70");
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
}
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
    cambiar_fondo("70");
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
    int opt;
    bool aux_valid_opt;
    system("sleep 2");
    std::cout <<"SOLUCION A SISTEMAS DE ECUACIONES\n\n";
    std::cout << "POR HECTOR PAULO\n\n";
    std::cout << "\n\n";
    std::cout << "METODOS DE SOLUCION: \n\n";
    std::cout << "1. METODO DE SUSTITUCIÓN\n\n";
    std::cout << "2. METODO DE SUMA Y RESTA\n\n";
    std::cout << "3. METODO DE GAUSS\n\n";
    std::cout << "4. METODO DE GAUSS-JORDAN\n\n";
    std::cout << "5. METODO POR MATRIZ TRANSPUESTA\n\n";
    std::cout << "Opcion -->  ";
    std::cin >> opt;
    do {
        switch (opt) {
            case 1: 
                system("clear");
                metodo_sustitucion_registrar_datos();
                aux_valid_opt = 1;
                break;
            case 2: 
                system("clear");
                metodo_suma_resta_registrar_datos();
                aux_valid_opt = 1;
                break;
            default:
                system("clear");
                std::cout<<"Opcion no valida\n\n";
                aux_valid_opt = 0;
                break;
        }
    } while (aux_valid_opt == 0);
    return 0;
}
