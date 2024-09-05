
#include <iostream>
#include <windows.h>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

void posxy(int x, int y);
void marcoxy(int largo,int ancho,int x,int y);
void terminarPrograma();
void centrarStr(string texto, int y);
void color(int x);
string intTostr (int n);
int strTostr2 (string texto);
string substr (string texto,int npos, int num);
void delay(int secs);
void izquierda(const char *texto, int y);
string intTostr(int n);
string lPad(string texto, char chr, int n);
string mayusculas(string texto);
string minusculas(string texto);
void burbujaNumeros (int numeros[], int longitud);
void burbujaCadena(string arreglo[], int cantidad);
void setConsoleSize(int ancho, int largo);





void posxy(int x, int y) {    // Esta funcion sirve para colocar texto en las coordenadas deseadas
	COORD coordenada;  //definimos la palabra a usar como variable para las coordenadas
	coordenada.X=x; //definimos la coordenada x usando la variable que definimos agregando .X para la coordenada x
	coordenada.Y=y; //definimos la coordenada y usando la variable que definimos agregando .Y para la coordenada y
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE),coordenada); //esto es lo que hará que el texto se imprima en las coordendas deseadas 
	}
	
void marcoxy(int largo, int ancho, int x, int y) {
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
}



void terminarPrograma(){  //Esta funcion sirve para terminar el programa una vez llamada la funcion


    cout << "Terminando programa..." << endl;
    exit(0); // La función exit() con el argumento 0 indica que el programa termina correctamente
}


void centrarStr(string texto, int y) {
    // Obtener la longitud del texto a centrar
    int nlen = texto.length();
    // Calcular la posición "x" para centrar el texto en la pantalla
    int x = 59 - (nlen / 2);
    // Mover el cursor a la posición "x" y "y" especificada
    posxy(x, y);
    // Imprimir el texto centrado
    cout << texto;
}


void color(int x) {
    // Llamar a la función "SetConsoleTextAttribute()" para establecer el color de texto en la consola
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
    
    
    // La función "color()" se utiliza para establecer el color del texto en la consola.
    //El parámetro "x" es el código de color que se va a establecer. 
    //El primer parámetro de la función "SetConsoleTextAttribute()" es "GetStdHandle(STD_OUTPUT_HANDLE)", que obtiene el identificador de la consola actual.
    //El segundo parámetro es "x", que es el código de color que se va a establecer en la consola.
}

/* system("mode con: cols=85 lines=28") //No se incluye en la libreria, pero sirve para poner un limite en los margenes de la consola 
*/ 



int strTostr2 (string texto) {
    // Obtener un puntero al contenido de la cadena de texto
    const char *valor = texto.c_str();
    // Convertir el contenido de la cadena a un número entero utilizando la función "atoi()"
    int result = atoi(valor);
    // Devolver el número entero resultante
    return result;
}


string substr(string texto, int npos, int num) {
    // Crear una cadena vacía que se utilizará para almacenar la subcadena resultante
    string result = "";
    // Obtener la longitud de la cadena de texto
    int nlen = texto.length();
    // Obtener un puntero al contenido de la cadena de texto
    const char* cad = texto.c_str();
    // Iterar a través de los caracteres en la subcadena especificada
    for (int i = npos - 1; i < (npos - 1 + num); i++) {
        // Si la posición actual está dentro de los límites de la cadena de texto,
        // agregar el carácter correspondiente a la subcadena resultante
        if (i < nlen) {
            result += cad[i];
        }
    }
    // Devolver la subcadena resultante
    return result;
}


void delay(int secs){ // se utiliza para pausar la ejecución del programa durante un número determinado de segundos
    // Calcula el momento en el que deberá finalizar el delay
    int endTime = time(NULL) + secs;
    // Mientras el tiempo actual no sea igual al tiempo de finalización, continúa esperando
    while (time(NULL) != endTime);
}

void izquierda(const char *texto, int y){ //se utiliza para imprimir texto en una posición específica en la pantalla, alineado a la izquierda.
    // Calcula la longitud de la cadena de texto
    int nlen = strlen(texto);
    // Calcula la posición en x donde debe empezar a escribirse el texto
    int xPos = 79 - nlen;
    // Llama a la función posxy() para colocar el cursor en la posición deseada
    posxy(xPos, y);
    // Escribe el texto en la posición calculada
    cout << texto;
}

string intTostr(int n){ // se utiliza para convertir un número entero en un string. Los pasos que sigue la función son:
    // Crea un objeto ostringstream llamado "stream"
    ostringstream stream;
    // Inserta el número entero "n" en el objeto "stream"
    stream << n;
    // Convierte el objeto "stream" en un string y lo guarda en la variable "cadena"
    string cadena = stream.str();
    // Retorna el string resultante
    return cadena;
    
}

string lPad(string texto, char chr, int n){ //se utiliza para agregar caracteres al comienzo de un string hasta que tenga una longitud específica. Los pasos que sigue la función son:
    string result;
    int nlen=texto.length();
    // Agrega caracteres "chr" al string "result" hasta que su longitud sea igual a "n - nlen"
    for (int i=0; i<(n-nlen); i++)
        result += chr;
    // Agrega el string "texto" al final de "result"
    result += texto;
    // Retorna el string resultante
    return result;
}

string mayusculas(string texto){

    
      int nlen = texto.length();
    // Recorre cada carácter del string y lo convierte a mayúsculas
    for(int i = 0; i < nlen; i++){
        texto[i] = toupper(texto[i]);
    }
    // Retorna el string convertido a mayúsculas
    return texto;
}

string minusculas(string texto){
    // Se obtiene la longitud del texto
    int nlen = texto.length();
    
    // Se recorre cada caracter del texto
    for (int i = 0; i < nlen; i++){
        // Se convierte el caracter actual a minúscula
        texto[i] = tolower(texto[i]);
    }
    
    // Se retorna el texto en minúsculas
    return texto;
}


void burbujaNumeros(int numeros[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        for (int j = 0; j < longitud - i - 1; j++) { 
            if (numeros[j] > numeros[j + 1]) {
                int aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
}


void burbujaCadena(string arreglo[], int cantidad) {
  for(int i = 0; i < cantidad-1; i++) {
    for(int j = 0; j < cantidad-i-1; j++) {
      if(arreglo[j] > arreglo[j+1]) {
        swap(arreglo[j], arreglo[j+1]);
      }
    }
  }
}


void setConsoleSize(int ancho, int largo) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = {0, 0, ancho-1, largo-1};
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
}







	
//Agregar a la libreria una funcion que se llame mayusuculas, y la otra minuscula


