#include "paulo.h"
using namespace std;
int opcion;
void menu_principal();
void menu_parciales();
void parcial_1();
void parcial_1_pagina_1();
void parcial_1_pagina_2();
void parcial_1_pagina_3();
void parcial_2();
void parcial_2_pagina_1();
void parcial_2_pagina_2();
void parcial_2_pagina_3();
void parcial_3();
void parcial_3_pagina_1();
void parcial_3_pagina_2();
void parcial_3_pagina_3();
void programa_1();
void programa_2();
void programa_3();
void programa_4();
void programa_5();
void programa_6();
void programa_7();
void programa_8();
void programa_9();
void programa_10();
void programa_11();
void programa_12();
void programa_13();
void programa_14();
void programa_15();
void programa_16();
void programa_17();
void programa_18();
void programa_19();
void programa_20();
void programa_21();
void programa_22();
void programa_23();
void programa_24();
void programa_25();
void programa_26();
void programa_27();
void programa_28();
void programa_29();
void programa_30();
void programa_31();
void programa_32();
void programa_33();
void programa_34();
void programa_35();
void programa_36();
void programa_37();
void programa_38();
void programa_39();
void programa_40();
void programa_41();
void programa_42();
void programa_43();
void programa_44();
void programa_45();
void programa_46();
void programa_47();
void programa_48();
void programa_49();
void programa_50();
void programa_51();
void programa_52();
void programa_53();
void programa_54();
void programa_55();
void programa_56();
void programa_57();
void programa_58();
void programa_59();
void programa_60();
void programa_61();
void programa_62();
void programa_63();
void programa_64();
void programa_65();
void programa_66();
void programa_67();
void programa_68();
void programa_69();
void programa_70();
void programa_71();
void programa_72();
void programa_73();
void programa_74();
void programa_75();
void programa_76();
void programa_77();
float suma(float a, float b);
bool esFechaValida(int anio, int mes, int dia);
void marco();
void posxy (int x, int y);
void delay(int secs);
string mayusculas(string texto);
string minusculas(string texto);
void selectionSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void transpmatrix ();
void MENU();
float A[100][100];
float B[100][100];
float C[100][100];
int m, n;
void sumatrian();
void suma2m();
void getm2();
void getm();
int escalar;
void mxescalar();
void portada();
void marcomatriz3x3();
float AS[3][3];
void matriz();
void sumad();
void sumainf();
void sumasup();
void matriz3x3();
void hallar_inversa(void);
void escalonar_matriz(void);
void permutar_filas(int fila1, int fila2);
void multip_fila(int fila,double factor);
void sumar_fila_multip(int fila1,int fila2, double factor);
void ceros_abajo(int fila_pivote, int columna_pivote);
void ceros_arriba(int fila_pivote, int columna_pivote);
void generar_matriz_identidad(void);
void lectura();
struct vehiculo 
{
	string modelo;
	string marca;
	string anio;
	string color;

};
//____________________________________________________________________________INT MAIN___________________________________________________________________________________________________________________
int main(){
    menu_principal();
    system("pause");
    return 0;
}
//____________________________________________________________________________FUNCIONES___________________________________________________________________________________________________________________
void portada(){
	system("color 09");
	marco(1,1,80,2);
	centrarStr("UNIVERSIDAD LA SALLE OAXACA",2);
	marco(1,4,80,18);
	centrarStr("EXAMEN DE TERCER PARCIAL",6);
	centrarStr("INGENIERIA DE SOFTWARE",7);
	centrarStr("SEGUNDO SEMESTRE",8);
	centrarStr("FUNDAMENTOS DE PROGRAMACION ESTRUCTURADA EN C++",9);
	centrarStr("MAYO 2023",10);
	centrarStr("Alumnos:",11);
	centrarStr("Jonathan Garcia-Sanchez",12);
	centrarStr("Yanh Mauricio Luna Flores",13);
	centrarStr("Hector Adrian Paulo Vasquez",14);
	centrarStr("Profesor: Dr. Carlos Miguel",17);
	posxy(20,19);system("pause");
}
void agregar() {
    int n = 0;

    posxy(2,2);cout<<"INGRESE LOS DATOS DE UN NUEVO VEHICULO";
    posxy(2,4);cout<<"Cuantos vehiculos desea ingresar? ";
    cin >> n;

    vehiculo **autop = new vehiculo*[n]; // Create an array of n pointers to vehiculo objects

    //formato marcoxy
    marcoxy(n+1,4,2,8);
    posxy(3,9);cout<<"MODELO";
    posxy(20,9);cout<<"MARCA";
    posxy(35,9);cout<<"ANIO";
    posxy(50,9);cout<<"COLOR";

    cin.ignore(); // Ignore any leftover input from previous cin calls

    for (int i = 0; i < n; i++)
    {
        autop[i] = new vehiculo; // Create a new vehiculo object and store its pointer in autop[i]

        posxy(3,i*2+11);getline(cin, autop[i]->modelo); // Access the modelo member of the object using the -> operator
        posxy(20,i*2+11);getline(cin, autop[i]->marca);
        posxy(35,i*2+11);getline(cin, autop[i]->anio);
        posxy(50,i*2+11);getline(cin, autop[i]->color);
    }

    // Do something with the autop array, e.g. print all vehicles
    for (int i = 0; i < n; i++)
    {
        cout << autop[i]->modelo << ", "; // Access the modelo member of the object using the -> operator
        cout << autop[i]->marca << ", ";
        cout << autop[i]->anio << ", ";
        cout << autop[i]->color << endl;

        delete autop[i]; // Free the memory allocated for the vehiculo object
    }

    delete[] autop; // Free the memory allocated for the autop array
}

void MENU2(){
	int menu, option;
	menu=1;
		while (menu==1){
		system("cls");
		marco(1,1,80,24);
		system("color 09");
		centrarStr("MENU VEHICULOS", 2);
		centrarStr("1.- MOSTRAR TODOS ", 6);
		centrarStr("2.- AGREGAR ", 10);
        centrarStr("0.- SALIR)", 14);
		centrarStr("Introduzca la opcion deseada [  ]",18);
		posxy(53,18);cin>>option;
		switch (option){ 
	
	
		case 1:{
		system("cls");
			cout<<"Este no saliÃ³ :(";
		    posxy(2,22);system ("pause");
		    break;
			}

		case 2:{
			system("cls");
			agregar();
		    posxy(2,22);system ("pause");
		    break;
		}
		
	
		
		case 0:{
			menu=menu+1;
			system("cls");
			marco(1,1,80,10);
			system("color 09");
			centrarStr("FIN!!", 5);
			posxy(2,7);system ("pause");
			break;
		}
	}}}

 void MENU(){
	int menu, option;
	menu=1;
		while (menu==1){
		system("cls");
		marco(1,1,80,24);
		system("color 09");
		centrarStr("MENU DE OPCIONES", 2);
		centrarStr("1.- MATRIZ ELEVADA A N POTENCIA ", 6);
		centrarStr("2.- VEHICULOS", 10);
        centrarStr("0.- SALIR)", 14);
		centrarStr("Introduzca la opcion deseada [  ]",18);
		posxy(53,18);cin>>option;
		switch (option){ 
	
	
	case 1: {
    
    system("cls");
    int n=0;
    int m=0;
    posxy(2,2);cout<<"Ingrese la dimension de la matriz: ";
    posxy(2,3);cin>>n;
    posxy(2,4);cout<< "Digite un numero para la potencia de la matriz (mayor a cero)";
    posxy(2,5);cin>>m;
    if (m<=0) {
        system("cls");
        centrarStr("Â¿QuÃ© parte de MAYOR QUE 0 no entiendes?", 10);
        system("pause");
        break;
    }

    float A[10][10], B[10][10], C[10][10], D[10][10];

    system("cls");
    posxy(2, 2);cout<<"Ingrese la matriz: ";
    marcomatriz(2,5,n,n);
    for (int fila=0; fila<n; fila++) {
        for (int columna=0; columna<n; columna++) {
            posxy(7+columna*10, 6+fila*2);cin>>A[fila][columna];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            B[i][j]=A[i][j];
        }
    }

    for (int k=0; k<m; k++) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                D[i][j]=0;
                for (int x=0; x<n; x++) {
                    D[i][j]+=B[i][x] *A[x][j];
                }
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                C[i][j]=D[i][j];
            }
        }
    }

    system("cls");
    marcomatriz(2, 2, n, n);
    for (int fila=0; fila<n; fila++) {
        for (int columna=0; columna<n; columna++) {
            posxy(4+columna*10,3+fila*2);cout<<C[fila][columna];
        }
    }

    posxy(60,28);
    system("pause");
    break;
}


		case 2:{
			system("cls");
			MENU2();
		    posxy(2,22);system ("pause");
		    break;
		}
		
	
		
		case 0:{
			menu=menu+1;
			system("cls");
			marco(1,1,80,10);
			system("color 09");
			centrarStr("FIN!!", 5);
			posxy(2,7);system ("pause");
			break;
		}
	}}}
void lectura() {
    ifstream archivo;
    string texto; // Declarar la variable texto dentro del ámbito de la función

    archivo.open("archivo.txt", ios::in);

    if (!archivo) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    while (getline(archivo,texto)) {
        cout << texto << endl;
    }

    archivo.close();
}   

/*void hallar_inversa(void)
{
    int N = 10; // Assign a value to N
    int cont, cont2, flag = 0;

    escalonar_matriz();
    generar_matriz_identidad(); //rellena la matriz identidad

    for (cont = 0; cont < N; cont++) //recorre filas
    {
        for (cont2 = 0; cont2 < N; cont2++) //recorre columnas
        {
            if (matriz[cont][cont2] != 0) //busca pivote (elemento ditinto de 0)
            {
                if (matriz[cont][cont2] != 1) //si pivote no es 1, se lo multiplica
                {
                    multip_fila(cont,pow(matriz[cont][cont2],-1));
                }

                ceros_arriba(cont,cont2); // se hacen 0's por arriba
                ceros_abajo(cont,cont2); // y por debajo del pivote

                break;
            }
        }
    }
} // Add two closing braces to close the for loop and the function body
 
/*--------------------------------------------------------------*/
/* Una vez terminada esta operacion, la matriz identidad estara */
/* transformada en la inversa */
/* */
/* Ahora se comprueba que la matriz original este transformada */
/* en la matriz identidad, de no ser asi la inversa obtenida */
/* no es valida y la matriz no tiena inversa */
/*--------------------------------------------------------------*/
 
/*for(cont=0;cont<N;cont++){
for(cont2=0;cont2<N;cont2++){
if(cont==cont2){
if(matriz[cont][cont2]!=1) flag=1;
}
else{
if(matriz[cont][cont2]!=0) flag=1;
}
}
}
if(flag==1)
{
cout<<"La matriz no tiene inversa";
}
else
{
cout<<"nnLa Matriz Inversa es :";
 
for(cont=0;cont<N;cont++)
{
for(cont2=0;cont2<N;cont2++)
{
cout<<"%+#0.3f ",identidad[cont][cont2]);
 
}
cout<<"n");
}
}
 
 
cout<<"nPresione una tecla para continuar...");
getch();
 
 
}*/
/*void escalonar_matriz(void)
{
int cont, col, ceros, vec[10];
int flag, aux;
 
for(cont=0;cont<N;cont++)
{
col=0,ceros=0;
 
if(matriz[cont][col]==0)
{
do{
ceros++;
col++;
}while(matriz[cont][col]==0);
}
vec[cont]=ceros;
} 
do
{
flag=0;
for(cont=0;cont<N-1;cont++)
{
if(vec[cont]>vec[cont+1])
{
aux=vec[cont];
vec[cont]=vec[cont+1];
vec[cont+1]=aux;
 
permutar_filas(cont,cont+1);
 
flag=1;
}
}
}while(flag==1);
 
}*/
 
/*----------------------------------------------------------------------*/
/* SE DEFINEN LAS 3 OPERACIONES ELEMENTALES DE FILA */
/* */
/* Las operaciones que se le realizen a la matriz para reducirla */
/* tambien deberan realizarsele a la matriz identidad para obtener */
/* la matriz inversa */
/*----------------------------------------------------------------------*/
 
 
/*void permutar_filas(int fila1,int fila2)
{
float auxval;
int cont;
 
for(cont=0;cont<N;cont++)
{
auxval=matriz[fila1][cont];
matriz[fila1][cont]=matriz[fila2][cont];
matriz[fila2][cont]=auxval;
 
auxval=identidad[fila1][cont];
identidad[fila1][cont]=identidad[fila2][cont];
identidad[fila2][cont]=auxval;
}
}*/
 
/*----------------------------------------------------------------------*/
 
/*void multip_fila(int fila,double factor)
{
int cont;
 
for(cont=0;cont<N;cont++)
{
matriz[fila][cont]=(matriz[fila][cont])*factor;
identidad[fila][cont]=(identidad[fila][cont])*factor;
}
}*/
 
/*----------------------------------------------------------------------*/
 
/*void sumar_fila_multip(int fila1,int fila2, double factor)
{
int N
int cont;
for(cont=0;cont<N;cont++)
{
matriz[fila1][cont]=(matriz[fila1][cont])+((matriz[fila2][cont])*factor);
identidad[fila1][cont]=(identidad[fila1][cont])+((identidad[fila2][cont])*factor);
}
}
 
 
void ceros_arriba(int fila_pivote, int columna_pivote)
{
int cont;
 
for(cont=0;cont<fila_pivote;cont++)
{
sumar_fila_multip(cont,fila_pivote,((matriz[cont][columna_pivote])*(-1)));
 
}
}
 
/*-------------------------------------------------------------------------*/
/*void ceros_abajo(int fila_pivote, int columna_pivote)
{
int cont;
 
for(cont=columna_pivote+1;cont<N;cont++)
{
sumar_fila_multip(cont,fila_pivote,((matriz[cont][columna_pivote])*(-1)));
}
 
}
/*-------------------------------------------------------------------------*/
/*void generar_matriz_identidad(void)
{
int i,j;
for(i=0;i<50;i++)
{
for(j=0;j<50;j++)
{
if(i==j) identidad[i][j]=1;
else identidad[i][j]=0;
}
}
}*/
void matriz3x3(){

char c;	

c=218;	
posxy(2,2);cout<<c;	
c=191;
posxy(14,2);cout<<c;	
c=192;
posxy(2,8);cout<<c;
c=217;
posxy(14,8);cout<<c;	

c=196;
for (int i=0; i<11; i++){
	posxy(3+i,2);cout<<c;
	posxy(3+i,8);cout<<c;
	posxy(3+i,4);cout<<c;
	posxy(3+i,6);cout<<c;
}


c=179;
for (int i=0; i<5; i++){
	posxy(2,3+i);cout<<c;
	posxy(14,3+i);cout<<c;
	posxy(6,3+i);cout<<c;
	posxy(10,3+i);cout<<c;
	
}

c=197;
posxy(6,4);cout<<c;
posxy(10,4);cout<<c;
posxy(6,6);cout<<c;
posxy(10,6);cout<<c;
}
void matriz(){
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		posxy(3+4*columna,3+fila*2);cin>>A[fila][columna];				
}
}
}
void marcomatriz3x3(){

char c;	

c=218;	
posxy(2,2);cout<<c;	
c=191;
posxy(14,2);cout<<c;	
c=192;
posxy(2,8);cout<<c;
c=217;
posxy(14,8);cout<<c;	

c=196;
for (int i=0; i<11; i++){
	posxy(3+i,2);cout<<c;
	posxy(3+i,8);cout<<c;
	posxy(3+i,4);cout<<c;
	posxy(3+i,6);cout<<c;
}


c=179;
for (int i=0; i<5; i++){
	posxy(2,3+i);cout<<c;
	posxy(14,3+i);cout<<c;
	posxy(6,3+i);cout<<c;
	posxy(10,3+i);cout<<c;
	
}

c=197;
posxy(6,4);cout<<c;
posxy(10,4);cout<<c;
posxy(6,6);cout<<c;
posxy(10,6);cout<<c;
}


void sumad(){
	int suma=0;
	
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		if (fila==columna)	{
			suma=suma+A[fila][columna];
		}			
}
}	
		cout<<"La suma de los elementos de la diagonal principal es: "<<suma;			
}

