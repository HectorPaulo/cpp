#include "paulo.h"
using namespace std;

// Prototipos de Funciones

// LLenado de Datos
void llenadoDeLaVariableZ(vector <double> &, bool *);
void llenadoDeLaVariableX(vector <double> &, int, bool*);

void llenadoDeLaVariableH(vector <double> &, int, bool*, int);
void llenadoDeLaVariableS(vector <double> &, int, bool*, int);
void llenadoDeLaVariableR(vector <double> &, int, bool*, int, double);

void llenadoDelLadoDerechoDeLaEcuacion(vector <double> &, bool *);
void llenadoDeMatrizSimplex(vector < vector <double> > &, vector <double> &);
void llenarFilaDeVariablesLetras(vector <string> &, int, int, int, int);
void rellenarColumnaDeVariablesLetras(vector <string> &, vector <string> &, int, int);
void llenarColumnaDeVariablesLetras(vector <string> &, int, bool *);
void transferirNuevaFilaPivote(vector < vector <double> > &, vector <double> &, int, int);

// Obtenciones de datos
int encontrarCriterioDeOptimalidadSimplex(vector < vector <double> > &, int);
int encontrarCriterioDeFactibilidadSimplex(vector < vector <double> > &, vector <double> &, vector <double> &);
void obtenerColumnaSolucion(vector < vector <double> > &, vector <double> &, int, int);
void obtenerColumnaPivote(vector < vector <double> > &, vector <double> &, int, int);
double obtenerElementoPivote(vector < vector <double> > &, int, int);
void obtenerNuevaFilaPivote(vector < vector <double> > &, vector <double> &, int, int, double);
void obtenerNuevasFilasNormales(vector < vector <double> > &, vector <double> &, vector <double> &, int, int, int);
void obtenerNumerosEnFilaZ(vector < vector <double> > &, vector <double> &, int);
bool comprobarExistenciaDeNumerosNegativosEnLaFilaZ(vector <double> &);

// Vaciados, impresiones y comprobaciones
void vaciarMatrizSimplex(vector < vector <double> > &matrizSimplex, int, int);
void imprimirArregloDeInsercionDeValores(vector <double> &);
void imprimirColumnaDePalabras(vector <string> &);
void imprimirArregloDePalabras(vector <string> &);
void imprimirMatrizSimplex(vector < vector <double> > &, vector <string> &, vector <string> &, int, int);
bool comprobacionDeNumeroMenorACero(double);
bool comprobacionDeNumeroMenorOIgualACero(double);
double convertirNumeroANegativo(double);

// Otros
int implementarModuloDeMenu();
void imprimirMenuDeOpciones(string [], int, int);
int implementarModuloDeMenuRestricciones(int);
void imprimirMenuDeRestricciones(string [], int, int, int);
int encontrarElNumeroMayor(vector <double> &);
void corregirTablaDeMalComportamiento(vector < vector <double> > &, vector <double> &, int, double, int);
	
