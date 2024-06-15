#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Generador de Numeros al azar" << endl;

    ///Insertando una semilla para que los numero generados al azar sean diferentes en cada ocasión
    srand(time(NULL));

    int numero = 0, cantidad, contador = 0, limite_inferior, limite_superior;

    cout<<"\nCuantos numeros al azar deseas generar -> ";
    cin>>cantidad;

    cout<<"\nEmpezando desde que numero hasta que otro numero los quieres generar ?";

    cout<<"\n\nLimite inferior -> ";
    cin>>limite_inferior;

    cout<<"\n\nLimite superior -> ";
    cin>>limite_superior;

/**
De forma general es:
variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
**/

    while(contador < cantidad){

        ///Ambas sentencias son validas, las puedes usar a tu gusto o criterio
        ///descomenta una y comenta la otra y observa

        numero = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
        ///numero = limite_inferior + rand() % (limite_superior);

        cout<<"\n\tNumero al azar: "<<numero;
        contador++;
    }

    return 0;
}