void sumainf(){
	int suma=0;
	
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		if (fila>columna)	{
			suma=suma+A[fila][columna];
		}			
}
}	
		cout<<"La suma de los elementos de la triangular inferior es: "<<suma;			
}


void sumasup(){
	int suma=0;
	
		for(int fila=0; fila<3; fila ++){
		for(int columna=0; columna<3; columna++){	
		if (fila<columna)	{
			suma=suma+A[fila][columna];
		}			
}
}	
		cout<<"La suma de los elementos de la triangular superior es: "<<suma;			
}

	void getm(){
		marco(1,1,80,24);
		posxy(2,2);cout<<"Ingrese el numero de filas: ";
	    cin>>m;
	    posxy(2,3);cout<<"Ingrese el numero de columnas: ";
	    cin>>n;
	    system("cls");
	    if (n==m){
    		marco(1,1,80,28);
   			 for(int fila=0; fila<m; fila++){
        	for(int columna=0; columna<n; columna++){
            posxy(2+columna*3,2+fila*2);cin>>A[fila][columna];
           
        }}}
	    
	}
	void transpmatrix (){
    posxy(2,15);cout<<"La transpuesta de la matriz es:";
       		for(int fila=0; fila<m; fila++){
        	for(int columna=0; columna<n; columna++){
            posxy(2+columna*3,17+fila*2);cout<<A[columna][fila];
        }
    } 
}

void sumatrian(){
	int sumainf=0, sumasup=0;
		for(int fila=0; fila<m; fila++){
		for(int columna=0; columna<n; columna++){	
		if (fila>columna)	{
			sumainf=sumainf+A[fila][columna];
		}	
		else if (fila<columna){
			sumasup=sumasup+A[fila][columna];
		}		
}
}
posxy(2,15);cout<<"La suma de los elementos de la triangular inferior es: "<<sumainf;	
posxy(2,16);cout<<"La suma de los elementos de la triangular superior es: "<<sumasup;

}

void getm2(){
		posxy(2,2);cout<<"Ingrese el numero de filas: ";
	    cin>>m;
	    posxy(2,3);cout<<"Ingrese el numero de columnas: ";
	    cin>>n;
	    system("cls");
	    if (n==m){
    		marco(1,1,80,28);
   			 for(int fila=0; fila<n; fila++){
        	for(int columna=0; columna<m; columna++){
            posxy(2+columna*3,2+fila*2);cin>>A[fila][columna];
           
        }}
			
   			 for(int fila=0; fila<n; fila++){
        	for(int columna=0; columna<m; columna++){
            posxy(15+columna*3,2+fila*2);cin>>B[fila][columna];
       		 }
   			 }

		}
}

void suma2m(){
    posxy(2,12);cout<<"La suma es igual a : ";
    
	for(int fila=0; fila<n; fila++){
        	for(int columna=0; columna<m; columna++){
           C[fila][columna]= A[fila][columna]+B[fila][columna];
            posxy(2+columna*5,15+fila*2);cout<<C[fila][columna];
        }
    }
}
void mxescalar(){
		
	    posxy(2,13);cout<<"La multiplicacion es igual a : ";
	     for(int fila = 0; fila<m; fila++){
        	for(int columna=0; columna<n; columna++){
           B[fila][columna] = A[fila][columna]*escalar;
            posxy(2+columna*5,15+fila*2);cout<< B[fila][columna];
        }
    } 
}
float suma(float a, float b) {
    return a + b;
}
bool esFechaValida(int anio, int mes, int dia) {
    if (mes < 1 || mes > 12) return false; // Verificar mes
    if (dia < 1 || dia > 31) return false; // Verificar día
    
    if (mes == 2) { // Febrero tiene menos de 31 días
        if (dia > 29) return false; // Verificar que no se haya excedido los días en febrero
        if (dia == 29 && (anio % 4 != 0 || (anio % 100 == 0 && anio % 400 != 0))) return false; // Verificar año bisiesto
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { // Meses con 30 días
        if (dia > 30) return false;
    }
    
    return true; // Si pasa todas las verificaciones, es una fecha válida
}
void marco(){
	char c;
	c = 201;
	posxy (1,1);cout<<c;
	c = 187;
	posxy (80, 1); cout<<c;
	c = 200;
	posxy (1, 24); cout<<c;
	c = 188;
	posxy (80, 24); cout<<c;
	
	c= 205;
	for (int i=2;i<80;i++){
		posxy (i, 1);cout<<c;
		posxy (i, 24);cout<<c;
	}
	posxy(5, 15);cout<<c;
	c = 64;
	posxy (10, 15);cout<<c<<endl<<endl;
		c = 186;
	for (int i=2; i<24;i++){
		posxy (1, i); cout<<c;
		posxy (80, i); cout<<c;
	}
}
/* NO PUEDO DECLARAR DOS VECES ESTA CODIGO, LO COMENTO PORQUE YA ESTÁ EN LA LIBRERÍA:
void posxy (int x, int y){
	COORD coordenada;
	coordenada.X=x;
	coordenada.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordenada);
}

void delay(int secs){
	for(int i = (time(NULL) + secs); time (NULL) != i; time(NULL));
}
    string mayusculas(string texto) {
    string resultado = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (c >= 'a' && c <= 'z') {
            resultado += c - 'a' + 'A';
        } else {
            resultado += c;
        }
    }
    return resultado;
}

string minusculas(string texto) {
    string resultado = "";
    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];
        if (c >= 'A' && c <= 'Z') {
            resultado += c - 'A' + 'a';
        } else {
            resultado += c;
        }
    }
    return resultado;
}*/

    void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Intercambiar los elementos
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
    void bubbleSort(int arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Intercambiar los elementos
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
void menu_principal(){
        do{
            system("cls");
            system("color 70");
            marcoxy(27, 110, 2, 1);
            centrarStr("UNIVERSIDAD LA SALLE OAXACA",2);
            centrarStr(" PROGRAMAS DE TODO EL SEMESTRE", 5);
            centrarStr("INGERNIERIA EN SOFTWARE & SISTEMAS COMPUTACIONALES", 7);
            centrarStr("SEGUNDO SEMESTRE", 8);
            centrarStr("FUNDAMENTOS DE PROGRAMACION ESTRUCTURADA.", 10);
            centrarStr("Hector Adrian Paulo Vazquez", 12);
            centrarStr("Profesor: Dr. Carlos Miguel.",13);
            posxy(3, 15);cout<<"0. Terminar programa";
            posxy(3, 17);cout<<"1. Ir al menu parciales";
            posxy(3, 20);cout<<"Opcion[ ]";
            posxy(10, 20);cin>>opcion;
            switch(opcion){
                case 0: {
                    system("cls");
                    system("color 70");
                    exit(0);
                }
                case 1: {
                    system("cls");
                    system("color 70");
                    menu_parciales();
                    system("pause");
                    break;
                }
                default: {
                    system("cls");
                    system("color 70");
                    marcoxy(27, 110, 2, 1);
                    centrarStr("Opcion invalida", 2);
                    posxy(3, 5);cout<<"1. Ir al menu parciales";
                    posxy(3, 10);cout<<"2. Salir";
                    posxy(3, 15);cout<<"Opcion[ ]";
                    posxy(10, 15);cin>>opcion;
                }
        } 
    } while (opcion != 2);
}

void menu_parciales(){
    system("cls");
    system("color 70");
    marcoxy(27, 110, 2, 1);
    centrarStr("PARCIALES", 2);
    posxy(3, 5);cout<<"0. Salir al menu principal";
    posxy(3, 10);cout<<"1. Parcial 1";
    posxy(3, 15);cout<<"2. Parcial 2";
    posxy(3, 20);cout<<"3. Parcial 3";
    posxy(10, 25);cout<<"Opcion[ ]";
    posxy(18, 25);cin>>opcion;

    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_principal();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                parcial_1();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                parcial_2();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                parcial_3();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(27, 110, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"1. Ir al menu parciales";
                posxy(3, 10);cout<<"2. Salir";
                posxy(3, 15);cout<<"Opcion[ ]";
                posxy(10, 15);cin>>opcion;
            }
        } 
    } while (opcion != 2);
}
void parcial_1(){
        system("cls");
        system("color 70");
        marcoxy(27, 110, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 10);cout<<"1. pagina 1";
        posxy(3, 15);cout<<"2. pagina 2";
        posxy(3, 20);cout<<"3. pagina 3";
        posxy(10, 25);cout<<"Opcion[ ]";
        posxy(18, 25);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                parcial_1_pagina_1();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                parcial_1_pagina_2();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                parcial_1_pagina_3();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 10);cout<<"1. pagina 1";
                posxy(3, 15);cout<<"2. pagina 2";
                posxy(3, 20);cout<<"3. pagina 3";
                posxy(10, 25);cout<<"Opcion[ ]";
                posxy(18, 25);cin>>opcion;
            }
        } 
    } while (opcion != 0);
}
void parcial_1_pagina_1(){
        system("cls");
        system("color 70");
        marcoxy(35, 90, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 1";
        posxy(3, 9);cout<<"2. programa 2";
        posxy(3, 11);cout<<"3. programa 3";
        posxy(3, 13);cout<<"4. programa 4";
        posxy(3, 15);cout<<"5. programa 5";
        posxy(3, 17);cout<<"6. programa 6";
        posxy(3, 19);cout<<"7. programa 7";
        posxy(3, 21);cout<<"8. programa 8";
        posxy(3, 23);cout<<"9. programa 9";
        posxy(3, 25);cout<<"10. programa 10";
        posxy(3, 27);cout<<"11. programa 11";
        posxy(3, 29);cout<<"12. programa 12";
        posxy(3, 31);cout<<"opcion[ ]";
        posxy(10, 31);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_1();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_2();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_3();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_4();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_5();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_6();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_7();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_8();
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                system("color 70");
                programa_9();
                system("pause");
                break;
            }
            case 10: {
                system("cls");
                system("color 70");
                programa_10();
                system("pause");
                break;
            }
            case 11: {
                system("cls");
                system("color 70");
                programa_11();
                system("pause");
                break;
            }
            case 12: {
                system("cls");
                system("color 70");
                programa_12();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 7);cout<<"1. programa 1";
                posxy(3, 9);cout<<"2. programa 2";
                posxy(3, 11);cout<<"3. programa 3";
                posxy(3, 13);cout<<"4. programa 4";
                posxy(3, 15);cout<<"5. programa 5";
                posxy(3, 17);cout<<"6. programa 6";
                posxy(3, 19);cout<<"7. programa 7";
                posxy(3, 21);cout<<"8. programa 8";
                posxy(3, 23);cout<<"9. programa 9";
                posxy(3, 25);cout<<"10. programa 10";
                posxy(3, 27);cout<<"11. programa 11";
                posxy(3, 29);cout<<"12. programa 12";
                posxy(3, 31);cout<<"opcion[ ]";
                posxy(10, 31);cin>>opcion;
            }
        } 
    }  while (opcion != 0);
}

void parcial_1_pagina_2(){
   
        system("cls");
        system("color 70");
        marcoxy(35, 90, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 13";
        posxy(3, 9);cout<<"2. programa 14";
        posxy(3, 11);cout<<"3. programa 15";
        posxy(3, 13);cout<<"4. programa 16";
        posxy(3, 15);cout<<"5. programa 17";
        posxy(3, 17);cout<<"6. programa 18";
        posxy(3, 19);cout<<"7. programa 19";
        posxy(3, 21);cout<<"8. programa 20";
        posxy(3, 23);cout<<"9. programa 21";
        posxy(3, 25);cout<<"10. programa 22";
        posxy(3, 27);cout<<"11. programa 23";
        posxy(3, 29);cout<<"12. programa 24";
        posxy(3, 31);cout<<"opcion[ ]";
        posxy(10, 31);cin>>opcion;
    
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_13();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_14();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_15();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_16();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_17();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_18();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_19();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_20();
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                system("color 70");
                programa_21();
                system("pause");
                break;
            }
            case 10: {
                system("cls");
                system("color 70");
                programa_22();
                system("pause");
                break;
            }
            case 11: {
                system("cls");
                system("color 70");
                programa_23();
                system("pause");
                break;
            }
            case 12: {
                system("cls");
                system("color 70");
                programa_24();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 7);cout<<"1. programa 13";
                posxy(3, 9);cout<<"2. programa 14";
                posxy(3, 11);cout<<"3. programa 15";
                posxy(3, 13);cout<<"4. programa 16";
                posxy(3, 15);cout<<"5. programa 17";
                posxy(3, 17);cout<<"6. programa 18";
                posxy(3, 19);cout<<"7. programa 19";
                posxy(3, 21);cout<<"8. programa 20";
                posxy(3, 23);cout<<"9. programa 21";
                posxy(3, 25);cout<<"10. programa 22";
                posxy(3, 27);cout<<"11. programa 23";
                posxy(3, 29);cout<<"12. programa 24";
                posxy(3, 31);cout<<"opcion[ ]";
                posxy(10, 31);cin>>opcion;
            }
        } 
    } while (opcion != 0);
}

void parcial_1_pagina_3(){
        system("cls");
        system("color 70");
        marcoxy(35, 90, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 25";
        posxy(3, 9);cout<<"2. programa 26";
        posxy(3, 11);cout<<"3. programa 27";
        posxy(3, 13);cout<<"4. programa 28";
        posxy(3, 15);cout<<"5. programa 29";
        posxy(3, 17);cout<<"6. programa 30";
        posxy(3, 19);cout<<"7. programa 31";
        posxy(3, 21);cout<<"8. programa 32";
        posxy(3, 23);cout<<"9. programa 33";
        posxy(3, 25);cout<<"10. programa 34";
        posxy(3, 27);cout<<"11. programa 35";
        posxy(3, 29);cout<<"12. programa 36";
        posxy(3, 31);cout<<"opcion[ ]";
        posxy(10, 31);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_25();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_26();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_27();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_28();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_29();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_30();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_31();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_32();
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                system("color 70");
                programa_33();
                system("pause");
                break;
            }
            case 10: {
                system("cls");
                system("color 70");
                programa_34();
                system("pause");
                break;
            }
            case 11: {
                system("cls");
                system("color 70");
                programa_35();
                system("pause");
                break;
            }
            case 12: {
                system("cls");
                system("color 70");
                programa_36();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("PARCIAL 1", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 7);cout<<"1. programa 25";
                posxy(3, 9);cout<<"2. programa 26";
                posxy(3, 11);cout<<"3. programa 27";
                posxy(3, 13);cout<<"4. programa 28";
                posxy(3, 15);cout<<"5. programa 29";
                posxy(3, 17);cout<<"6. programa 30";
                posxy(3, 19);cout<<"7. programa 31";
                posxy(3, 21);cout<<"8. programa 32";
                posxy(3, 23);cout<<"9. programa 33";
                posxy(3, 25);cout<<"10. programa 34";
                posxy(3, 27);cout<<"11. programa 35";
                posxy(3, 29);cout<<"12. programa 36";
                posxy(3, 31);cout<<"opcion[ ]";
                posxy(10, 31);cin>>opcion;
            }
        } 
    } while (opcion != 0);
}

void parcial_2(){
        system("cls");
        system("color 70");
        marcoxy(35, 90, 2, 1);
        centrarStr("PARCIAL 2", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 6);cout<<"1. pagina 1";
        posxy(3, 7);cout<<"2. pagina 2";
        posxy(10, 25);cout<<"Opcion[ ]";
        posxy(18, 25);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                parcial_2_pagina_1();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                parcial_2_pagina_2();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 6);cout<<"1. pagina 1";
                posxy(3, 7);cout<<"2. pagina 2";
                posxy(10, 25);cout<<"Opcion[ ]";
                posxy(18, 25);cin>>opcion;
            }
        } 
    } while (opcion != 0);
}
void parcial_2_pagina_1(){
        system("cls");
        system("color 70");
        marcoxy(35, 90, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 37";
        posxy(3, 9);cout<<"2. programa 38";
        posxy(3, 11);cout<<"3. programa 39";
        posxy(3, 13);cout<<"4. programa 40";
        posxy(3, 15);cout<<"5. programa 41";
        posxy(3, 17);cout<<"6. programa 42";
        posxy(3, 19);cout<<"7. programa 43";
        posxy(3, 21);cout<<"8. programa 44";
        posxy(3, 23);cout<<"9. programa 45";
        posxy(3, 25);cout<<"opcion[ ]";
        posxy(10, 25);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_37();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_38();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_39();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_40();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_41();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_42();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_43();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_44();
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                system("color 70");
                programa_45();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 7);cout<<"1. programa 37";
                posxy(3, 9);cout<<"2. programa 38";
                posxy(3, 11);cout<<"3. programa 39";
                posxy(3, 13);cout<<"4. programa 40";
                posxy(3, 15);cout<<"5. programa 41";
                posxy(3, 17);cout<<"6. programa 42";
                posxy(3, 19);cout<<"7. programa 43";
                posxy(3, 21);cout<<"8. programa 44";
                posxy(3, 23);cout<<"9. programa 45";
                posxy(3, 25);cout<<"opcion[ ]";
                posxy(10, 25);cin>>opcion;
            }
        } 
    }  while (opcion != 0);
}