int main(){
	
	setlocale(LC_ALL,"spanish");	// Configura el programa en Espa�ol M�xico
	
	int numeroDeVariables;
	int numeroDeRestricciones= 0;
	int numeroDeColumnas;
	int numeroDeFilas;
	int indiceDeCriterioDeOptimalidadSimplex;
	int indiceDeCriterioDeFactibilidadSimplex;
	double valorDeElementoPivote;
	double valorUsuario;
	bool numeroNegativo;
	int opcionMenu;
	int numeroDeMenorIguales;
	int numeroDeIguales;
	int sumaDeR;
	int numeroDeMayorIguales;
	int variableSelectivaRH; // Nos sirve para saber si en la columna de palabras se debe poner R � S
	double variableGranM= 100; // Este es el valor de la gran M por las que las variables X se van a multiplicar
	
	int contadorDeIteraciones= 1;
	bool banderaDeLlenadoDePrimeraVez= true;	// Sirve solo en el llenado de la fila Z
	bool existenciaDeNumerosNegativosEnFilaZ= true;	// Sirve para seguir iterando en el ciclo do-while
	
	system("title  M�TODO SIMPLEX AVANZADO");
	opcionMenu= implementarModuloDeMenu(); // Impresi�n de Men� de objetivos
	if(opcionMenu != 3){
		
		cout<<" M�TODO SIMPLEX AVANZADO"<< endl;
		cout<<"-----------------------"<< endl<< endl<< endl;
		// Inserci�n del n�mero de variables y restricciones que el usuario va a utlizar
		cout<<" Ingrese el n�mero de variables a utilizar: ";
		cin>> numeroDeVariables;
		cout<<"\n Ingrese el numero de restricciones del tipo:"<< endl<< endl;
		cout<<"\tMenor igual ( <= ): ";
		cin>> numeroDeMenorIguales;
		cout<<"\tIgual ( = ): ";
		cin>> numeroDeIguales;
		cout<<"\tMayor igual ( >= ): ";
		cin>> numeroDeMayorIguales;
		
		// Creaci�n de la matriz simplex, vectores y otras variables
		numeroDeRestricciones= numeroDeMenorIguales + numeroDeIguales + numeroDeMayorIguales;
		numeroDeColumnas= numeroDeVariables + numeroDeMenorIguales + numeroDeIguales + (numeroDeMayorIguales * 2 ) + 2;
		numeroDeFilas= numeroDeRestricciones + 1;
		sumaDeR= numeroDeMayorIguales + numeroDeIguales;
		
		vector <double> arregloDeInsercionDeValores(numeroDeColumnas);
		vector < vector <double> > matrizSimplex(numeroDeFilas, arregloDeInsercionDeValores);
		vector <double> columnaPivote;
		vector <double> columnaSolucion;
		vector <double> nuevaFilaPivote;
		vector <double> numerosDeFilaZ;
		vector <double> arrayIndicesR;
		vector <string> filaDeVariablesLetras;
		vector <string> columnaDeVariablesLetras;
		
		llenarFilaDeVariablesLetras(filaDeVariablesLetras, numeroDeVariables, numeroDeMenorIguales, numeroDeIguales, numeroDeMayorIguales);
		
		// Llenado de la Matriz simplex con datos del usuario
		for(int i=0; i<numeroDeFilas; i++){
			system("cls");
			arregloDeInsercionDeValores.clear();
			arregloDeInsercionDeValores.begin();
			if(i==0){
				if(opcionMenu==1){
					cout<<" MAXIMIZAR Z"<< endl;
					cout<<"-----------------------"<< endl<< endl;
				}else{
					cout<<" MINIMIZAR Z"<< endl;
					cout<<"-----------------------"<< endl<< endl;
				}
			}else{
				cout<<" RESTRICCI�N "<< i<< endl;
				cout<<"-----------------------"<< endl<< endl;
			}
			llenadoDeLaVariableZ(arregloDeInsercionDeValores, &banderaDeLlenadoDePrimeraVez);
			llenadoDeLaVariableX(arregloDeInsercionDeValores, numeroDeVariables, &banderaDeLlenadoDePrimeraVez);
	 		
	 		variableSelectivaRH= implementarModuloDeMenuRestricciones(i);
	 		if(variableSelectivaRH == 2 || variableSelectivaRH == 3)
	 			arrayIndicesR.push_back(i);	// Nos sirve para saber en que posici�n estan las R
	 		
			llenadoDeLaVariableH(arregloDeInsercionDeValores, numeroDeMayorIguales, &banderaDeLlenadoDePrimeraVez, variableSelectivaRH);
			llenadoDeLaVariableS(arregloDeInsercionDeValores, numeroDeMenorIguales, &banderaDeLlenadoDePrimeraVez, variableSelectivaRH);
			if(i == 0)
				variableGranM= variableGranM * (encontrarElNumeroMayor(arregloDeInsercionDeValores));
			llenadoDeLaVariableR(arregloDeInsercionDeValores, sumaDeR, &banderaDeLlenadoDePrimeraVez, variableSelectivaRH, variableGranM);
			
			llenarColumnaDeVariablesLetras(columnaDeVariablesLetras, variableSelectivaRH, &banderaDeLlenadoDePrimeraVez);
			llenadoDelLadoDerechoDeLaEcuacion(arregloDeInsercionDeValores, &banderaDeLlenadoDePrimeraVez);			
			llenadoDeMatrizSimplex(matrizSimplex, arregloDeInsercionDeValores);
		}
		system("cls");
		cout<<" Se imprime matriz llenada:"<< endl;
		imprimirMatrizSimplex(matrizSimplex, filaDeVariablesLetras, columnaDeVariablesLetras,numeroDeFilas, numeroDeColumnas);
		getch();
		// Bloque de correci�n de tabla de mal comportamiento
		
		corregirTablaDeMalComportamiento(matrizSimplex, arrayIndicesR, opcionMenu, variableGranM, numeroDeColumnas);
		system("cls");
		marcoxy(40, 60, 1, 1);
		posxy(3, 2);
		cout<<" Tabla corregida: ";
		imprimirMatrizSimplex(matrizSimplex, filaDeVariablesLetras, columnaDeVariablesLetras,numeroDeFilas, numeroDeColumnas);
		system("pause");
			
		// Bloque de Algoritmo de Operaciones para resolver la Matriz Simplex
		do{
			indiceDeCriterioDeOptimalidadSimplex= encontrarCriterioDeOptimalidadSimplex(matrizSimplex, numeroDeColumnas);
			posxy(4, 6);
			cout<<"Indice de Criterio de Optimalidad: "<< indiceDeCriterioDeOptimalidadSimplex<< endl;
			obtenerColumnaPivote(matrizSimplex, columnaPivote, indiceDeCriterioDeOptimalidadSimplex, numeroDeRestricciones);
			obtenerColumnaSolucion(matrizSimplex, columnaSolucion, numeroDeRestricciones, numeroDeColumnas);
			
			indiceDeCriterioDeFactibilidadSimplex= encontrarCriterioDeFactibilidadSimplex(matrizSimplex, columnaSolucion, columnaPivote);
			if(indiceDeCriterioDeFactibilidadSimplex > 0){
				
				cout<<" Indice de Criterio de Factibilidad: "<< indiceDeCriterioDeFactibilidadSimplex<< endl<< endl;
				valorDeElementoPivote= obtenerElementoPivote(matrizSimplex, indiceDeCriterioDeOptimalidadSimplex, indiceDeCriterioDeFactibilidadSimplex);
				cout<<" El valor del elemento pivote es de: "<< valorDeElementoPivote<< endl<< endl;
				obtenerNuevaFilaPivote(matrizSimplex, nuevaFilaPivote, indiceDeCriterioDeFactibilidadSimplex, numeroDeColumnas, valorDeElementoPivote);
				transferirNuevaFilaPivote(matrizSimplex, nuevaFilaPivote, indiceDeCriterioDeFactibilidadSimplex, numeroDeColumnas);
				obtenerNuevasFilasNormales(matrizSimplex, columnaPivote, nuevaFilaPivote, numeroDeFilas, numeroDeColumnas, indiceDeCriterioDeFactibilidadSimplex);
				
				cout<<"\n ------------------------------------------------------"<< endl<< endl;
				cout<<" "<< contadorDeIteraciones<<"� Iteraci�n"<< endl<< endl;
				rellenarColumnaDeVariablesLetras(filaDeVariablesLetras, columnaDeVariablesLetras, indiceDeCriterioDeOptimalidadSimplex, indiceDeCriterioDeFactibilidadSimplex);
				imprimirMatrizSimplex(matrizSimplex, filaDeVariablesLetras, columnaDeVariablesLetras,numeroDeFilas, numeroDeColumnas);
				//cout<<"\n ------------------------------------------------------"<< endl<< endl;
				
				obtenerNumerosEnFilaZ(matrizSimplex, numerosDeFilaZ, numeroDeColumnas);
				existenciaDeNumerosNegativosEnFilaZ= comprobarExistenciaDeNumerosNegativosEnLaFilaZ(numerosDeFilaZ);
				
				contadorDeIteraciones++;
			}else{
				// En caso de que el indice de criterio de factibilidad simplez fuera menor a 0, significa que hubo un error y no pudo completar la opraci�n
				// Osea que la columna de valores divididos no tiene ning�n valor. Por lo tanto, la matriz no se puede resolver
				MessageBox(NULL,"No se encontraron valores v�lidos, se abort� la operaci�n","Error", MB_OK | MB_ICONWARNING | MB_DEFBUTTON1);
				break;
			}
		}while(existenciaDeNumerosNegativosEnFilaZ == true);
		if(indiceDeCriterioDeFactibilidadSimplex > 0)
			MessageBox(NULL,"M�todo Simplex completado exitosamente","Matriz Simplex", MB_OK | MB_ICONINFORMATION | MB_DEFBUTTON1);
	}else
		MessageBox(NULL,"M�todo Simplex abortado","Matriz Simplex", MB_OK | MB_ICONINFORMATION | MB_DEFBUTTON1);
	getch();
	return 0;
}

void llenadoDeLaVariableZ(vector <double> &arregloDeInsercionDeValores, bool *banderaDeLlenadoDePrimeraVez){
	
	bool numeroNegativo;
	arregloDeInsercionDeValores.begin();
	
	if(*banderaDeLlenadoDePrimeraVez == true)
		arregloDeInsercionDeValores.push_back(1);
	else{
		arregloDeInsercionDeValores.push_back(0);
		cout<<"\n";
	}
}

void llenadoDeLaVariableX(vector <double> &arregloDeInsercionDeValores, int numeroDeVariables, bool *banderaDeLlenadoDePrimeraVez){
	
	bool numeroNegativo;
	double valorUsuario;
	
	for(int i=0; i<numeroDeVariables; i++){
		do{
			if(*banderaDeLlenadoDePrimeraVez == true)
				cout<<" Ingrese X"<<i+1<<": ";
			else
				cout<<" Ingrese X"<<i+1<<" si existe, 0 en caso contrario: ";
			cin>> valorUsuario;
			if(*banderaDeLlenadoDePrimeraVez == true){
				numeroNegativo= comprobacionDeNumeroMenorOIgualACero(valorUsuario);
				if(numeroNegativo == false){
					valorUsuario= convertirNumeroANegativo(valorUsuario);
					arregloDeInsercionDeValores.push_back(valorUsuario);
				}else
					MessageBox(NULL,"No se aceptan valores negativos, intente de nuevo","Error", MB_OK | MB_ICONWARNING | MB_DEFBUTTON1);
			}else{
				arregloDeInsercionDeValores.push_back(valorUsuario);
			}
		}while(numeroNegativo == true);
	}
	cout<<"\n";
}