void parcial_2_pagina_2(){
        system("cls");
        system("color 70");
        marcoxy(35, 90, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 46";
        posxy(3, 9);cout<<"2. programa 47";
        posxy(3, 11);cout<<"3. programa 48";
        posxy(3, 13);cout<<"4. programa 49";
        posxy(3, 15);cout<<"5. programa 50";
        posxy(3, 17);cout<<"6. programa 51";
        posxy(3, 19);cout<<"7. programa 52";
        posxy(3, 21);cout<<"8. programa 53";
        posxy(3, 23);cout<<"opcion[ ]";
        posxy(10, 23);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_46();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_47();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_48();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_49();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_50();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_51();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_52();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_53();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(35, 90, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 10);cout<<"1. programa 46";
                posxy(3, 15);cout<<"2. programa 47";
                posxy(3, 20);cout<<"3. programa 48";
                posxy(3, 25);cout<<"4. programa 49";
                posxy(3, 30);cout<<"5. programa 50";
                posxy(3, 35);cout<<"6. programa 51";
                posxy(3, 40);cout<<"7. programa 52";
                posxy(3, 45);cout<<"8. programa 53";
                posxy(3, 70);cout<<"opcion[ ]";
                posxy(10, 75);cin>>opcion;
            }
        } 
    }  while (opcion != 0);
}
void parcial_3(){
        system("cls");
        system("color 70");
        marcoxy(27, 110, 2, 1);
        centrarStr("PARCIAL 3", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 10);cout<<"1. pagina 1";
        posxy(3, 15);cout<<"2. pagina 2";
        posxy(10, 25);cout<<"Opcion[ ]";
        posxy(18, 25);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                parcial_3_pagina_1();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                parcial_3_pagina_2();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(27, 110, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 10);cout<<"1. pagina 1";
                posxy(3, 15);cout<<"2. pagina 2";
                posxy(10, 25);cout<<"Opcion[ ]";
                posxy(18, 25);cin>>opcion;
            }
        }
    } while (opcion != 0);
}
void parcial_3_pagina_1(){
        system("cls");
        system("color 70");
        marcoxy(32, 110, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 54";
        posxy(3, 9);cout<<"2. programa 55";
        posxy(3, 11);cout<<"3. programa 56";
        posxy(3, 13);cout<<"4. programa 57";
        posxy(3, 15);cout<<"5. programa 58";
        posxy(3, 17);cout<<"6. programa 59";
        posxy(3, 19);cout<<"7. programa 60";
        posxy(3, 21);cout<<"8. programa 61";
        posxy(3, 23);cout<<"9. programa 62";
        posxy(3, 25);cout<<"10. programa 63";
        posxy(3, 27);cout<<"11. programa 64";
        posxy(3, 29);cout<<"12. programa 65";
        posxy(3, 31);cout<<"opcion[ ]";
        posxy(10, 31);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_54();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_55();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_56();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_57();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_58();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_59();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_60();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_61();
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                system("color 70");
                programa_62();
                system("pause");
                break;
            }
            case 10: {
                system("cls");
                system("color 70");
                programa_63();
                system("pause");
                break;
            }
            case 11: {
                system("cls");
                system("color 70");
                programa_64();
                system("pause");
                break;
            }
            case 12: {
                system("cls");
                system("color 70");
                programa_65();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(27, 110, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 7);cout<<"1. programa 54";
                posxy(3, 9);cout<<"2. programa 55";
                posxy(3, 11);cout<<"3. programa 56";
                posxy(3, 13);cout<<"4. programa 57";
                posxy(3, 15);cout<<"5. programa 58";
                posxy(3, 17);cout<<"6. programa 59";
                posxy(3, 19);cout<<"7. programa 60";
                posxy(3, 21);cout<<"8. programa 61";
                posxy(3, 23);cout<<"9. programa 62";
                posxy(3, 25);cout<<"10. programa 63";
                posxy(3, 27);cout<<"11. programa 64";
                posxy(3, 29);cout<<"12. programa 65";
                posxy(3, 31);cout<<"opcion[ ]";
                posxy(10, 31);cin>>opcion;
            }
        } 
    }   while (opcion != 0);
}