void llenadoDeLaVariableH(vector <double> &arregloDeInsercionDeValores, int numeroDeMayorIguales, bool *banderaDeLlenadoDePrimeraVez, int variableSelectivaRH){
	
	bool numeroNegativo;
	static int indiceDeLlenadoDeH= 0; // Nos ayuda a saber en que lugar debemos poner 0 y donde un 1 autom�ticamente
	
	if(*banderaDeLlenadoDePrimeraVez == true)
		for(int i=0; i<numeroDeMayorIguales; i++)
			arregloDeInsercionDeValores.push_back(0);
	else if(variableSelectivaRH == 3){
		
		for(int i=0; i<numeroDeMayorIguales; i++){
			if(i == indiceDeLlenadoDeH)
				arregloDeInsercionDeValores.push_back(-1);
			else
				arregloDeInsercionDeValores.push_back(0);
		}
		indiceDeLlenadoDeH++;
	}else
		for(int i=0; i<numeroDeMayorIguales; i++)
			arregloDeInsercionDeValores.push_back(0);
}

void llenadoDeLaVariableS(vector <double> &arregloDeInsercionDeValores, int numeroDeMenoresIguales, bool *banderaDeLlenadoDePrimeraVez, int variableSelectivaRH){
	
	bool numeroNegativo;
	static int indiceDeLlenadoDeS= 0; // Nos ayuda a saber en que lugar debemos poner 0 y donde un 1 autom�ticamente
	
	if(*banderaDeLlenadoDePrimeraVez == true)
		for(int i=0; i<numeroDeMenoresIguales; i++)
			arregloDeInsercionDeValores.push_back(0);
	else if(variableSelectivaRH == 1){
		for(int i=0; i<numeroDeMenoresIguales; i++){
			if(i == indiceDeLlenadoDeS)
				arregloDeInsercionDeValores.push_back(1);
			else
				arregloDeInsercionDeValores.push_back(0);
		}
		indiceDeLlenadoDeS++;
	}else
		for(int i=0; i<numeroDeMenoresIguales; i++)
			arregloDeInsercionDeValores.push_back(0);
}

void llenadoDeLaVariableR(vector <double> &arregloDeInsercionDeValores, int sumaDeR, bool *banderaDeLlenadoDePrimeraVez, int variableSelectivaRH, double variableGranM){
	
	bool numeroNegativo;
	static int indiceDeLlenadoDeR= 0; // Nos ayuda a saber en que lugar debemos poner 0 y donde un 1 autom�ticamente
	
	if(*banderaDeLlenadoDePrimeraVez == true)
		for(int i=0; i<sumaDeR; i++)
			arregloDeInsercionDeValores.push_back(variableGranM);
	else if(variableSelectivaRH != 1){
		for(int i=0; i<sumaDeR; i++){
			if(i == indiceDeLlenadoDeR)
				arregloDeInsercionDeValores.push_back(1);
			else
				arregloDeInsercionDeValores.push_back(0);
		}
		indiceDeLlenadoDeR++;
	}else
		for(int i=0; i<sumaDeR; i++)
			arregloDeInsercionDeValores.push_back(0);
}

void llenadoDelLadoDerechoDeLaEcuacion(vector <double> &arregloDeInsercionDeValores, bool *banderaDeLlenadoDePrimeraVez){
	
	bool numeroNegativo;
	double valorUsuario;
	
	if(*banderaDeLlenadoDePrimeraVez == true)
		arregloDeInsercionDeValores.push_back(0);
	else{
		do{
			cout<<"\n\n Ingrese el valor derecho de la ecuaci�n: ";
			cin>> valorUsuario;
			numeroNegativo= comprobacionDeNumeroMenorACero(valorUsuario);
			if(numeroNegativo == false)
				arregloDeInsercionDeValores.push_back(valorUsuario);
			else
				MessageBox(NULL,"No se aceptan valores negativos, intente de nuevo","Error", MB_OK | MB_ICONWARNING | MB_DEFBUTTON1);
		}while(numeroNegativo == true);
	}
	*banderaDeLlenadoDePrimeraVez= false;
}

void llenadoDeMatrizSimplex(vector < vector <double> > &matrizSimplex, vector <double> &arregloDeInsercionDeValores){
	
	static int posicionFila= 0; // Nos ayuda a saber en que fila quedamos anteriormente para llenar esa fila que se nos indica
	
	for(int j=0; j<arregloDeInsercionDeValores.size(); j++){
		matrizSimplex[posicionFila][j]= arregloDeInsercionDeValores[j];
	}
	posicionFila++;
}