void parcial_3_pagina_2(){
        system("cls");
        system("color 70");
        marcoxy(33, 110, 2, 1);
        centrarStr("PARCIAL 1", 2);
        posxy(3, 5);cout<<"0. Salir al menu de parciales";
        posxy(3, 7);cout<<"1. programa 66";
        posxy(3, 9);cout<<"2. programa 67";
        posxy(3, 11);cout<<"3. programa 68";
        posxy(3, 13);cout<<"4. programa 69";
        posxy(3, 15);cout<<"5. programa 70";
        posxy(3, 17);cout<<"6. programa 71";
        posxy(3, 19);cout<<"7. programa 72";
        posxy(3, 21);cout<<"8. programa 73";
        posxy(3, 23);cout<<"9. programa 74";
        posxy(3, 25);cout<<"10. programa 75";
        posxy(3, 27);cout<<"11. programa 76";
        posxy(3, 29);cout<<"12. programa 77";
        posxy(3, 31);cout<<"opcion[ ]";
        posxy(10, 31);cin>>opcion;
    do{
        switch (opcion){
            case 0: {
                system("cls");
                system("color 70");
                menu_parciales();
                system("pause");
                break;
            }
            case 1: {
                system("cls");
                system("color 70");
                programa_66();
                system("pause");
                break;
            }
            case 2: {
                system("cls");
                system("color 70");
                programa_67();
                system("pause");
                break;
            }
            case 3: {
                system("cls");
                system("color 70");
                programa_68();
                system("pause");
                break;
            }
            case 4: {
                system("cls");
                system("color 70");
                programa_69();
                system("pause");
                break;
            }
            case 5: {
                system("cls");
                system("color 70");
                programa_70();
                system("pause");
                break;
            }
            case 6: {
                system("cls");
                system("color 70");
                programa_71();
                system("pause");
                break;
            }
            case 7: {
                system("cls");
                system("color 70");
                programa_72();
                system("pause");
                break;
            }
            case 8: {
                system("cls");
                system("color 70");
                programa_73();
                system("pause");
                break;
            }
            case 9: {
                system("cls");
                system("color 70");
                programa_74();
                system("pause");
                break;
            }
            case 10: {
                system("cls");
                system("color 70");
                programa_75();
                system("pause");
                break;
            }
            case 11: {
                system("cls");
                system("color 70");
                programa_76();
                system("pause");
                break;
            }
            case 12: {
                system("cls");
                system("color 70");
                //programa_77();
                system("pause");
                break;
            }
            default: {
                system("cls");
                system("color 70");
                marcoxy(27, 110, 2, 1);
                centrarStr("Opcion invalida", 2);
                posxy(3, 5);cout<<"0. Salir al menu de parciales";
                posxy(3, 7);cout<<"1. programa 66";
                posxy(3, 9);cout<<"2. programa 67";
                posxy(3, 11);cout<<"3. programa 68";
                posxy(3, 13);cout<<"4. programa 69";
                posxy(3, 15);cout<<"5. programa 70";
                posxy(3, 17);cout<<"6. programa 71";
                posxy(3, 19);cout<<"7. programa 72";
                posxy(3, 21);cout<<"8. programa 73";
                posxy(3, 23);cout<<"9. programa 74";
                posxy(3, 25);cout<<"10. programa 75";
                posxy(3, 27);cout<<"11. programa 76";
                posxy(3, 29);cout<<"12. programa 77";
                posxy(3, 31);cout<<"opcion[ ]";
                posxy(10, 31);cin>>opcion;
            }
        } 
    }   while (opcion != 0);
}
void programa_1(){
    system("cls");
    system("color 00");
    int Valor = 15;
 	float Valor1 = 15.6354;
 	char Letra = 'A';
 	string Cadena="Mi cadena de Texto";
 	bool Bandera =(2==4);
 	cout<<"hola mundo, "<<"buenos dias"<<endl;
 	cout<<"fin de mi primer programa en c++"<<endl;
 	cout<<"Mi valor float int es: "<<Valor1<<endl;
 	cout<<"Mi valor int es: "<<Valor<<endl;
 	cout<<"Mi valor char es: "<<Letra<<endl;
 	cout<<"Mi valor string es: " <<Cadena<<endl;
 	cout<<"Mi valor bool es: "<<Bandera<<endl;
 	cout<<"Dame un valor para mi Variable int: ";
 	cin>>Valor;
 	cout<<"Mi nuevo valor en int es: "<<Valor;
    system("pause");
    parcial_1_pagina_1();
}
void programa_2(){
    system("cls");
    system("color 00");
    float prom, calif1, calif2, calif3, calif4, calif5;
			cout<<"Este es un algoritmo que determina un promedio a partir de 5 calificaciones"<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			
			cout<<"ingresar la primera calificación"<<endl;
			cin>>calif1;
			cout<<" "<<endl;
			
			cout<<"ingresar la segunda calificación"<<endl;
			cin>>calif2;
			cout<<" "<<endl;
			
			cout<<"ingresar la tercera calificación"<<endl;
			cin>>calif3;
			cout<<" "<<endl;
			
			cout<<"ingresar la cuarta calificación"<<endl;
			cin>>calif4;
			cout<<" "<<endl;
			
			cout<<"ingresar la quinta calificación"<<endl;
			cin>>calif5;
			cout<<" "<<endl;
			
			prom = (calif1 + calif2 + calif3 + calif4 + calif5)/5;
			
			cout<<"el promedio de las calificaciones es:"<<endl;
			cout<<" "<<endl;
			cout<<prom;
            system("pause");
            parcial_1_pagina_1();
}
void programa_3(){
    system("cls");
    system("color 00");
    float numtotal, alumap, alumre, poralumap, poralumre;
		    cout<<"Este es un algoritmo que muestra el porcentaje de alumnos aprobados y reprobados"<<endl;
			cout<<" "<<endl;
			cout<<" "<<endl;
			
			cout<<"ingresar el número total de alumnos"<<endl;
			cin>>numtotal;
			cout<<" "<<endl;
			
			cout<<"ingresar el numero de alumnos con calificación reprobatoria"<<endl;
			cin>>alumre;
			cout<<" "<<endl;
			
			cout<<"ingresar numero de alumnos con calificación aprobatoria"<<endl;
			cin>>alumap;
			cout<<" "<<endl;
			
			cout<<"El porcentaje de alumnos reprobados es:"<<endl;
			
			poralumre = (alumre*100)/numtotal;
			
			cout<<poralumre<<endl;
			cout<<" "<<endl;
		
			cout<<"El porcentaje de alumnos aprobados es:"<<endl;
			
			poralumap = (alumap*100)/numtotal;
			
			cout<<poralumap<<endl;
			cout<<" "<<endl;
			
			cout<<"Buen día :D"<<endl;
            system("pause");
            parcial_1_pagina_1();
}
void programa_4(){
    system("cls");
    system("color 00");
			float p1, p2, p3, ordinario, pp1, pp2, pp3, pmo, m, cmo, pm;
			
			cout<< "ESTE ES UN PROGRAMA QUE MUESTRA LA CALIFICACIÓN NECESARIA PARA PASAR EL SEMESTRE DE UNA MATERIA."<<endl<<endl;
			cout<< "Ingresa la calificación del primer parcial: "<<endl;
			cin>> p1;
			cout<< "Ingresa la calificación del segundo parcial: "<<endl;
			cin>> p2;
			cout<< "Ingresa la calificación del tercer parcial: "<<endl;
			cin>> p3;
			
			pp1= (20/10)*(p1);
			pp2= (20/10)*(p2);
			pp3= (20/10)*(p3);
			m= (pp1)+(pp2)+(pp3);
			
			pm= (60-m);
			pmo= 0.25;
			cmo= (pm*pmo);
			cout<< "Si quieres pasar deberás obtener la calificación de: "<<cmo;
            system("pause");
            parcial_1_pagina_1();
}
void programa_5(){
    system("cls");
    system("color 00");
    		int i;
			int n;
			n = 1;
			cout << "este es un programa que imprime las 10 tablas de multiplicar" << endl;
			cout << " " << endl;
			cout << " " << endl;
			cout << "Las tablas de multiplicar son:" << endl;
			while (n<=10) {
				i = 1;
				while (i<=10) {
					cout << n << " x " << i << " = " << n*i << endl;
					i = i+1;
				}
				cout << " " << endl;
				n = n+1;
			}
            system("pause");
            parcial_1_pagina_1();
}
void programa_6(){
    system("cls");
    system("color 00");
    float segh, segm, s, h, m;
			
			cout<<"este es un programa que calcula el numero de segundos dado el numero de horas, minutos y segundos."<<endl;
			cout<<" ";
			
			cout<<"Ingresar número de horas"<<endl;
			cin>>h;
			
			segh = h*3600;
			
			cout<<" "<<endl;
			
			cout<<"El número de segundos es:"<<endl;
		    cout<< segh;
			cout<<" "<<endl;
			
			cout<<"Insertar el número de minutos"<<endl;
			cin>>m;
			
			segm = m*60;
			
			cout<<" "<<endl;
			
			cout<<"El número de segundos es:"<<endl;
			cout<<segm<<endl;
			cout<<" "<<endl;
			
			cout<<"ingrese una cantidad de segundos que le será arrojada de regreso"<<endl;
			cin>>s;
			cout<<" "<<endl;
			
			cout<<"Su resultado es:"<<endl;
			cout<<s;
            system("pause");
            parcial_1_pagina_1();
}
void programa_7(){
    system("cls");
    system("color 00");
    float a, b, c;
    string sim;
    cout << "Esta es una calculadora" << endl;
			cout << " " << endl;
			
			cout << "ingrese el símbolo de la operación que desea hacer." << endl;
			cout << " " << endl;
			
			cout << "si desea desplegar el menu de ociones de operacion escriba si, si no quiere desplegarlo escriba no" << endl;
			cin >> sim;
			cout << " " << endl;
			
			if ((sim=="si")) {
				
				cout << "menu de opciones:" << endl;
				
				cout << "suma : +" << endl;
				
				cout << "resta : -" << endl;
				
				cout << "multiplicacion : *" << endl;
				
				cout << "division : /" << endl;
				
				cout << "potencia : p" << endl;
				
			}
			cin >> sim;
			
			cout << " " << endl;
			
			if ((sim=="no")) {
				
				if ((sim=="+")) {
					
					cout << "Ingrese el primer numero que desea sumar" << endl;
					
					cin >> a;
					
					cout << " " << endl;
					
					cout << "Ingrese el segundo numero que desea sumar" << endl;
					
					cin >> b;
					
					cout << " " << endl;
					
					c = a+b;
					
					cout << c << endl;
					
				}
				
				if ((sim=="p")) {
					
					cout << "Ingrese el primer numero que desea elevar" << endl;
					
					cin >> a;
					
					cout << " " << endl;
					
					cout<< "Ingrese la potencia"<<endl;
					
					cin>>b;
				
					c = pow(a,b);
				
					cout << c << endl;
					
				}
				if ((sim=="-")) {
					
					cout << "Ingrese el primer numero que desea restar" << endl;
					
					cin >> a;
					
					cout << " " << endl;
					
					cout << "Ingrese el segundo numero que desea restar" << endl;
					
					cin >> b;
					
					cout << " " << endl;
					
					c = a-b;
					
					cout << c << endl;
					
				}
				
				if ((sim=="*")) {
					
					cout << "Ingrese el primer numero que desea multiplicar" << endl;
					
					cin >> a;		
					cout << " " << endl;
					
					cout << "Ingrese el segundo numero que desea multiplicar" << endl;
					
					cin >> b;			
					cout << " " << endl;
					
					c = a*b;
					
					cout << c << endl;
					
				}
				
				if ((sim=="/")) {
					
					cout << "Ingrese el primer numero que desea dividir" << endl;
					
					cin >> a;			
					cout << " " << endl;
					
					cout << "Ingrese el segundo numero que desea dividir" << endl;
					
					cin >> b;			
					cout << " " << endl;
					
					if ((a==0)) {
						
						if ((b==0)) {
							
							cout << "No se puede hacer una division sobre 0" << endl;
							
						} else {
							
							c = a/b;
							
							cout << c << endl;
							
						}
						
					}
					
				}
				
			}
			
			if ((sim=="+")) {
				
				cout << "Ingrese el primer numero que desea sumar" << endl;
				
				cin >> a;
				
				cout << " " << endl;
				
				cout << "Ingrese el segundo numero que desea sumar" << endl;
				
				cin >> b;		
				cout << " " << endl;
				c = a+b;
				
				cout << c << endl;
				
			}
			
			if ((sim=="p")) {
				
				cout << "Ingrese el primer numero que desea elevar" << endl;
				
				cin >> a;		
				cout << " " << endl;
				
				cout<< "Ingrese la potencia"<<endl;
				
				cin>>b;
				
				c = pow(a,b);
				
				cout << c << endl;
				
			}
			
			if ((sim=="-")) {
				
				cout << "Ingrese el primer numero que desea restar" << endl;
				
				cin >> a;				
				cout << " " << endl;
				
				cout << "Ingrese el segundo numero que desea restar" << endl;
				
				cin >> b;		
				cout << " " << endl;
				
				c = a-b;
				
				cout << c << endl;
				
			}
			
			if ((sim=="*")) {
				
				cout << "Ingrese el primer numero que desea multiplicar" << endl;
				
				cin >> a;
				cout << " " << endl;
				
				cout << "Ingrese el segundo numero que desea multiplicar" << endl;
				
				cin >> b;
				cout << " " << endl;
				
				c = a*b;
				
				cout << c << endl;
			}
			if ((sim=="/")) {
				cout << "Ingrese el primer numero que desea dividir" << endl;
				cin >> a;
				cout << " " << endl;
				
				cout << "Ingrese el segundo numero que desea dividir" << endl;
				cin >> b;
				cout << " " << endl;
				c = a/b;
				cout << c << endl;
				if ((a==0)) {
					if ((b==0)) {
						cout << "No se puede hacer una division sobre 0" << endl;
					} else {
						c = a/b;
						cout << c << endl;
                    }
				}
			}
            system("pause");
            parcial_1_pagina_1();
}
void programa_8(){
    system("cls");
    system("color 70");
    float calificacion;
			cout<<"Insertar calificación"<<endl;;
			cin>>calificacion;
			cout<<" ";
			if (calificacion >= 6){
			cout<<"Pasaste, muy bien"<<endl;
			}
			else{
				cout<<"No pasaste, chavo"<<endl;
			}
            system("pause");
            parcial_1_pagina_1();
}
void programa_9(){
    system("cls");
    system("color 00");
    int n1, n2, n3, nm, nM;
			
					cout<<"Este es un programa que muestra el numero mas pequeño de tres previamente ingresados."<<endl;
					cout<<"";
					cout<<"";
					
					cout<<"Ingresar primer numero entero";
					cin>>n1;
					cout<<" ";
					
					cout<<"Ingresar segundo numero entero";
					cin>>n2;
					cout<<" ";
					
					cout<<"Ingresar tercer numero entero";
					cin>>n3;
					cout<<" ";
					
				if (n1 <= n2 && n1 <= n3){
					
					nm = n1;
					
				}
				
				else if (n2 <= n1 && n2 <= n3){
					
					nm=n2;
					
				}
				
				else {
				
				nm = n3;
				
				}
				
				if (n1 >= n2 && n1 >= n3){
					
					nM = n1;
					
				}
				
				else if (n2 >= n1 && n2 >= n3){
					
					nM=n2;
					
				}
				
				else {
				
				nM = n3;
				
				}
				
				cout<<"El más pequeño de los números ingresados es: "<<endl;

				cout<<" "<<endl;
				cout<<nm;
                system("pause");
                parcial_1_pagina_1();
}
void programa_10(){
    system("cls");
    system("color 00");
    float a, b, c, x1, x2, discriminante;
					cout<<"Este programa obtiene las raíces de una ecuación cuadrática"<<endl;
					cout<<"";
					
					cout<<"Ingresar coeficiente del término cuadrático";
					cin>>a;
					cout<<"";
					if (a != 0){
					
					cout<<"Ingresar coeficiente del término lineal";
					cin>>b;
					cout<<"";
					
					cout<<"Ingresar coeficiente del término independiente";
					cin>>c;
					cout<<"";
					
					discriminante = (b*b)-(4*a*c);
					if (discriminante >= 0){
					
					x1 = (-b + sqrt(discriminante))/(2*a);
					
					x2 = (-b - sqrt(discriminante))/(2*a);
					
					cout<<"x1= "<<x1<<endl;
					cout<<" ";
					cout<<"x2= "<<x2<<endl;
					cout<<" ";
				}
				else{
					cout<< "El sistema tiene raices imaginarias"<<endl;
					cout<<" ";
					cout<<"El sistema no tiene raices reales"<<endl;
					cout<<" ";
					cout<<"No hay solucion"<<endl;
					cout<<" ";
				}
				
				}
				else{
				    cout<<"El sistema no es cuadratico"<<endl;
				}
                system("pause");
                parcial_1_pagina_1();
}
void programa_11(){
    system("cls");
    system("color 00");
    float a, b, c, porin1, porin2, porin3;
				string nom1, nom2, nom3;
				 cout<<"Este es un programa que asigna cargos a partir del porcentaje de inversion en una empresa."<<endl;
				 cout<<" ";
				 
				 cout<<"Ingresar primer nombre: ";
				 cin>>nom1;
				 cout<<"Ingresar cantidad de inversion: ";
				 cin>>a;
				 
				 cout<<"Ingresar primer nombre: ";
				 cin>>nom2;
				 cout<<"Ingresar cantidad de inversion: ";
				 cin>>b;
				 
				 cout<<"Ingresar primer nombre: ";
				 cin>>nom3;
				 cout<<"Ingresar cantidad de inversion: ";
				 cin>>c;
				 
				 porin1 = a / (a + b + c);
				 porin2 = b / (a + b + c);
				 porin3 = c / (a + b + c);
				 
				 if (a >= b && a >= c){
				 	
				 	cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
				 	
					 cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Dueno."<<endl;
				 	
				 	if (b >= c){
				 	
					 cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Gerente"<<endl;
				 		
				 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
				 		
				 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
				 		
					 }
					 
					 if (c >= b){
					 	
					 cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
				 		
				 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
					 	
					cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Gerente"<<endl;
					 	
					 }
				 }
				 
				 if (b>=a && b>=c){
				 	
				 	 cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Dueño"<<endl;
				 		
				 		if (a>=c){
				 			
				 			 cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Gerente"<<endl;
				 		
				 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
				 		
				 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
				 			
						 }
						 
						 if (c >= a){
						 	
						 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
				 		
				 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Gerente"<<endl;
					 	
					cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Inversor, no sea codo."<<endl;
						 	
						 }
				 	
				 }
				 
				 if (c >= a && c >= b){
				 	
				 	cout<<"El porcentaje de inversion de "<<nom3<<" es "<<(c * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<c<<"("<<nom3<<")"<<" tiene el cargo de Dueño"<<endl;
				 		
				 		if (a>=b){
				 			
				 			 cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Gerente"<<endl;
				 		
				 	cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
				 		
				 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Inversor, no sea codo"<<endl;
				 			
						 }
						 
						 if (b >= a){
						 	
						 	cout<<"El porcentaje de inversion de "<<nom2<<" es "<<(b * 100) / (a + b + c)<<endl;
				 		
				 		cout<<"El inversor que importo la cantidad de "<<b<<"("<<nom2<<")"<<" tiene el cargo de Gerente"<<endl;
					 	
					cout<<"El porcentaje de inversion de "<<nom1<<" es "<<(a * 100) / (a + b + c)<<endl;
					 	
				 		cout<<"El inversor que importo la cantidad de "<<a<<"("<<nom1<<")"<<" tiene el cargo de Inversor, no sea codo."<<endl;
				 	}
				 }  
                 system("pause");
                 parcial_1_pagina_1();
             }
void programa_12(){
    system("cls");
    system("color 70");
    int n;
		
				cout << "este es un programa que imprime las 10 tablas de multiplicar de un número" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout<<"Dame un número: "<<endl;
				cin>>n;
				cout << "Las tablas de multiplicar de tu número son: " << endl;
					
						cout << n << " x " << 0 << " = " << n*0 << endl;
						cout << n << " x " << 1 << " = " << n*1 << endl;
						cout << n << " x " << 2 << " = " << n*2 << endl;
						cout << n << " x " << 3 << " = " << n*3 << endl;
						cout << n << " x " << 4 << " = " << n*4 << endl;
						cout << n << " x " << 5 << " = " << n*5 << endl;
						cout << n << " x " << 6 << " = " << n*6 << endl;
						cout << n << " x " << 7 << " = " << n*7 << endl;
						cout << n << " x " << 8 << " = " << n*8 << endl;
						cout << n << " x " << 9 << " = " << n*9 << endl;
						cout << n << " x " << 10 << " = " << n*10 << endl;
                        system("pause");
                        parcial_1_pagina_1();
}
void programa_13(){
    system("cls");
    system("color 70");
    			float salario;
				int anti;
				
				cout<<"Este es un programa que incrementa el salario de un trabajador dependiendo del tiempo que lleve en la empresa"<<endl;
				
				cout<<"Ingresar salario actual: $"<<endl;
				cin>>salario;
				
				cout<<"Ingresar antiguedad del trabajador: "<<endl;
				cin>>anti;
				
				if (salario < 5000){
					
					if (anti >= 10){
						
						cout<<"Su salario ahora debe ser de "<<salario + (salario * 0.20)<<endl;
					}
				}
				
				if (salario < 5000){
					
					if (anti < 10){
						
						cout<<"Su salario ahora debe ser de "<<salario + (salario * 0.5)<<endl;
					}
				}
				
				if (salario >= 5000){
					
						
						cout<<"No hay sueldo nuevo pa ti <3"<<endl;
				}
                system("pause");
                parcial_1_pagina_2();
}
void programa_14(){
    system("cls");
    system("color 70");
    float a, b, c, d, e, f, g;
			cout<<"Este programa calcula un sistema de ecuaciones por el metodo de suma y resta"<<endl;
			cout<< "Ingresar el sistema de ecuaciones de la forma:"<<endl;
			cout<<" "<<endl;
		    cout<<"x1 + y1 = C1"<<endl;
		    cout<<"x2 + y2 = C2"<<endl;
			cout<<" "<<endl;
			cout<<"Insertar el valor de la constante de A1"<<endl;
			cin>>a;
			cout<<" "<<endl;
			cout<<"Insertar el valor de la constante de B1"<<endl;
			cin>>b;
			cout<<" "<<endl;
			cout<<"Insertar el valor de la constante de C1"<<endl;
			cin>>c;
			cout<<" "<<endl;
			cout<<"Insertar el valor de la constante de A2"<<endl;
			cin>>d;
			cout<<" "<<endl;
			cout<<"Insertar el valor de la constante de B2"<<endl;
			cin>>e;
			cout<<" "<<endl;
			cout<<"Insertar el valor de la constante de C2"<<endl;
			cin>>f;
			
			c = ((d) * (a + a)) + ((-a) * (d + e));
			g = (c - (b * a)) / (a);
            system("pause");
            parcial_1_pagina_2();
}
void programa_15(){
    system("cls");
    system("color 70");
    int n, m, c;
			m = 0;
			c = 0;
			n = 1;
			cout<<"Este es un programa que saca la suma y la media de un conjunto de números"<<endl;
			cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
			while (n != 0){
			cout<<"Esperando el ingreso de un numero, ingrese un 0 para parar"<<endl;
			cin>>n;
			m = (m + n);
			c = (c + 1);
			}
			cout<<"La suma de los numeros ingresados es: "<<m<<endl;
			cout<<"La media de los numeros ingresados es: "<<m / (c-1)<<endl;
            system("pause");
            parcial_1_pagina_2();
}
void programa_16(){
    system("cls");
    system("color 70");
    float n, m, M, i, c, l;
    
		    n = 0;
		    m = 0;
		    c = 0;
		    M = 0;
		    i = 0;
		    
		    cout<<"Este programa informa cuántos números son mayores, menores e iguales a 0"<<endl;
		    cout<<"---------------------------------------------------------------------------------------------------------------------"<<endl;
		    cout<<" "<<endl;
		    
		    cout<<"Digite la cantidad de números que va a ingresar";
		    cin>>c;
		    
		    cout<<"Su cantidad de números es: "<<c<<endl;
		    
			l = 1;
			cout<<l;
			
			while (l <= c){
			
				
					cout<<"Ingrese un número"<<endl;
		    		cin>>n;
		    		
		    		if (n<0) {
					
		    	
		    		m = m + 1;
		    	
				    }
		    	  	if (n>0){ 
		    		M = M + 1;
		    	
				    }
			
			
		    	 if (n=0){
		    		i = i + 1;
		    			
			     }
			     	l = l + 1;
		
			}
	
		    cout<<"La cantidad de números iguales a 0 es: "<<i<<endl;
		    
		    cout<<"La cantidad de números menores a 0 es: "<<m<<endl;
		    
		    cout<<"La cantidad de números mayores a 0 es: "<<M<<endl;
            system("pause");
            parcial_1_pagina_2();
}
void programa_17(){
    system("cls");
    system("color 70");
    int a, b, c;
	
			cout<<"Este es un programa que muestra el numero mas pequeño de tres previamente ingresados."<<endl;
			
			cout<<"Ingresar primer numero entero"<<endl;
			cin>>a;
		
			cout<<"Ingresar segundo numero entero"<<endl;
			cin>>b;
		
			cout<<"Ingresar tercer numero entero"<<endl;
			cin>>c;
			
			cout<<"Los números ordenados del mayor al menor son:"<<endl;
			
				if (a >= b){
			
			if (a >= c){
				
				cout<<a<<endl;
				
				if (b >= c){
					
					cout<<b<<endl;
					
					cout<<c<<endl;
				}
				
				if (c >= b){
					
					cout<<c<<endl;
					
					cout<<b<<endl;
				}
			}
		}
		
			if (b >= a){
			
			if (b >= c){
				
				cout<<b<<endl;
				
				if (a >= c){
					
					cout<<a<<endl;
					
					cout<<c<<endl;
				}
				
				if (c >= a){
					
					cout<<c<<endl;
					
					cout<<a<<endl;
				}
			}
		}
		
			if (c >= a){
			
			if (c >= b){
				
				cout<<c<<endl;
				
				if (a >= b){
					
					cout<<a<<endl;
					
					cout<<b<<endl;
				}
				
				if (b >= a){
					
					cout<<b<<endl;
					
					cout<<b<<endl;
					
				}
			}
		}
        system("pause");
        parcial_1_pagina_2();
}
void programa_18(){
    system("cls");
    system("color 70");
    float base, altura, area;
	
			cout<<"Hola, para calcular el area de tu triangulo dame la base"<<endl;
			cin>>base;
			cout<<"Ahora ingresa la altura"<<endl;
			cin>>altura;
			
				area = (base*altura)/2;
				cout<<"el area de tu triangulo es: "<<area<<endl;
                system("pause");
                parcial_1_pagina_2();
}
void programa_19(){
    system("cls");
    system("color 70");
    float radio, area, perimetro;
	
			cout<<"Este programa calcula el perimetro y el area de un circulo dado su radio"<<endl;
			cout<<"¿Que esperas para darme el radio de tu circulo?"<<endl;
			cin>>radio;
			
			perimetro = (3.141519*radio)*2;
			area = 3.141519*(radio*radio);
			
			cout<<"el area de tu circulo mal hecho es: "<<area<<endl;
			cout<<"y el perimetro es: "<<perimetro<<endl;
            system("pause");
            parcial_1_pagina_2();
}
void programa_20(){
    system("cls");
    system("color 70");
    int numz;
			float precioT, preciod, precioz, descuento;
			
			precioz = 80;
			
			cout<<"Este es un programa que asigna descuentos en la barata de liverpool a partir de la cantidad de pares de zapatos que se compraron"<<endl;
			
			cout<<"El precio por par de zapatos es $80"<<endl;
			
			cout<<"¿Cuantos pares de zapatos compraste?";
			cin>>numz;
			
			if(numz < 10){
				
				cout<<"No hay desceunto para ti, compra mas, no seas codo.";
			}
			
			if (numz >= 10){
				if (numz <= 20){
				
				cout<<"El precio total con descuento que usted pagara es: $"<<(80 * numz) - ((80 * numz) * 0.15)<<endl;
			}
				}
			
			if (numz >= 20){
				if (numz < 30){
				
				cout<<"El precio total con descuento que usted pagara es: $"<<(80 * numz) - ((80 * numz) * 0.25)<<endl;
				
			}
			
		}
		
			if (numz >= 30){
			
				cout<<"El precio total con descuento que usted pagara es: $"<<(80 * numz) - ((80 * numz) * 0.40)<<endl;
					
			}
            system("pause");
            parcial_1_pagina_2();
}
void programa_21(){
    system("cls");
    system("color 70");
    int opcion;
				    char respuesta;
				
				    do {
				        system("cls");
				        cout << "Menu:" << endl;
				        cout << "1. Opcion 1" << endl;
				        cout << "2. Opcion 2" << endl;
				        cout << "3. Opcion 3" << endl;
				        cout << "4. Opcion 4" << endl;
				        cout << "5. Salir" << endl;
				
				        cout << "Seleccione una opcion: ";
				        cin >> opcion;
				
				        switch (opcion) {
				            case 1:
				                cout << "Ha seleccionado la opcion 1." << endl;
				                break;
				            case 2:
				                cout << "Ha seleccionado la opcion 2." << endl;
				                break;
				            case 3:
				                cout << "Ha seleccionado la opcion 3." << endl;
				                break;
				            case 4:
				                cout << "Ha seleccionado la opcion 4." << endl;
				                break;
				            case 5:
				                cout << "Programa terminado." << endl;
				            default:
				                cout << "Opcion invalida. Seleccione una opcion valida." << endl;
				                break;
				        }
				
				        cout << "Desea ver el menu de nuevo? (s/n): ";
				        cin >> respuesta;
				    } while (respuesta == 's' || respuesta == 'S');
                    system("pause");
                    parcial_1_pagina_2();
}
void programa_22(){
    system("cls");
    system("color 70");
    string a, s;
		    cout<<"MENÚ DE OPCIONES"<<endl;
		    cout<<"----------------------------------------------------------------------------------------------------------------- "<<endl;
		    cout<<" "<<endl;
		    cout<<"El menú se cierra cuando escriba salir."<<endl;
		    
		    while (a != "salir"){
		    	
		    	cout<<"Para salir del menú de opciones escriba salir, para desplegarlo escriba entrar"<<endl;
		    cin>>a;
		    
		    	cout<<"MENÚ"<<endl;
		    	
		    	cout<<"Opción 1"<<endl;
		    	
		    	cout<<"Opción 2"<<endl;
		    	
		    	cout<<"Opción 3"<<endl;
		    	
		    	cout<<"Opción 4"<<endl;
			}
            system("pause");
            parcial_1_pagina_2();
}
void programa_23(){
    system("cls");
    system("color 70");
    		float n1;
			float n2;
			float suma;
			cout << "Dame 2 números: " << endl;
			cin >> n1 >> n2;
			suma = n1+n2;
			if (suma>5) {
				cout << "La suma es mayor que 5" << endl;
			} else {
				cout << "La suma no es mayor que 5" << endl;
			}
            system("pause");
            parcial_1_pagina_2();
}
void programa_24(){
    system("cls");
    system("color 70");
    int i, n, m;
			cout << "escriba un numero entero" << endl;
			cin >> n;
			i = 0;
			cout << "La suma de los numero antecesores del indicado es: " << endl;
			cout << " " << endl;
			i = i+1;
			m = n-n;
			while (m<n) {
				cout << m << " + " << i << " = " << m+i << endl;
				m = m+1;
				i = i+1;
			}
            system("pause");
            parcial_1_pagina_2();
}
void programa_25(){
    system("cls");
    system("color 70");
    float a1;
			float a2;
			float b1;
			float b2;
			float c;
			float c1;
			float c2;
			float x;
			float y;
			float yc;
			cout << " " << endl;
			cout << "Autoría de Héctor Paulo, prohibida su distribución" << endl;
			cout << " " << endl;
			cout << " " << endl;
			cout << "Insertar sistema de ecuaciones 2x2 de la forma" << endl;
			cout << "A1x + B1y = C1" << endl;
			cout << "A2x + B2y = C2" << endl;
			cout << " " << endl;
			cout << "Insertar el valor de la constante de A1" << endl;
			cin >> a1;
			cout << " " << endl;
			cout << "Insertar el valor de la constante de B1" << endl;
			cin >> b1;
			cout << " " << endl;
			cout << "Insertar el valor de la constante de C1" << endl;
			cin >> c1;
			cout << " " << endl;
			cout << "Insertar el valor de la constante de A2" << endl;
			cin >> a2;
			cout << " " << endl;
			cout << "Insertar el valor de la constante de B2" << endl;
			cin >> b2;
			cout << " " << endl;
			cout << "Insertar el valor de la constante de C2" << endl;
			cin >> c2;
			cout << " " << endl;
			c = ((a2)*(a1+b1))+((-a1)*(a2+b2));
			x = c;
			y = (c1-(b1*x))/(a1);
			cout << " " << endl;
			cout << " " << endl;
			cout << "La variable x es igual a" << endl;
			cout << x << endl;
			cout << " " << endl;
			cout << "La variable y es igual a" << endl;
			cout << y << endl;
            system("pause");
            parcial_1_pagina_3();
}
void programa_26(){
    system("cls");
    system("color 70");
    int i, m;
	for (i = 2; i <= 100; i = i + 2 ) {
	m = m + 1;
	}
	cout << "Hay " << m << " Numeros pares entre 1 y 100" << endl;
    system("pause");
    parcial_1_pagina_3();
}
void programa_27(){
    system("cls");
    system("color 70");
    int i, m, n;
					m = 0;
					cout<<"Quiere que su intervalo empiece en: "<<endl;
					cin>>i;
					cout<<"Y termine en: "<<endl;
					cin>>n;
					for (i = i; i <= n; i = i + 2 ) {
						
						m = m + 1;
					}
					cout << "Hay " << m << " Numeros pares entre 1 y 100" << endl;
                    system("pause");
                    parcial_1_pagina_3();
}
void programa_28(){
    system("cls");
    system("color 70");
    char nombre[30];
					cout<<"¿Cómo te llamas? - "<<endl;
					
					cin.getline(nombre,30,'\n');
					
					cout<<nombre<<endl;
                    system("pause");
                    parcial_1_pagina_3();
}
void programa_29(){
    system("cls");
    system("color 70");
    int L;
					string letra, numero;
				    cout<<"-------------------------------------------------T E C L A D O-------------------------------------------------------"<<endl;
					
					cout<<"Si quiere escribir una letra escriba 1, si es un número escriba 0."<<endl;
				
					cin>>L;
					
					if (L==1){
						
						cout<<"DIGITE UNA LETRA: "<<endl;
						cin>>letra;
						
						cout<<"El teclado dice que su letra es: "<<letra<<endl;
						cout<<" "<<endl;
						cout<<"Denada"<<endl;
						
					}
					
					if (L==0){
						
						cout<<"DIGITE UN NÚMERO: "<<endl;
						cin>>numero;
						
							cout<<"El teclado dice que su número es: "<<numero<<endl;
						cout<<" "<<endl;
						cout<<"Denada"<<endl;
					}
                    system("pause");
                    parcial_1_pagina_3();
}
void programa_30(){
    system("cls");
    system("color 70");
     int residuo, nd, ms;
				    
				    cout<<"Este es un programa que solicita números y se encarga de saber si el número es divisible entre 5, el programa termina hasta que el usuario introduzca un 0."<<endl;
				    cout<<" "<<endl;
				    cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
				    cout<<" ";
				    
				    
				    
				    while (nd!=0){
				    	 cout<<"Introduzca un número: ";
				   cin>>nd;
				   
				   if(nd!=0){
					
					residuo=nd%5;
					
				    if (residuo==0){
					
				    cout<<"Tu número sí es divisible entre 5"<<endl;
				}
				
					if (residuo!=0){
						
						cout<<"Tu número no es divisible sobre 5"<<endl;
						
					}
					
				}
					
					if (nd == 0){
						
						cout<<"Presione 'Enter' para salir del programa."<<endl;
						
					}
					
				}
                system("pause");    
                parcial_1_pagina_3();
}
void programa_31(){
    system("cls");
    system("color 70");
    int i;
				i = 1;
				while (i<=10) {
					cout << i << endl;
					i = i+1;
				}
                system("pause");
                parcial_1_pagina_3();
}
void programa_32(){
    system("cls");
    system("color 70");
    char l;

				   cout << "Ingresa una letra: ";
				   cin >> l;
				
				   switch (l) {
				      case 'a':
				      case 'A':
				      case 'e':
				      case 'E':
				      case 'i':
				      case 'I':
				      case 'o':
				      case 'O':
				      case 'u':
				      case 'U':
				         cout << l << " es una vocal." << endl;
				         break;
				      default:
				         cout << l << " es una consonante." << endl;
                   }
                   system("pause");
                   parcial_1_pagina_3();
}
void programa_33(){
    system("cls");
    system("color 70");
    int a = 0, b = 1, temp;
				   int n;
				
				   cout << "Ingresa la posicion de la serie de Fibonacci: ";
				   cin >> n;
				
				   for (int i = 0; i < n; i++) {
				      temp = a;
				      a = b;
				      b += temp;
				   }
				
				   cout << "El numero correspondiente a la posicion " << n << " de la serie de Fibonacci es: " << a << endl;
                   system("pause");
                   parcial_1_pagina_3();
}
void programa_34(){
    system("cls");
    system("color 70");
    int a = 0, b = 1, temp;
    int altura;
				    cout << "Ingrese la altura de la piramide: ";
				    cin >> altura;
				    
				    
				    for (int i = 1; i <= altura; i++) {
				    	
				        for (int j = 1; j <= altura - i; j++) {
				            cout << " ";
				        }
				        
				        for (int k = 1; k <= i * 2 - 1; k++) {
				            cout << "*";
				        }
				        
				        cout << endl;
				    }
                    system("pause");
                    parcial_1_pagina_3();
}
void programa_35(){
    system("cls");
    system("color 70");
    int numero, factorial = 1;
				    cout << "Ingrese un numero: ";
				    cin >> numero;
				    
				    for (int i = 1; i <= numero; i++) {
				        factorial *= i;
				    }
				    
				    cout << "El factorial de " << numero << " es " << factorial << endl;
                    system("pause");
                    parcial_1_pagina_3();
}
void programa_36() {
    system("cls");
    system("color 70");
    int n, calificacion, suma_mayores = 0, suma_menores = 0, contador_mayores = 0, contador_menores = 0, calificacion_maxima = 0, calificacion_minima = 10;
    double porcentaje_mayores, porcentaje_menores;

    cout << "¿Cuántas calificaciones quiere evaluar? ";
    cin >> n;
    cout << " " << endl;
    cout << " " << endl;

    int i = 0;

    while (i < n) {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificacion;

        if (calificacion >= 6) {
            suma_mayores += calificacion;
            contador_mayores++;
        } else {
            suma_menores += calificacion;
            contador_menores++;
        }

        if (calificacion > calificacion_maxima) {
            calificacion_maxima = calificacion;
        }

        if (calificacion < calificacion_minima) {
            calificacion_minima = calificacion;
        }

        i++;
    }

    porcentaje_mayores = (static_cast<double>(contador_mayores) / n) * 100.0;
    porcentaje_menores = (static_cast<double>(contador_menores) / n) * 100.0;

    cout << "Suma de calificaciones aprobatorias: " << suma_mayores << endl;
    cout << " " << endl;
    cout << "Suma de calificaciones reprobatorias: " << suma_menores << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Número de alumnos aprobados: " << contador_mayores << endl;
    cout << " " << endl;
    cout << "Número de alumnos reprobados: " << contador_menores << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Calificacion mayor: " << calificacion_maxima << endl;
    cout << " " << endl;
    cout << "Calificacion menor: " << calificacion_minima << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Porcentaje de alumnos aprobados: " << porcentaje_mayores << "%" << endl;
    cout << " " << endl;
    cout << "Porcentaje de alumnos reprobados: " << porcentaje_menores << "%" << endl;

    system("pause");
    parcial_1_pagina_3();
}
void programa_37() {
    float resultado, numero1, numero2;

    cout << "Ingrese el primer número que quiera sumar: ";
    cin >> numero1;
    cout << " " << endl;
    cout << "Ingrese el segundo número que quiera sumar: ";
    cin >> numero2;
    cout << " " << endl;

    resultado = suma(numero1, numero2);
    cout << "La suma es: " << resultado << endl;
    system("pause");
    parcial_2_pagina_1();
}
void programa_38() {
    int anio, mes, dia;
    cout << "Ingrese una fecha en formato AAAA MM DD: ";
    cin >> anio >> mes >> dia;
    
    if (esFechaValida(anio, mes, dia)) {
        cout << "Fecha valida" << endl;
    } else {
        cout << "Fecha invalida" << endl;
    }
system("pause");
parcial_2_pagina_1();
}
void programa_39() {
    system("cls");
    system("color 70");
    char caracter;
	int col, ren;
	system("color 70");
	marco();
	col = 2;
	ren = 2;
	for (int i = 1; i < 256; i++){
		caracter = i;
		posxy (col, ren); cout<<i<<" "<<caracter<<endl;
		ren++;
		if (ren == 24){
			col=col+6;
			ren=2;
		}
    }	
    system("pause");
    parcial_2_pagina_1();
}
void programa_40() {
    system("cls");
    system("color 70");
    int valor;
	srand(time(NULL));
	valor = 1 + rand() % 100; //genera un valor entre 1 y 100
	cout<<"genera un valor entre 1 y 100  1 + rand() % 100 "<<valor<<endl;
	valor = 25 + rand() % 100; //genera un valor entre 25 y 124
	cout<<"Genera un valor entre 25y 124   25 + rand() % 100 "<<valor<<endl;
	valor = rand() % 51;
	cout<<"Genera un valor entre 0 y 50   rand() % 51  "<<valor<<endl;
	system("pause");
    parcial_2_pagina_1();
}
void programa_41() {
    system("cls");
    system("color 70");
    int cantidad;
    cout << "Ingrese la cantidad de números aleatorios que desea generar: ";
    cin >> cantidad;
    srand(time(NULL));
    for (int i = 0; i < cantidad; i++) {
        int valor = 1 + rand() % 100;
        cout << "Valor " << i + 1 << ": " << valor << endl;
    }
    system("pause");
    parcial_2_pagina_1();
}
void programa_42() {
    system("cls");
    system("color 70");
    int cantidad;
    int contador = 0;
    
    cout << "Ingrese la cantidad de números aleatorios que desea generar: ";
    cin >> cantidad;
    
    srand(time(NULL));
    
    for (int i = 0; i < cantidad; i++) {
        int valor = 1 + rand() % 100; //genera un valor entre 1 y 100
        cout << "Valor " << i + 1 << ": " << valor << endl;
        contador++;
    }
    
    cout << "Se generaron " << contador << " números aleatorios." << endl;
    
    system("pause");
    parcial_2_pagina_1();
}
void programa_43() {
    system("cls");
    system("color 70");
    setlocale (LC_ALL, "");
	
	system("color 70");
	
	int numeros[] = {4,2,3,1,5};
	int i, posicion, auxiliar;
	
	cout<<"ORDENAMIENTO POR INCERSIÓN."<<endl;
	cout<<"----------------------------"<<endl;
	
	for (i = 0; i < 5; i++){
		
		posicion = i;
		auxiliar = numeros[i];
		
		while((posicion > 0) && (numeros[posicion-1] > auxiliar)){
				
			numeros[posicion] = numeros[posicion - 1];
			posicion--;	

		}
		
		numeros[posicion] = auxiliar;
		
	}
	
	cout<<"Orden Ascendente: { ";
	for (i = 0; i < 5; i++){
		
		cout<<numeros[i]<<" ";
		
	}
	
	cout<<"}"<<endl;
	
	cout<<"Orden Descendente: { ";
	for(i = 4;i>= 0; i--){
		
		cout<<numeros[i]<<" ";
		
	}
	
	cout<<"}"<<endl;
    system("pause");
    parcial_2_pagina_1();
}
void programa_44() {
    system("cls");
    system("color 70");
    int n;
    char cadena[60];
    
    cout << "Ingrese una cadena de texto: ";
    cin.getline(cadena, 60);
    
    // Contar la cantidad de caracteres en la cadena
    int i = 0;
    while (cadena[i] != '\0') {
        i++;
    }
    
    posxy(2, 2); cout << cadena;
    
    posxy(15, 6); cout << cadena << " tiene " << i << " caracteres." << endl;
    
    for (int j = 0; j < i; j++) {
        if (cadena[j] >= 'A' && cadena[j] <= 'Z') {
            cadena[j] += 32;
        }
        else if (cadena[j] >= 'a' && cadena[j] <= 'z') {
            cadena[j] -= 32;
        }
        
        posxy(3, 4 + j); cout << cadena[j];
    }
    system("pause");
    parcial_2_pagina_1();
}
void programa_45() {
    system("cls");
    system("color 70");
    cout << "hacer un marco" << endl;
    /*void marcoxy(int largo, int ancho, int x, int y) {
    // Mover el cursor y en blanco y negro
    // al número de filas "y" especificado
    for (int i = 0; i < y; i++) {
        cout << endl;
    }
    // Mover el cursor a la posición "x" especificada
    for (int i = 0; i < x; i++) {
        cout << " ";
    }

    // Imprimir la esquina superior izquierda del marco
    cout << char(201);
    // Imprimir los lados superiores del marco
    for (int i = 0; i < ancho - 2; i++) {
        cout << char(205);
    }
    // Imprimir la esquina superior derecha del marco
    cout << char(187) << endl;
    // Imprimir los lados izquierdos y derechos del marco
    // para la altura "largo" especificada
    for (int i = 0; i < largo - 2; i++) {
        // Mover el cursor a la posición "x" especificada
        for (int j = 0; j < x; j++) {
            cout << " ";
        }
        // Imprimir el borde izquierdo del marco
        cout << char(186);
        // Imprimir el interior del marco
        for (int j = 0; j < ancho - 2; j++) {
            cout << " ";
        }
        // Imprimir el borde derecho del marco
        cout << char(186) << endl;
    }
    // Mover el cursor a la posición "x" especificada
    for (int i = 0; i < x; i++) {
        cout << " ";
    }
    // Imprimir la esquina inferior izquierda del marco
    cout << char(200);
    // Imprimir los lados inferiores del marco
    for (int i = 0; i < ancho - 2; i++) {
        cout << char(205);
    }
    // Imprimir la esquina inferior derecha del marco
    cout << char(188) << endl;
}*/
marcoxy(10, 10, 10, 10);
    system("pause");
    parcial_2_pagina_2();
}
void programa_46() {
    system("cls");
    system("color 70");
    string nombres[10];
	for (int i=0; i<10; i++){
		posxy(3,2); cout<<"Dame el nombre ["<<i<<"]...";
		for(int j = 25; j<80; j++){
			posxy(j,2);cout<<" ";
		}
		posxy(25,2);getline(cin, nombres[i]);
	}
	for(int i=0; i<5; i++){
		centrarStr(nombres[i],5+i);
	}
    system("pause");
    parcial_2_pagina_2();
}
void programa_47() {
    system("cls");
    system("color 70");
    string texto = "hOlA mUnDo";
    cout << "Texto original: " << texto << endl;
    string texto_en_mayusculas = mayusculas(texto);
    cout << "Texto en mayusculas: " << texto_en_mayusculas << endl;
    string texto_en_minusculas = minusculas(texto);
    cout << "Texto en minusculas: " << texto_en_minusculas << endl;
    system("pause");
    parcial_2_pagina_2();
}
void programa_48() {
    int a, b, c;
	cout<<"Este es un programa que muestra el numero mas pequeño de tres previamente ingresados."<<endl;
	cout<<"Ingresar primer numero entero"<<endl;
	cin>>a;
	cout<<"Ingresar segundo numero entero"<<endl;
	cin>>b;
	cout<<"Ingresar tercer numero entero"<<endl;
	cin>>c;
	cout<<"Los números ordenados del mayor al menor son:"<<endl;
	
		if (a >= b){
	
        if (a >= c){
            
            cout<<a<<endl;
            
            if (b >= c){
                
                cout<<b<<endl;
                
                cout<<c<<endl;
            }
            
            if (c >= b){
                
                cout<<c<<endl;
                
                cout<<b<<endl;
            }
        }
    }

        if (b >= a){
        
        if (b >= c){
            
            cout<<b<<endl;
            
            if (a >= c){
                
                cout<<a<<endl;
                
                cout<<c<<endl;
            }
            
            if (c >= a){
                
                cout<<c<<endl;
                
                cout<<a<<endl;
            }
        }
    }

        if (c >= a){
        
        if (c >= b){
            
            cout<<c<<endl;
            
            if (a >= b){
                
                cout<<a<<endl;
                
                cout<<b<<endl;
            }
            
            if (b >= a){
                
                cout<<b<<endl;
                
                cout<<b<<endl;
                
            }
        }
    }
    system("pause");
    parcial_2_pagina_2();
}
void programa_49() {
    system("cls");
    system("color 70");
    setlocale(LC_ALL, "");
	int n;
	cout << "¿Cuantos alumnos son?"<<endl<<endl;
	cin >> n;
	cin.ignore(); // Consumir el carácter de nueva línea
	string alumnos [n];	
	for (int i=0; i<n; i++) {
		system ("cls"); 
		cout<< "Ingresa el nombre del alumno: "<<endl;
		getline (cin, alumnos[i]);
	}	
	system ("cls");	
	srand(time(NULL));
	for (int i=0; i<n; i++) {
		int valor;
		valor = 1 + rand () % 11;
		cout<<"La calificacion de: " << alumnos[i] << " en matematicas es igual a: "<< valor<<endl;
		valor = 1 + rand () % 11;
		cout<<"La calificacion de: " << alumnos[i] << " en español es igual a: "<< valor<<endl<<endl;	
	}
    system("pause");
    parcial_2_pagina_2();
}
void programa_50() {
        system("cls");
        system("color 70");
        setlocale(LC_ALL, "");
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
        int size = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, size);
        cout << "Arreglo ordenado usando Bubble Sort: \n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        system("pause");
        parcial_2_pagina_2();
}
void programa_51() {
    system("cls");
    system("color 70");
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    cout << "Arreglo ordenado usando Selection Sort: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    parcial_2_pagina_2();
}
void programa_52() {
    system("cls");
    system("color 70");
    vector<int> numerosPares;

    // Generar 30 números pares
    for (int i = 2; i <= 60; i += 2) {
        numerosPares.push_back(i);
    }

    // Calcular el promedio de 10 números
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += numerosPares[i];
    }
    double promedio = static_cast<double>(suma) / 10;

    // Crear un vector que guarda los números del 1 al 20
    vector<int> numerosDelUnoAlVeinte;
    for (int i = 1; i <= 20; i++) {
        numerosDelUnoAlVeinte.push_back(i);
    }

    // Imprimir los resultados
    cout << "Números pares generados: ";
    for (int i = 0; i < numerosPares.size(); i++) {
        cout << numerosPares[i] << " ";
    }
    cout << endl;

    cout << "Promedio de 10 números pares: " << promedio << endl;

    cout << "Números del 1 al 20: ";
    for (int i = 0; i < numerosDelUnoAlVeinte.size(); i++) {
        cout << numerosDelUnoAlVeinte[i] << " ";
    }
    cout << endl;

    system("pause");
    parcial_2_pagina_2();
}
void programa_53() {
    system("cls");
    system("color 70");
    int opcion;
    char respuesta;
    do {
        system("cls");
        marcoxy(29,110,0,0);
        posxy(4,4);cout<<"Autoria de Paulo.";
        posxy(44, 2); cout << "*Encabezado intimidador*" << endl << endl;
        posxy(50, 6);cout << "0. Salir." << endl;
        posxy(50, 8);cout << "1. Pagina 1." << endl;
        posxy(50, 10);cout << "2. Pagina 2." << endl;
        posxy(50, 12);cout << "3. Pagina 3." << endl;
        posxy(50, 14);cout << "4. Pagina 4." << endl;
        posxy(50, 16);cout << "5. Pagina 5." << endl;
        posxy(50, 18);cout << "6. Pagina 6." << endl;
        posxy(50, 20); cout << "7. Pagina 7." << endl;
        posxy(50, 22);cout << "8. Pagina 8 ." << endl;
        posxy(50, 24);cout << "9. Pagina 9." << endl;
        posxy(50, 26);cout << "10. Pagina 10." << endl;
        posxy(60, 90);cout <<"|     Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 0:{
                cout << "Programa terminado." << endl;
            default:
                posxy(45, 50);cout << "Opcion invalida. Seleccione una opcion valida." << endl; 
                break;
        	} //salir
        
            case 1:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
		        //posxy(61,2);cout<<" ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					posxy(65,2);cout<< "xd";
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 1
            case 2:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 2
            case 3:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 3
            
            case 4:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 4
            
            
            case 5:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }// case 5
            
            
            case 6:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 6
            
            
            case 7:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 7
            
            
            case 8:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 8
            
            
            case 9:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 9
            
            
            case 10:{
            	
            	system("cls");
        
		        marcoxy(29,110,0,0);
		        
		        posxy(4,4);cout<<"Autoria de Paulo.";
        
				
		        posxy(50, 6);cout << "0. Salir." << endl;
		        posxy(50, 8);cout << "1. opcion 1." << endl;
		        posxy(50, 10);cout << "2. opcion 2." << endl;
		        posxy(50, 12);cout << "3. opcion 3." << endl;
		        posxy(50, 14);cout << "4. opcion 4." << endl;
		        posxy(50, 16);cout << "5. opcion 5." << endl;
		        posxy(50, 18);cout << "6. opcion 6." << endl;
		        posxy(50, 20); cout << "7. opcion 7." << endl;
		        posxy(50, 22);cout << "8. opcion 8 ." << endl;
		        posxy(50, 24);cout << "9. opcion 9." << endl;
		        posxy(50, 26);cout << "10. opcion 10." << endl;
		        
		        posxy(60, 50);cout <<"|     Seleccione una opcion: ";
        		cin >> opcion;
		        
		        switch(opcion){
		        	
		        	case 0:{
		        		
		        		system("cls");
        
        				marcoxy(29,110,0,0);
        
        				posxy(4,4);cout<<"Autoria de Paulo.";
		        		
						break;
					}//case 0
				
				case 1: {
					
					system("cls");
					
					marcoxy(29,110,0,0);
					
					break;
				}//case 1
                
                case 2:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 2, ¡felicidades!";
                	
					break;
				}//case 2
				case 3:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 3, ¡felicidades!";
                	
					break;
				}//case 3
				case 4:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 4, ¡felicidades!";
                	
					break;
				}//case 4
				case 5:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 5, ¡felicidades!";
                	
					break;
				}//case 5
				case 6:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 6, ¡felicidades!";
                	
					break;
				}//case 6
				case 7:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 7, ¡felicidades!";
                	
					break;
				}//case 7
				case 8:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 8, ¡felicidades!";
                	
					break;
				}//case 8
				case 9:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 9, ¡felicidades!";
                	
					break;
				}//case 9
				case 10:{
                	
                	system("cls");
                	
                	marcoxy(29,110,0,0);
					
					posxy(50, 6); cout<<"Usted ha seleccionado la opción 10, ¡felicidades!";
                	
					break;
				}//case 10
				
            }//switch
            
        }//case 10
			 
		        posxy(60, 90);cout << "Desea ver el menu de nuevo? (s/n): ";
	        	cin >> respuesta;
            
        
    } //switch
	        posxy(60, 90);cout << "Desea ver el menu de nuevo? (s/n): ";
	        cin >> respuesta;
	
	} while (respuesta == 's' || respuesta == 'S'); //fin del do while
    system("pause");
    parcial_2_pagina_2();
}
void programa_54(){ 
    int m;
    system("cls");
    system("color 70");
    posxy(2, 2);
    cout << "Ingrese la dimension de la matriz cuadrada: ";
    cin >> m;
    system("cls");

    const int MAX_SIZE = 100; // Define a maximum size for the arrays
    int A[MAX_SIZE][MAX_SIZE];
    int B[MAX_SIZE][MAX_SIZE];

    for (int fila = 0; fila < m; fila++) {
        for (int columna = 0; columna < m; columna++) {
            posxy(2 + columna * 3, 2 + fila * 2);
            cin >> A[fila][columna];
        }
    }

    posxy(2, 10);
    cout << "La suma con su transpuesta es: ";

    for (int fila = 0; fila < m; fila++) {
        for (int columna = 0; columna < m; columna++) {
            posxy(15 + columna * 3, 2 + fila * 2);
            cout << A[columna][fila];

            B[fila][columna] = A[fila][columna] + A[columna][fila];

            posxy(2 + columna * 3, 13 + fila * 2);
            cout << B[fila][columna];
        }
    }

    system("pause");
    parcial_3_pagina_1();
}
void programa_55(){
    system("cls");
    system("color 70");
        int matriz[3][3];
    int sumaDiagonal = 0, sumaTriangularSuperior = 0, sumaTriangularInferior = 0;
    
	system("color 04");
	float AS[3][3];
	for(int fila = 0; fila < 3; fila++){
		for(int columna = 0; columna < 3; columna++){		
			posxy(columna*10,fila*5);cin>>matriz[fila][columna];		
		}
	}
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i == j) {
                sumaDiagonal += matriz[i][j];
            }
            else if(i < j) { 
                sumaTriangularSuperior += matriz[i][j];
            } 
            else if(i > j) { 
                sumaTriangularInferior += matriz[i][j];
            }
        }
    }
    cout << "La suma de los elementos de la diagonal principal es: " << sumaDiagonal << endl;
    cout << "La suma de los elementos de la triangular superior es: " << sumaTriangularSuperior << endl;
    cout << "La suma de los elementos de la triangular inferior es: " << sumaTriangularInferior << endl;
    system("pause");
    parcial_3_pagina_1();
}
void programa_56(){
    struct persona{
	string nombre;
	string apellido_paterno;
	string apellido_materno;
	int edad;
};
//ESTRUCTURA CON DATOS DEL ALUMNO
struct Alumno{
	string matricula;
	persona datos;
};
struct calificacion{
	string name;
	float parcial1;
	float parcial2;
	float parcial3;
	float ordinario;
	float global;
};
    system("cls");
    system("color 70");
    float prom [15];
	float prom2=0;
	int n=0;
	Alumno salumno;
	calificacion calif[15];

	
	//formato pagina
	marcoxy(100,10,1,1);
	posxy(2,3);cout<<"Matricula";marco(13,2,15,2);
	posxy(35,3);cout<<"Nombre";marco(42,2,25,2);
	posxy(2,6);cout<<"A Paterno";marco(13,5,15,2);
	posxy(32,6);cout<<"A Materno";marco(42,5,15,2);
	posxy(60,6);cout<<"Edad";marco(66,5,5,2);
	posxy(2,9);cout<<"Num materias";marco(16,8,5,2);

	//ingresar datos personales
	posxy(15,3);cin>>salumno.matricula;
	posxy(44,3);cin.ignore();getline(cin,salumno.datos.nombre);
	posxy(15,6);cin.ignore();getline(cin,salumno.datos.apellido_paterno);
	posxy(44,6);cin.ignore();getline(cin,salumno.datos.apellido_materno);
	posxy(68,6);cin>>salumno.datos.edad;
	posxy(18,9);cin>>n;
	
    
	//formato marcoxy
	marcoxy(100,10+n*3,1,12);
	marcoxy(n+1,6,2,14);
	posxy(3,15);cout<<"MATERIA";
	posxy(20,15);cout<<"PARCIAL I";
	posxy(35,15);cout<<"PARCIAL II";
	posxy(50,15);cout<<"PARCIAL III";
	posxy(65,15);cout<<"ORDINARIO";
	posxy(80,15);cout<<"GLOBAL";

	//ingresar datos de materia
	for (int i = 0; i < n; i++)
	{
	    posxy(3,i*2+17);cin.ignore();getline(cin, calif[i].name);
		posxy(20,i*2+17);cin>>calif[i].parcial1;
		posxy(35,i*2+17);cin>>calif[i].parcial2;
		posxy(50,i*2+17);cin>>calif[i].parcial3;
		posxy(65,i*2+17);cin>>calif[i].ordinario;
		prom[i]=((calif[i].parcial1*.20) + (calif[i].parcial2*.20) + (calif[i].parcial3*.20) 
		+ (calif[i].ordinario*.40));
		prom2=prom2 + prom[i];
		posxy(80,i*2+17);cout<<prom[i];
	}

	//imprime promedio general
	posxy(3,18+n*3);cout<<"Promedio general";marco(21,17+n*3,10,2);posxy(23,18+n*3);cout<<prom2/n;
    system("pause");
    parcial_3_pagina_1();
}
void programa_57() {
    system("cls");
    system("color 70");

    float A[100][100];
    float B[100][100];
    float C[100][100];

    int m, n, m2, n2;
    system("color 02");
    marco(1,1,80,24);
    posxy(2,2);cout<<"Ingrese las filas de la primera matriz : ";
    cin>>m;
    posxy(2,4);cout<<"Ingrese las columnas de la primera matriz : ";
    cin>>n;
    posxy(2,6);cout<<"Ingrese las filas de la segunda matriz : ";
    cin>>m2;
    posxy(2,8);cout<<"Ingrese las columnas de la segunda matriz : ";
    cin>>n2;

    if (n == m2) {
        system("cls");
        marco(1,1,80,28);

        marcomatriz(2,2,m,n);
        for(int fila=0; fila<m; fila++) {
            for(int columna=0; columna<n; columna++) {
                posxy(4+columna*10,3+fila*2);cin>>A[fila][columna];

            }
        }
        marcomatriz(40,2,m2,n2);
        for(int fila=0; fila<m2; fila++) {
            for(int columna=0; columna<n2; columna++) {
                posxy(41+columna*10,3+fila*2);cin>>B[fila][columna];

            }
        }

        posxy(2,12);cout<<"La multiplicacion es igual a: ";
        marcomatriz(2,13,m, n2);
        for(int fila=0; fila<m; fila++) {
            for(int columna = 0; columna<n2; columna++) {
                for(int i=0; i<m2; i++) {
                    C[fila][columna] += A[fila][i]*B[i][columna];
                }
                posxy(3+columna*10,14+fila*2);cout<<C[fila][columna];
            }
        }
    }
    if(n != m2) {
        posxy(2,10);cout<<"Con las dimensiones ingresadas no se puede realizar la operacion";
    }
    system("pause");
    parcial_3_pagina_1();
}
void programa_58() {
    system("cls");
    system("color 70");
    portada();
    MENU();
    system("pause");
    parcial_3_pagina_1();
}
void programa_59() {
    system("cls");
    float A[100][100];
    float B[100][100];
    float C[100][100];
    float D[100][100];
    system("color 02");
 	int n,m;
    marco(1,1,80,24);
    posxy(2,2);cout << "Ingrese el numero de columnas: ";
    posxy(2,3);cin >> n;
    posxy(2,4);cout << "Ingrese el numero de filas: ";
    posxy(2,5);cin >> m;
    system("cls");
    
    
    if (n==m){
   			 for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
            posxy(2+columna*5,5+fila*2);cin >> A[fila][columna];
        }	
    	} 
	system("cls");
    
   			 for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
            posxy(2+columna*5,5+fila*2);cin >> B[fila][columna];
       		 }
   			 }

    system("cls");
    
    
    marco(1,1,80,24);
    posxy(2,2);cout<<"La resta es igual a : ";
    
	for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
           C[fila][columna] = A[fila][columna]-B[fila][columna];
            posxy(2+columna*5,5+fila*2);cout <<C[fila][columna];
        }
    }

	
     posxy(2,10);cout<<"La multiplicacion es igual a : ";
	     for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
           D[fila][columna] = C[fila][columna]*10;
            posxy(2+columna*5,15+fila*2);cout<< D[fila][columna];
        }
    } 
	}   
    system("pause");
    parcial_3_pagina_1();
}
void programa_60() {
			system("cls");
			float A[7][8];
			float pivote;
			int num=0;
			system("color 09");
			posxy(2,2);cout<<"Solucion de sistema de ecuaciones hasta de 7 variables (GAUSS-JORDAN)";
			posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
			cin>>num;
			if(num>7){
			system("cls");
			posxy(4,2);cout<<"Ingresa un numero de variables valido";
		}
			if(num<=0){
			system("cls");
			posxy(4,2);cout<<"Ingresa un numero de variables valido";
		}
			
			if (num<8){
			//poner posiciones de matriz
			marcomatriz(5,6,num, num+1);
			for (int x=0; x<num; x++){
				posxy(2,7+x*2);cout<<"X"<<x+1;
				posxy(9+x*10, 5);cout<<"X"<<x+1;
					
			}
			//ingresar matriz
			posxy(10+num*10,5);cout<<"R";
			for(int fila=0; fila<num; fila ++){
				for(int columna=0; columna<num+1; columna++){	
				posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
			}
			}
			
			
		for (int i = 0; i<num; i++) {
			if (A[i][i] == 0) {
				bool change=false;
				for (int j= i+1; j<num; j++) {
					if (A[j][i] !=0){
						for (int k=0; k<num+1; k++) {
							double temp=A[i][k];
							A[i][k]=A[j][k];
							A[j][k]=temp;
						}
						change=true;
						break;
					}
				}}}

			for(int fila_pivote=0; fila_pivote<num; fila_pivote++){
				pivote= A[fila_pivote][fila_pivote];
				for (int columna=0; columna<num+1;columna++){
				A[fila_pivote][columna]=(A[fila_pivote][columna])/pivote;
			}
			for (int fila=fila_pivote+1;  fila<num;fila++){
					pivote = (A[fila][fila_pivote])*-1;
					for (int columna = 0; columna<num+1; columna++){
						A[fila][columna] = pivote * A[fila_pivote][columna] + A[fila][columna];
						
				}
			}}
			
			for (int fila_pivote=num; fila_pivote>= 0;fila_pivote--){
				for(int fila=fila_pivote-1; fila>=0; fila--){
					pivote=A[fila][fila_pivote]*-1;
					for(int columna=0; columna<num+1;columna++){
						A[fila][columna]=pivote*A[fila_pivote][columna]+A[fila][columna];

					}
				}
			}
		}

		//Imprimir resultados
			system("cls");
			marcomatriz(5,6,num, num+1);
			for (int x=0; x<num; x++){
				posxy(2,7+x*2);cout<<"X"<<x+1;
				posxy(9+x*10, 5);cout<<"X"<<x+1;
					
			}
			
			for(int fila=0; fila<num; fila++){
				for(int columna=0; columna<num+1; columna++){	
				posxy(8+columna*10,7+fila*2);cout<<A[fila][columna];
			}
			}
				for(int i=0;i<num;i++){
						posxy(60,4+i*2);cout<<"x"<<i+1<<"="<<A[i][num];
						cout<<endl;	
				}
			posxy(2,15);system ("pause");
    parcial_3_pagina_1();
}
void programa_61() {
    system("cls");
    system("color 70");
    ofstream archivo("ejemplo.txt");//abre el archivo para escritura

    if (archivo.is_open()){//verifica si el archivo se abriÃ³ correctamente
        archivo<<"Hola, esto es un ejemplo de escritura en un archivo de texto"<<endl;
        archivo<<"Espero que te sea util"<<endl;

    archivo.close();//cierra el archivo
    cout<<"La escritura en el archivo se realizo correctamente."<<endl;

    } else {
        cout<<"No se pudo abrir el archivo."<<endl;
    }

    system("pause");
    parcial_3_pagina_1();
}
void programa_62() {
    system("cls");
    system("color 70");
    matriz3x3();	
marco(1,1,80,24);
system ("color 04");
float A[3][3];
for(int fila=0; fila<3; fila ++){
	for(int columna=0; columna<3; columna++){	
		posxy(3+4*columna,3+fila*2);cin>>A[fila][columna];
	}		
}
    system("pause");
    parcial_3_pagina_1();
}
void programa_63() {
    system("cls");
    system("color 70");
    struct persona{
	int ID;
	string nombre;
	string apellido_paterno;
	string apellido_materno;
	int edad;
	string nacionalidad;
	int cp;
	float estatura;
	float peso;
	char sexo;
	string CURP;
};
//ESTRUCTURA CON DATOS DE CALIFICACIONES
struct calificacion{
	float parcial1;
	float parcial2;
	float parcial3;
	float ordinario;
	float global;
};
//ESTRUCTURA CON DATOS DEL ALUMNO
struct Alumno{
	string matricula;
	persona datos;
	string carrera;
	int semestre;
	calificacion calif;
};
	system("cls");
	system("color 03");
	int numero_alumnos;
	marco(1,1,80,7);
	posxy(2,2);cout<<"CALIFICACIONES DE ALUMNOS";
	posxy(2,4);cout<<"Cuantos alumnos quiere ingresar?";
	posxy(2,5);cin>>numero_alumnos;
	Alumno estudiante [numero_alumnos];

	system("cls");
	system("color 03");
	
	posxy(2,2); cout<<"Nombre";
	posxy(17, 2);cout<<"Ap paterno";
	posxy(34,2);cout<<"Ap materno";
	posxy(47, 2); cout<<"Matricula";
	posxy(62, 2); cout<<"Parcial I";
	posxy(77, 2);cout<<"Parcial II";
	posxy(93, 2);cout<<"Parcial III";
	posxy(108, 2);cout<<"Ordinario";
	posxy(123, 2);cout<<"Global";
	
    marcoxy(numero_alumnos+1, 9, 1, 1);

	for (int i= 0; i<numero_alumnos; i++){
	posxy(2, 4+i*2);cin>>estudiante[i].datos.nombre;

	posxy(17, 4+i*2);cin>>estudiante[i].datos.apellido_materno;
	
	posxy(34,4+i*2);cin>>estudiante[i].datos.apellido_paterno;
	
	posxy(47, 4+i*2);cin>>estudiante[i].matricula;
	
	posxy(62, 4+i*2);cin>>estudiante[i].calif.parcial1;
	
	posxy(77, 4+i*2);cin>>estudiante[i].calif.parcial2;

	posxy(93, 4+i*2);cin>>estudiante[i].calif.parcial3;
	
	posxy(108, 4+i*2);cin>>estudiante[i].calif.ordinario;
	
	posxy(123, 4+i*2);cout<< ((estudiante[i].calif.parcial1 * 0.20)+(estudiante[i].calif.parcial2 * 0.20)+(estudiante[i].calif.parcial3 * 0.20))+(estudiante[i].calif.ordinario * 0.40)<<endl;
	
}
    system("pause");
    parcial_3_pagina_1();
}
void programa_64() {
    system("cls");
    system("color 70");
    //ESTRUCTURA CON DATOS PERSONALES
struct persona{
	int ID;
	string nombre;
	string apellido_paterno;
	string apellido_materno;
	int edad;
	string nacionalidad;
	int cp;
	float estatura;
	float peso;
	char sexo;
	string CURP;
};
//ESTRUCTURA CON DATOS DE CALIFICACIONES
struct calificacion{
	float parcial1;
	float parcial2;
	float parcial3;
	float ordinario;
	float global;
};
//ESTRUCTURA CON DATOS DEL ALUMNO
struct Alumno{
	string matricula;
	persona datos;
	string carrera;
	int semestre;
	calificacion calif;
};
    ofstream archivo("ejemplo2.txt");
    if (archivo.is_open()){
    float prom[15];
	string registro1;
    string registro;
	system("cls");
	system("color 03");
	int numero_alumnos;
	marco(1,1,80,7);
	posxy(2,2);cout<<"CALIFICACIONES DE ALUMNOS";
	posxy(2,4);cout<<"Cuantos alumnos quiere ingresar?";
	posxy(2,5);cin>>numero_alumnos;
	Alumno estudiante [numero_alumnos];

	system("cls");
	system("color 03");
	
	posxy(2,2); cout<<"Nombre";
	posxy(17,2);cout<<"Ap paterno";
	posxy(34, 2); cout<<"Ap materno";
	posxy(47, 2); cout<<"Matricula";
	posxy(62, 2); cout<<"Parcial I";
	posxy(77, 2);cout<<"Parcial II";
	posxy(93, 2);cout<<"Parcial III";
	posxy(108, 2);cout<<"Ordinario";
	posxy(123, 2);cout<<"Global";
	
   registro1 += rPad("Nombre",' ', 20) + rPad("A paterno",' ',20) + rPad("A materno",' ',20)
	 +rPad("matricula",' ',9) + rPad("parc1",' ',5)+rPad("parc2",' ',5)+rPad("parc3",' ',5)+rPad("ordi",' ',5)+
	 rPad("globa",' ',5) +"\n";
     archivo<<registro1;

    marcoxy(numero_alumnos+1, 9, 1, 1);
   
    for (int i= 0; i<numero_alumnos; i++){
	
	posxy(2, 4+i*2);cin>>estudiante[i].datos.nombre;
	
	posxy(17, 4+i*2);cin>>estudiante[i].datos.apellido_paterno;
	
	posxy(34,4+i*2);cin>>estudiante[i].datos.apellido_materno;

	posxy(47, 4+i*2);cin>>estudiante[i].matricula;
	
	posxy(62, 4+i*2);cin>>estudiante[i].calif.parcial1;
	
	posxy(77, 4+i*2);cin>>estudiante[i].calif.parcial2;

	posxy(93, 4+i*2);cin>>estudiante[i].calif.parcial3;
	
	posxy(108, 4+i*2);cin>>estudiante[i].calif.ordinario;

    prom[i]=((estudiante[i].calif.parcial1 * 0.20)+(estudiante[i].calif.parcial2 * 0.20)+(estudiante[i].calif.parcial3 * 0.20))+(estudiante[i].calif.ordinario * 0.40);
	
	posxy(123, 4+i*2);cout<<prom[i]<<endl;
	
    registro += rPad(estudiante[i].datos.nombre,' ', 20) + rPad(estudiante[i].datos.apellido_paterno,' ',20) + 
	rPad(estudiante[i].datos.apellido_materno,' ',20) +rPad(estudiante[i].matricula,' ',9) 
    + rPad(substr(floatTostr(estudiante[i].calif.parcial1),1,5),' ',5) + rPad(substr(floatTostr(estudiante[i].calif.parcial2),1,5),' ',5) 
    + rPad(floatTostr(estudiante[i].calif.parcial3),' ',5) + rPad(floatTostr(estudiante[i].calif.ordinario),' ', 5) 
    + rPad(floatTostr(prom[i]),' ',5)+"\n";
}



	
	archivo<<registro;
    archivo.close();//cierra el archivo
    cout<<"La escritura en el archivo se realizo correctamente."<<endl;

    }
    else {
        cout<<"No se pudo abrir el archivo."<<endl;
    }
    system("pause");
    parcial_3_pagina_1();
}
void programa_65() {
    system("cls");
    system("color 70");
    float A[8][8];
    system("cls");
	int num=0;
	marco(1,1, 100,24);
	system("color 09");
	posxy(2,2);cout<<"Solucion de sistema de ecuaciones hasta de 7 variables (GAUSS)";
	posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
	cin>>num;
	//poner posiciones de matriz
	marcomatriz(5,6,num, num+1);
	for (int x=0; x<num; x++){
			posxy(2,7+x*2);cout<<"X"<<x+1;
			posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	//ingresar matriz
	posxy(10+num*10,5);cout<<"R";
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
 	}
	}
	
	
	for (int k=0; k<num; k++){
		for (int i=0; i<num; i++){
			if (i!=k){
				double factor=A[i][k] / A[k][k];
				for (int j=k; j<num+1; j++){
					A[i][j]-=factor*A[k][j];
				}
			}
		}
	}
	
   	for(int i=0; i<num; i++){ 
		float x= A[i][num] / A[i][i];	
		posxy(70,7+i*2);cout<<"x"<<i+1<<"= "<<x<<endl;
 	
	}    
        
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,20+fila*2);cout<<A[fila][columna];
 	}
	}
    system("pause");
    parcial_3_pagina_1();
}
void programa_66() {
    system("cls");
    system("color 70");
    float A[7][8];
    float pivote;
    int num=0;
	system("color 09");
	posxy(2,2);cout<<"Solucion de sistema de ecuaciones hasta de 7 variables (GAUSS-JORDAN)";
	posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
	cin>>num;
	if(num>7){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}
 	if(num<=0){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}
	
	if (num<8){
	//poner posiciones de matriz
	marcomatriz(5,6,num, num+1);
	for (int x=0; x<num; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	//ingresar matriz
	posxy(10+num*10,5);cout<<"R";
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
 	}
	}
	
	
for (int i = 0; i<num; i++) {
    if (A[i][i] == 0) {
        bool change=false;
        for (int j= i+1; j<num; j++) {
            if (A[j][i] !=0){
                for (int k=0; k<num+1; k++) {
                    double temp=A[i][k];
                    A[i][k]=A[j][k];
                    A[j][k]=temp;
                }
                change=true;
                break;
            }
        }}}

	for(int fila_pivote=0; fila_pivote<num; fila_pivote++){
		 pivote= A[fila_pivote][fila_pivote];
		for (int columna=0; columna<num+1;columna++){
		A[fila_pivote][columna]=(A[fila_pivote][columna])/pivote;
	}
	for (int fila=fila_pivote+1;  fila<num;fila++){
			pivote = (A[fila][fila_pivote])*-1;
			for (int columna = 0; columna<num+1; columna++){
				A[fila][columna] = pivote * A[fila_pivote][columna] + A[fila][columna];
				
		}
	}}
	
	for (int fila_pivote=num; fila_pivote>= 0;fila_pivote--){
		for(int fila=fila_pivote-1; fila>=0; fila--){
			pivote=A[fila][fila_pivote]*-1;
			for(int columna=0; columna<num+1;columna++){
				A[fila][columna]=pivote*A[fila_pivote][columna]+A[fila][columna];

			}
		}
	}
}