void llenarFilaDeVariablesLetras(vector <string> &filaDeVariablesLetras, int numeroDeVariables, int numeroDeMenoresIguales, int numeroDeIguales, int numeroDeMayoresIguales){
	
	string palabra;
	int aux;
	
	filaDeVariablesLetras.push_back("B�sicas");
	filaDeVariablesLetras.push_back("Z");
	for(int i=0; i<numeroDeVariables; i++){
		aux= i+1;
		palabra= "X"+to_string(aux);
		filaDeVariablesLetras.push_back(palabra);
	}
	for(int j=0; j<numeroDeMayoresIguales; j++){
		aux= j+1;
		palabra= "h"+to_string(aux);
		filaDeVariablesLetras.push_back(palabra);
	}
	for(int k=0; k<numeroDeMenoresIguales; k++){
		aux= k+1;
		palabra= "S"+to_string(aux);
		filaDeVariablesLetras.push_back(palabra);
	}
	for(int m=0; m<(numeroDeMayoresIguales + numeroDeIguales); m++){
		aux= m+1;
		palabra= "R"+to_string(aux);
		filaDeVariablesLetras.push_back(palabra);
	}
	filaDeVariablesLetras.push_back("Soluci�n");
	
}

void rellenarColumnaDeVariablesLetras(vector <string> &filaDeVariablesLetras, vector <string> &columnaDeVariablesLetras, int indiceDeCriterioDeOptimalidadSimplex, int indiceDeCriterioDeFactibilidadSimplex){
	
	string palabra;
	
	palabra= filaDeVariablesLetras[indiceDeCriterioDeOptimalidadSimplex+1];
	columnaDeVariablesLetras[indiceDeCriterioDeFactibilidadSimplex]= palabra;
	
}

void llenarColumnaDeVariablesLetras(vector <string> &columnaDeVariablesLetras, int variableSelectivaRH, bool *banderaDeLlenadoDePrimeraVez){
	
	string palabra;
	static int indiceR=1;
	static int indiceS=1;
	
	if(*banderaDeLlenadoDePrimeraVez == true)
		columnaDeVariablesLetras.push_back("Z");
	else{
		if(variableSelectivaRH != 1){
			palabra= "R"+to_string(indiceR);
			columnaDeVariablesLetras.push_back(palabra);
			indiceR++;
		}else{
			palabra= "S"+to_string(indiceS);
			columnaDeVariablesLetras.push_back(palabra);
			indiceS++;
		}
	}
}

void transferirNuevaFilaPivote(vector < vector <double> > &matrizSimplex, vector <double> &nuevaFilaPivote, int indiceDeCriterioDeFactibilidadSimplex, int numeroDeColumnas){
	
	// Este bloque de c�digo solo copia la nueva fila pivote que se obtuvo a la matriz principal
	for(int j=0; j<numeroDeColumnas; j++){
		matrizSimplex[indiceDeCriterioDeFactibilidadSimplex][j]= nuevaFilaPivote[j];
	}
}

int encontrarCriterioDeOptimalidadSimplex(vector < vector <double> > &matrizSimplex, int numeroDeColumnas){
	
	// El criterio de optimalidad consiste en encontrar el numero mayor negativo de la fila Z �nicamente, excepto el coheficiente de la columna soluci�n
	
	int indiceDeValorMasNegativo=0, j;
	double valorMasNegativo;
	
	valorMasNegativo= matrizSimplex[0][0];
	for(j=0; j<(numeroDeColumnas-1); j++){
		if(matrizSimplex[0][j] < valorMasNegativo){
			valorMasNegativo= matrizSimplex[0][j];
			indiceDeValorMasNegativo= j;
		}
	}
	return indiceDeValorMasNegativo;
}