//Imprimir resultados
	system("cls");
	marcomatriz(5,6,num, num+1);
	for (int x=0; x<num; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	
 	for(int fila=0; fila<num; fila++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,7+fila*2);cout<<A[fila][columna];
 	}
	}
		for(int i=0;i<num;i++){
				posxy(60,4+i*2);cout<<"x"<<i+1<<"="<<A[i][num];
				cout<<endl;	
		}
    system("cls");
    parcial_3_pagina_2();
}
void programa_67() {
    system("cls");
    system("color 70");
    programa_66();
    system("pause");
    parcial_3_pagina_2();
}
void programa_68() {
    system("cls");
    system("color 70");
    int n;
	double mh;
	system ("color 03");
	cout<<"Solucion de Sistema de ecuaciones hasta 7 variables por Gauss"<<endl;
	cout<<"Introduzca el numero de variables del sistema: ";
	cin>>n;
	if(n<=7){
		double A[n][n+1];
		double cambia[n];	
		bool lCero;
	marcomatriz(5,6,n, n+1);
	for (int x=0; x<n; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	posxy(10+n*10,5);cout<<"R";
	
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n+1;j++){
				posxy(8+j*10,7+i*2);cin>>A[i][j];
				if ((i==0) & (j==0) & (A[i][j]==0)){ lCero=1;
				}
				cout<<endl;
			}
		}
		if (lCero==1){
			for (int ren=1;ren<n;ren++){
		    	if (A[ren][0]!=0){
		  
					for(int i=0;i<n;i++){
						cambia[i]=A[0][i];
						A[0][i]=A[ren][i];
						A[ren][i]=cambia[i];
					}
				}
			}
		}
		
		for(int i=0;i<n;i++){
					if(A[i][i]==0){
					cout<<"No tiene solucion";
					exit(0);
				}
			for(int j=0;j<n;j++){
				if(j!=i){
					mh=A[j][i]/A[i][i];
					for(int k=i;k<n+1;k++){
						A[j][k]=A[j][k]-mh*A[i][k];
					}		
				}else{
					mh=A[i][i];
					for(int k=0;k<n+1;k++){
						A[i][k]=A[i][k]/mh;
					}
				}

					
			}
			
		}
		
		
		system("cls");
	

//imprimir resultados

	for(int i=0;i<n;i++){
		for(int j=0;j<n+1;j++){
				posxy(8+j*10,7+i*2);cout<<A[i][j];
				cout<<endl;
			}
		}
	marcomatriz(5,6,n, n+1);
	for (int x=0; x<n; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	posxy(10+n*10,5);cout<<"R";
		
		for(int i=0;i<n;i++){
				posxy(60,4+i*2);cout<<"x"<<i+1<<"="<<A[i][n];
				cout<<endl;
			
		}


	}else{
		cout<<"Ingresa un numero valido";
	}
    system("pause");
    parcial_3_pagina_2();
}
void programa_69() {
    system("cls");
    system("color 70");
    float A[10][10];
    float B[10][10];
    float pivote;
    int num=0;
	system("color 09");
	posxy(2,2);cout<<"Resolver matriz a su inversa, maximo de 7 variables";
	posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
	cin>>num;
	if(num>7){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}
 	if(num<=0){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}

	
        if (num<8){
            
        for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
        if(i==j) B[i][j]=1;
        else B[i][j]=0;
    }}

        //poner posiciones de matriz
        marcomatriz(5,6,num, num);
        for (int x=0; x<num; x++){
            posxy(2,7+x*2);cout<<"X"<<x+1;
            posxy(9+x*10, 5);cout<<"X"<<x+1;
                
        }
        
        //ingresar matriz
        for(int fila=0; fila<num; fila ++){
            for(int columna=0; columna<num; columna++){	
            posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
        }
        }
        for (int i=0; i<num; i++){
            if (A[i][i]==0){
            bool change=false;
            for (int j= i+1; j<num; j++){
                if (A[j][i]!=0){
                    for (int k=0; k<num; k++){
                        double temp=A[i][k];
                        A[i][k]=A[j][k];
                        A[j][k]=temp;
                        temp=B[i][k];
                        B[i][k]=B[j][k];
                        B[j][k]=temp;
                    }
                    change=true;
                    break;   
                }
            }
        }	
		}
        for(int fila_pivote=0; fila_pivote<num; fila_pivote++){
            pivote= A[fila_pivote][fila_pivote];
            for (int columna=0; columna<num;columna++){
            A[fila_pivote][columna]=(A[fila_pivote][columna])/pivote;
            B[fila_pivote][columna]=(B[fila_pivote][columna])/pivote;
        }
        for (int fila=fila_pivote+1;  fila<num;fila++){
                pivote = (A[fila][fila_pivote])*-1;
                for (int columna = 0; columna<num; columna++){
                    A[fila][columna] = pivote * A[fila_pivote][columna] + A[fila][columna];
                    B[fila][columna] = pivote * B[fila_pivote][columna] + B[fila][columna];
            }
        }}
        for (int fila_pivote=num; fila_pivote>= 0;fila_pivote--){
            for(int fila=fila_pivote-1; fila>=0; fila--){
                pivote=A[fila][fila_pivote]*-1;
                for(int columna=0; columna<num;columna++){
                    A[fila][columna]=pivote*A[fila_pivote][columna]+A[fila][columna];
                    B[fila][columna]=pivote*B[fila_pivote][columna]+B[fila][columna];
                }
            }
        }
    }
    //Imprimir resultados
        system("cls");
        marcomatriz(5,6,num, num);
        for (int x=0; x<num; x++){
            posxy(2,7+x*2);cout<<"X"<<x+1;
            posxy(9+x*10, 5);cout<<"X"<<x+1;
                
        }
        
        for(int fila=0; fila<num; fila++){
            for(int columna=0; columna<num; columna++){	
            posxy(8+columna*10,7+fila*2);cout<<B[fila][columna];
        }
        }
    system("pause");
    parcial_3_pagina_2();
}
void programa_70() {
    float A[8][8];
    float B[8][8];
    float C[8][1];
    float D[8][8];
    float pivote;
    system("cls");
	int num=0;
	system("color 09");
	posxy(2,2);cout<<"Solucion de sistema de ecuaciones hasta de 7 variables (METODO INVERSA)";
	posxy(2,3);cout<<"Introduzca el numero de variables del sistema: ";
	cin>>num;
	if(num>7){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}
 	if(num<=0){
	system("cls");
	posxy(4,2);cout<<"Ingresa un numero de variables valido";
}

	
	if (num<8){
		
	for(int i=0;i<num;i++){
	for(int j=0;j<num;j++){
	if(i==j) B[i][j]=1;
	else B[i][j]=0;
}}

	//poner posiciones de matriz
	marcomatriz(5,6,num, num+1);
	for (int x=0; x<num; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;
			
	}
	posxy(10+num*10,5);cout<<"R";
	//ingresar matriz
	for(int fila=0; fila<num; fila ++){
		for(int columna=0; columna<num+1; columna++){	
		posxy(8+columna*10,7+fila*2);cin>>A[fila][columna];
 	}
	}
	for (int i=0; i<num; i++){
		if (A[i][i]==0){
	  	bool change=false;
	  	 for (int j= i+1; j<num; j++){
            if (A[j][i]!=0){
                for (int k=0; k<num; k++){
                    double temp=A[i][k];
                    A[i][k]=A[j][k];
                    A[j][k]=temp;
                    temp=B[i][k];
                    B[i][k]=B[j][k];
                    B[j][k]=temp;
                }
                change=true;
                break;
                
            }
         
        }
	  }	
	}
	
	for(int fila_pivote=0; fila_pivote<num; fila_pivote++){
		pivote= A[fila_pivote][fila_pivote];

		for (int columna=0; columna<num;columna++){
		A[fila_pivote][columna]=(A[fila_pivote][columna])/pivote;
		B[fila_pivote][columna]=(B[fila_pivote][columna])/pivote;
	}
	for (int fila=fila_pivote+1;  fila<num;fila++){
			pivote = (A[fila][fila_pivote])*-1;
			for (int columna = 0; columna<num; columna++){
				A[fila][columna] = pivote * A[fila_pivote][columna] + A[fila][columna];
				B[fila][columna] = pivote * B[fila_pivote][columna] + B[fila][columna];
		}
	}

}


	for (int fila_pivote=num; fila_pivote>= 0;fila_pivote--){
		for(int fila=fila_pivote-1; fila>=0; fila--){
			pivote=A[fila][fila_pivote]*-1;
			for(int columna=0; columna<num;columna++){
				A[fila][columna]=pivote*A[fila_pivote][columna]+A[fila][columna];
				B[fila][columna]=pivote*B[fila_pivote][columna]+B[fila][columna];

			}
		}
	}
	
	for (int i=0; i<num; i++){
		C[i][0]=A[i][num];	
	}
	
	


//Imprimir resultados



    for(int fila=0; fila<num; fila++){ 
        for(int columna = 0; columna<num; columna++){
            for(int i=0; i<num; i++){
                D[fila][columna] += B[fila][i]*C[i][columna];
            }
    
        }
        }
         
	system("cls");
	posxy(5,2);cout<<"Matriz inversa:";
	marcomatriz(5,6,num, num);
	for (int x=0; x<num; x++){
		posxy(2,7+x*2);cout<<"X"<<x+1;
		posxy(9+x*10, 5);cout<<"X"<<x+1;	
	}
	
 	for(int fila=0; fila<num; fila++){
		for(int columna=0; columna<num; columna++){	
		posxy(8+columna*10,7+fila*2);cout<<B[fila][columna];
 	}
	}
	
	posxy(60,2);cout<<"Resultados del sistema de ecuaciones:";
	for(int i=0;i<num;i++){
			posxy(60,4+i*2);cout<<"x"<<i+1<<"="<<D[i][0];
			cout<<endl;	
		}
    }
    system("pause");
    parcial_3_pagina_2();
}
void programa_71() {
    system("cls");
    system("color 70");
    	float A[3][3];
	for(int fila=0; fila<3; fila ++){
		
		for(int columna=0; columna<3; columna++){
			
			//cout<<"Elemento["<<fila<<"]["<<columna<<"]"<<endl;
			posxy(columna*2,fila);cin>>A[fila][columna];
		}
			
	}
    system("pause");
    parcial_3_pagina_2();
}
void programa_72() {
    system("cls");
    system("color 70");
    int n, m, p;
    cout << "Ingrese el tamaño de la primera matriz (filas columnas): ";
    cin >> n >> m;
    cout << "Ingrese el tamaño de la segunda matriz (filas columnas): ";
    cin >> m >> p;
    
    // Declaración e inicialización de las matrices
    int A[n][m], B[m][p], C[n][p];
    cout << "Ingrese los valores de la primera matriz: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }
    cout << "Ingrese los valores de la segunda matriz: " << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cin >> B[i][j];
        }
    }
    
    // Multiplicación de matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            C[i][j] = 0;
            for(int k = 0; k < m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Impresión de la matriz resultante
    cout << "El resultado de la multiplicación de las matrices es: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    parcial_3_pagina_2();
}
void programa_73() {
    system("cls");
    system("color 70");
    float A[100][100];
    float B[100][100];
    float C[100][100];
    int n,m;
 	
    cout<< "Ingrese el numero de filas: ";
    cin>> m;
    cout<<"Ingrese el numero de columnas: ";
    cin>>n;
    
    system("cls");
 
    		marcomatriz(1,1,m,n);
   			 for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
            posxy(4+columna*10,2+fila*2);cin>>A[fila][columna];
        }
    } 
            marcomatriz(1,13,m,n);
   			for(int fila = 0; fila < n; fila++){
        	for(int columna = 0; columna < m; columna++){
            posxy(4+columna*10,14+fila*2);cin>>B[fila][columna];
        }
    }
    system("cls");
    posxy(2,2);cout<<"La suma es igual a : ";
        marcomatriz(2,5,m,n);
		 for(int fila = 0; fila<n; fila++){
        	for(int columna = 0; columna < m; columna++){
        		C[fila][columna] = A[fila][columna]+B[fila][columna];
            posxy(5+columna*10,6+fila*2);cout<<C[fila][columna];
        }
    } 
    system("pause");
    parcial_3_pagina_2();
}
void programa_74() {
    system("cls");
    system("color 70");
    int resultado[10][10];
    system("cls");
    int m = 0, n = 0;
    posxy(2, 2);
    cout << "Ingrese la dimension de la matriz: ";
    posxy(2, 3);
    cin >> n;
    posxy(2, 4);
    cout << "Digite un numero para la potencia de la matriz (mayor a cero): ";
    posxy(2, 5);
    cin >> m;
    if (m <= 0) {
        system("cls");
        centrarStr("¿Qué parte de MAYOR QUE 0 no entiendes?", 10);
        system("pause");
    }

    float A[10][10], B[10][10], C[10][10], D[10][10];
    system("cls");
    posxy(2, 2);
    cout << "Ingrese la matriz: ";
    marcomatriz(2, 5, n, n);
    for (int fila = 0; fila < n; fila++) {
        for (int columna = 0; columna < n; columna++) {
            posxy(7 + columna * 10, 6 + fila * 2);
            cin >> A[fila][columna];
        }
    }
	
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = A[i][j];
        }
    }
    for (int k = 0; k < m; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                D[i][j] = 0;
                for (int x = 0; x < n; x++) {
                    D[i][j] += B[i][x] * A[x][j];
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = D[i][j];
            }
        }
    }
    system("cls");
    cout << "El resultado de elevar la matriz a la potencia " << m << " es: " << endl;
    marcomatriz(2, 2, n, n);
    for (int fila = 0; fila < n; fila++) {
        for (int columna = 0; columna < n; columna++) {
            posxy(4 + columna * 10, 3 + fila * 2);
            cout << C[fila][columna];
        }
    }
    posxy(60, 28);
    system("pause");
    system("pause");
    parcial_3_pagina_2();
}
void programa_75() {
    string texto;
    system("cls");
    system("color 70");
    lectura();
    system("pause");
    parcial_3_pagina_2();
}
void programa_76() {
	system("cls");
	system("color 70");
	portada();
	MENU();
	system("pause");
	parcial_3_pagina_2();
}