int encontrarCriterioDeFactibilidadSimplex(vector < vector <double> > &matrizSimplex, vector <double> &columnaSolucion, vector <double> &columnaPivote){
		
	int indiceDeMenorPositivo, indiceDeError= -1, contadorDeDesplazamiento=0;
	double valorAuxiliar, valorPasar;
	bool bandera= false;
	vector <double> columnaDeValoresDivididos;
	vector <double> columnaDeIndicesDeValoresDivididos;
	vector <double> columnaPivoteAuxiliar;
	
	// Se copia los valores a una columna pivote auxiliar, exeptuando al �ndice 1
	for(int k=1; k<columnaPivote.size(); k++){
		valorPasar= columnaPivote[k];
		columnaPivoteAuxiliar.push_back(valorPasar);
	}
	
	// Si el valor cumple con el requisito, se hace la opraci�n y se almacena el resultado y su �ndice
	for(int i=0; i<columnaPivoteAuxiliar.size(); i++){
		if(columnaPivoteAuxiliar[i] > 0 ){
			valorAuxiliar= columnaSolucion[i] / columnaPivoteAuxiliar[i];
			columnaDeValoresDivididos.push_back(valorAuxiliar);
			columnaDeIndicesDeValoresDivididos.push_back(i);
		}
		if(columnaDeIndicesDeValoresDivididos.size() == 0){
			bandera= true;
			contadorDeDesplazamiento++;
		}
		else
			bandera= false;
	}
	
	// Tenemos que encontrar el n�mero menor de todos los que resultaron exitosamente divididos
	
	if(columnaDeValoresDivididos.size() > 0){
		valorAuxiliar= columnaDeValoresDivididos[0];
		indiceDeMenorPositivo= columnaDeIndicesDeValoresDivididos[0];
		for(int j=0; j<columnaDeValoresDivididos.size(); j++){
			if(columnaDeValoresDivididos[j] < valorAuxiliar){
				valorAuxiliar= columnaDeValoresDivididos[j];
				indiceDeMenorPositivo= columnaDeIndicesDeValoresDivididos[j];
			}
		}
		if(bandera == true)
			indiceDeMenorPositivo= indiceDeMenorPositivo + contadorDeDesplazamiento;
		return indiceDeMenorPositivo + 1;
	}else
		return indiceDeError;
}

void obtenerColumnaSolucion(vector < vector <double> > &matrizSimplex, vector <double> &columnaSolucion, int numeroDeRestricciones, int numeroDeColumnas){
	
	// Este bloque de c�digo s�lo se encarga de obtener la �ltima columna de la matriz, excepto el coheficiente de la fila Z
	
	columnaSolucion.clear();
	for(int i=1; i<=numeroDeRestricciones; i++){
		columnaSolucion.push_back(matrizSimplex[i][numeroDeColumnas-1]);
	}
}

void obtenerColumnaPivote(vector < vector <double> > &matrizSimplex, vector <double> &columnaPivote, int indiceDeCriterioDeOptimalidadSimplex, int numeroDeRestricciones){
	
	// Este bloque de c�digo se encarga de obtener toda la columna pivote
	
	columnaPivote.clear();
	for(int i=0; i<=numeroDeRestricciones; i++){
		columnaPivote.push_back(matrizSimplex[i][indiceDeCriterioDeOptimalidadSimplex]);
	}
}

double obtenerElementoPivote(vector < vector <double> > &matrizSimplex, int indiceDeCriterioDeOptimalidadSimplex, int indiceDeCriterioDeFactibilidadSimplex){
	
	// Ya con las coordenadas en I y J, podemos obtener el elemento pivote que se encuentra en esa ubicaci�n
	
	double valorDeElementoPivote;
	valorDeElementoPivote= matrizSimplex[indiceDeCriterioDeFactibilidadSimplex][indiceDeCriterioDeOptimalidadSimplex];
	return valorDeElementoPivote;
}

void obtenerNuevaFilaPivote(vector < vector <double> > &matrizSimplex, vector <double> &nuevaFilaPivote, int indiceDeCriterioDeFactibilidadSimplex, int numeroDeColumnas, double valorDeElementoPivote){
	
	// Aqui tomamos la fila pivote y obtenemos la nueva fila pivote, despu�s de haberla dividio entre el elemento pivote obtenido anteiormente
	// NUEVA_FILA_PIVOTE= FILA_PIVOTE_ACTUAL / ELEMENTO_PIVOTE
	
	nuevaFilaPivote.clear();
	vector <double> arregloAuxiliar;
	double valorAuxiliar;
	
	for(int j=0; j<numeroDeColumnas; j++){
		valorAuxiliar= matrizSimplex[indiceDeCriterioDeFactibilidadSimplex][j];
		arregloAuxiliar.push_back(valorAuxiliar);
		valorAuxiliar= arregloAuxiliar[j] / valorDeElementoPivote;
		nuevaFilaPivote.push_back(valorAuxiliar);
	}
}

void obtenerNuevasFilasNormales(vector < vector <double> > &matrizSimplex, vector <double> &columnaPivote, vector <double> &nuevaFilaPivote, int numeroDeFilas, int numeroDeColumnas, int indiceDeCriterioDeFactibilidadSimplex){
	
	// Aqu� vamos obteniendo las nuevas filas restantes mediante la ecuaci�n:
	// NUEVA FILA NORMAL = FILA ACTUAL - ( COHEFICIENTE ACTUAL DE LA FILA PIVOTE * FILA PIVOTE )
	
	double valorAuxiliar;
	
	for(int i=0; i<numeroDeFilas; i++){
		if(i != indiceDeCriterioDeFactibilidadSimplex){
			for(int j=0; j<numeroDeColumnas; j++){
				valorAuxiliar= matrizSimplex[i][j] - (columnaPivote[i] * nuevaFilaPivote[j]);
				matrizSimplex[i][j]= valorAuxiliar;
			}
		}
	}
}

void obtenerNumerosEnFilaZ(vector < vector <double> > &matrizSimplex, vector <double> &numerosDeFilaZ, int numeroDeColumnas){
	
	// Aqu� lo �nico que hacemos es obtener todos los valores de la nueva fila Z
	
	numerosDeFilaZ.clear();
	double valorAuxiliar;
	
	for(int j=0; j<numeroDeColumnas; j++){
		valorAuxiliar= matrizSimplex[0][j];
		numerosDeFilaZ.push_back(valorAuxiliar);
	}
}

bool comprobarExistenciaDeNumerosNegativosEnLaFilaZ(vector <double> &numerosDeFilaZ){
	
	// Comprobamos que en la fila Z, al final de la iteraci�n, a�n existan valores negativos para seguir iterando en el bucle do-while
		
	bool existenciaDeNumerosNegativosEnFilaZ;
	
	for(int i=0; i<numerosDeFilaZ.size(); i++){
		if(numerosDeFilaZ[i] >= 0)
			existenciaDeNumerosNegativosEnFilaZ= false;
		else{
			existenciaDeNumerosNegativosEnFilaZ= true;	
			return existenciaDeNumerosNegativosEnFilaZ;
		}
	}
	return existenciaDeNumerosNegativosEnFilaZ;
}

void vaciarMatrizSimplex(vector < vector <double> > &matrizSimplex, int numeroDeFilas, int numeroDeColumnas){
	
	// Aqu� solo vaciamos la matriz principal, dejamos todos los espacios con valor 0
	
	for(int i=0; i<numeroDeFilas; i++){
		for(int j=0; j<numeroDeColumnas; j++){
			matrizSimplex[i][j]= 0;
		}
	}
}

void imprimirArregloDeInsercionDeValores(vector <double> &arregloDeInsercionDeValores){
	
	// Este bloque de c�digo s�lamente imprime el buffer de entrada, o cualquier vector unidimensional de valores
	
	cout<<"\n\n";
	for(int i=0; i<arregloDeInsercionDeValores.size(); i++)
		cout<< setw(5)<< left<< " "<< setw(5)<< arregloDeInsercionDeValores[i];
	cout<<"\n\n";
}

void imprimirArregloDePalabras(vector <string> &arregloDePalabras){
	
	// Este bloque de c�digo imprime cualquier vector unidimensional de palabras en forma horizontal
	
	cout<<"\n\n";
	for(int i=0; i<arregloDePalabras.size(); i++)
		cout<< setw(6)<< left<< " "<< setw(6)<< arregloDePalabras[i];
	cout<<"\n\n";
}

void imprimirColumnaDePalabras(vector <string> &arregloDePalabras){
	
	// Este bloque de c�digo imprime cualquier vector unidimensional de palabras en forma vertical
	static int i= 0;
	
	cout<< setw(6)<< left<< " "<< setw(6)<< arregloDePalabras[i];
	i++;
	if(i == arregloDePalabras.size() ){
		i= 0;
	}
}

void imprimirMatrizSimplex(vector < vector <double> > &matrizSimplex, vector <string> &filaDePalabras, vector <string> &columnaDePalabras,int numeroDeFilas, int numeroDeColumnas){
	
	// Con esto imprimimos todos los valores que contenga la matriz simplex
	
	printf("\n\n");
	imprimirArregloDePalabras(filaDePalabras);

		for(int i=0; i<numeroDeFilas; i++){
			imprimirColumnaDePalabras(columnaDePalabras);
			for(int j=0; j<numeroDeColumnas; j++)
				cout<< setw(6)<< left<< " "<< setw(6)<< setprecision(1) << fixed << matrizSimplex[i][j];
			cout<<"\n";
		}
}

bool comprobacionDeNumeroMenorACero(double numeroIntroducidoPorUsuario){
	
	// La primera vez que inserta el usuario los valores de la fila Z, se comprueba que algunos casos no sean negativos
	
	bool numeroNegativo= false;
	if(numeroIntroducidoPorUsuario <0)
		numeroNegativo= true;
	return numeroNegativo;
}

bool comprobacionDeNumeroMenorOIgualACero(double numeroIntroducidoPorUsuario){
	
	// La primera vez que inserta el usuario los valores de la fila Z, se comprueba que algunos casos no sean negativos
	
	bool numeroNegativo= false;
	if(numeroIntroducidoPorUsuario <= 0)
		numeroNegativo= true;
	return numeroNegativo;
}

double convertirNumeroANegativo(double valorUsuario){
	
	// Este bloque de c�digo s�lo ejecuta cuando el usuario inserta los valores de la fila Z, los convierte todos a negativos
	
	double numeroConvertido;
	numeroConvertido= valorUsuario*-1;
	return numeroConvertido;
}

int implementarModuloDeMenu(){
	
	int posicionActual, finalMenu, numeroDeOpciones;
	char teclaOprimida;
	string opcionesMenu[]={"1. Maximizar","2. Minimizar","3. Salir del men�"};
	
	posicionActual = 0;
	finalMenu = 0;
	numeroDeOpciones= 3;
	
	imprimirMenuDeOpciones(opcionesMenu,posicionActual, numeroDeOpciones);
	do{
		teclaOprimida = getch();
		switch(teclaOprimida){
			case 72: if (posicionActual == 0) posicionActual = 2;
					else posicionActual--;
			break;
			case 80: if (posicionActual == 2) posicionActual =0;
					else posicionActual++;
			break;
			case 13: finalMenu = 1;
			break;
		}
		imprimirMenuDeOpciones(opcionesMenu,posicionActual, numeroDeOpciones);
	}while(!finalMenu);
	system("cls");
	
	return (posicionActual + 1);
}

void imprimirMenuDeOpciones(string opcionesMenu[], int posicionActual, int numeroDeOpciones){
	
	//gotoxy(4,2);
	system("cls");
	cout<<" M�TODO SIMPLEX AVANZADO"<< endl;
	cout<<"-----------------------"<< endl<< endl<< endl;
	cout<<" Seleccione el tipo objetivo a alcanzar:"<< endl;
	for(int i=0; i < numeroDeOpciones; i++){
		if(posicionActual == i){
			highvideo();
			textbackground(GREEN);
			//gotoxy(5,i+3);
			cout<< "\n\t"<< opcionesMenu[i];
			lowvideo();
			textbackground(BLACK);
		}else{
			//gotoxy(5,i+3);
			cout<< "\n\t"<< opcionesMenu[i];
		}
	}
}

int implementarModuloDeMenuRestricciones(int indiceI){
	
	int posicionActual= 0;
	
	if(indiceI != 0){
	
		int finalMenu= 0, numeroDeOpciones= 3;
		char teclaOprimida;
		string opcionesMenu[]={"1. <=","2. =","3. >="};
		
		imprimirMenuDeRestricciones(opcionesMenu,posicionActual, numeroDeOpciones, indiceI);
		do{
			teclaOprimida = getch();
			switch(teclaOprimida){
				case 72: if (posicionActual == 0) posicionActual = 2;
						else posicionActual--;
				break;
				case 80: if (posicionActual == 2) posicionActual =0;
						else posicionActual++;
				break;
				case 13: finalMenu = 1;
				break;
			}
			imprimirMenuDeRestricciones(opcionesMenu,posicionActual, numeroDeOpciones, indiceI);
		}while(!finalMenu);
	}
	return (posicionActual+1);
}

void imprimirMenuDeRestricciones(string opcionesMenu[], int posicionActual, int numeroDeOpciones, int indiceI){
	
	system("cls");
	cout<<" M�TODO SIMPLEX AVANZADO"<< endl;
	cout<<"-----------------------"<< endl<< endl<< endl;
	cout<<" Seleccione el tipo de operador l�gico de la restrcci�n "<< indiceI<< ": "<< endl;
	for(int i=0; i < numeroDeOpciones; i++){
		if(posicionActual == i){
			highvideo();
			textbackground(GREEN);
			cout<< "\n\t"<< opcionesMenu[i];
			lowvideo();
			textbackground(BLACK);
		}else{
			cout<< "\n\t"<< opcionesMenu[i];
		}
	}
	cout<<"\n";
}

int encontrarElNumeroMayor(vector <double> &arregloDeNumeros){
	
	double valorMasNegativo;
	
	valorMasNegativo= arregloDeNumeros[0];
	for(int i=0; i<arregloDeNumeros.size(); i++){
		if(arregloDeNumeros[i] < valorMasNegativo){
			valorMasNegativo= arregloDeNumeros[i];
		}
	}
	return (valorMasNegativo * -1);
}

void corregirTablaDeMalComportamiento(vector < vector <double> > &matrizSimplex, vector <double> &arrayIndicesR, int opcionMenu, double variableGranM, int numeroDeColumnas){
	
	double sumaDeVariablesR= 0;
	double resultadoR;
	int indice, posicion=0;
	
		for(int j=0; j<numeroDeColumnas; j++){
			for(int k=0; k<arrayIndicesR.size(); k++){
				indice= arrayIndicesR[k];
				sumaDeVariablesR= sumaDeVariablesR + matrizSimplex[indice][posicion];
			}
			posicion++;
			resultadoR= variableGranM * sumaDeVariablesR;
			sumaDeVariablesR= 0;
			if(opcionMenu == 1)
				matrizSimplex[0][j]= matrizSimplex[0][j] - resultadoR;
			else
				matrizSimplex[0][j]= matrizSimplex[0][j] + resultadoR;
		}
}
