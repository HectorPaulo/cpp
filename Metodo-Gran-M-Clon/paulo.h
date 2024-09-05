#include <iostream>
#include <windows.h>
#include <string>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include <queue>   
#include <iomanip>

/*
									LISTA DE FUNCIONES	
1.float strTofloat(string cadena): convierte una cadena de texto en un número de punto flotante.

2.string floatTostr(float valor): convierte un número de punto flotante en una cadena de texto.

3.float decimal(float valor): devuelve la parte decimal de un número de punto flotante.

4.void marcoxy(int largo, int ancho, int x, int y): dibuja un marco en la pantalla con las dimensiones y ubicación especificadas.

5.void terminarPrograma(): finaliza la ejecución del programa.

6.void centrarStr(string texto, int y): centra un texto en la pantalla en la posición especificada.

7.void color(int x): establece el color del texto en la consola.

8.string intTostr(int n): convierte un número entero en una cadena de texto.

9.int strTostr2(string texto): convierte una cadena de texto en un número entero.

10.string substr(string texto, int npos, int num): extrae una subcadena de texto a partir de una posición y longitud especificadas.

11.void delay(int secs): pausa la ejecución del programa durante un número determinado de segundos.

12.void izquierda(const char *texto, int y): imprime un texto alineado a la izquierda en una posición específica en la pantalla.

13.string intTostr(int n): convierte un número entero en una cadena de texto.

string rPad(string texto,char chr,int n);

14.string lPad(string texto, char chr, int n): agrega caracteres al comienzo de un texto hasta que tenga una longitud específica.

15.string mayusculas(string texto): convierte un texto en mayúsculas.

16.string minusculas(string texto): convierte un texto en minúsculas.

17.void burbujaNumeros(int numeros[], int longitud): ordena un arreglo de números utilizando el algoritmo de ordenación burbuja.

18.void burbujaCadena(string arreglo[], int cantidad): ordena un arreglo de cadenas de texto utilizando el algoritmo de ordenación burbuja.

19.void setConsoleSize(int ancho, int largo): establece el tamaño de la consola en caracteres.

20.void posxy(int x, int y): coloca el cursor de la consola en las coordenadas especificadas.

21.void marcomatriz(int, int, int, int);

22. void T7()

23. void marco (int, int, int, int);
*/
using namespace std;
float strTofloat(string cadena);
string floatTostr(float valor);
float decimal(float valor);
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
string rPad(string texto,char chr,int n);
string lPad(string texto, char chr, int n);
string mayusculas(string texto);
string minusculas(string texto);
void burbujaNumeros (int numeros[], int longitud);
void burbujaCadena(string arreglo[], int cantidad);
void setConsoleSize(int ancho, int largo);
void marcomatriz(int, int, int, int);
void T7();
void marco (int, int, int, int);

void posxy( int x,  int y) {    // Esta funcion sirve para colocar texto en las coordenadas deseadas
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
string rPad(string texto,char chr,int n){
    string result=texto;
    int nlen=texto.length();
    for (int i=0;i<(n-nlen);i++) result+=chr;
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

/*void setConsoleSize(int ancho, int largo) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = {0, 0, ancho-1, largo-1};
    SetConsoleWindowInfo(hConsole, TRUE, &rect);
} */

float  strTofloat(string cadena){
    float valor;
       stringstream paso(cadena);
       paso >> valor;

 

    if (!paso.fail()) {
        return valor;
    } else {
        cout << "La conversión ha fallado." << endl;
        return 0;
    }

 

    
       return valor;
} 

string floatTostr(float valor) {
    char buffer[50];
    sprintf(buffer, "%.6f", valor);
    string cadena(buffer);
    return cadena;
}

int entero(float valor){

 

    int nEntero = static_cast<int>(valor);
    return nEntero;
}

float decimal(float valor){
 
    int nEntero=entero(valor);
    float nDecimal=valor-nEntero;
    return nDecimal;
}

void marcomatriz(int x, int y, int filas , int columnas){
	char c;
	for(int j=y;j<=(filas*2+y); j=j+2){
		for(int i=x; i<=(columnas*10+x); i++){
			
		c=196;
		posxy(i,j);cout<<c;
		}
	}		
	for(int j=y;j<=(filas*2+y); j++){
	for(int i=x; i<=(columnas*10+x); i=i+10){
		
		c=179;
		posxy(i,j);cout<<c;
 }
	}	
	c=218;
	posxy(x,y);cout<<c;
	c=192;
	posxy(x,y+(filas*2));cout<<c;
	c=191;
	posxy(columnas*10+x,y);cout<<c;
	c=217;
	posxy(columnas*10+x, filas*2+y);cout<<c;
	
	
	for(int j=(1);j<(filas); j++){
		for(int i=(1); i<(columnas); i++){
	
			c=194;
			posxy(i*10+x,y );cout<<c;
			
			c=193;
			posxy(i*10+x, filas*2+y );cout<<c;	
		
			c=197;
			posxy(i*10+x, j*2+y );cout<<c;
		
			c=195;
			posxy(x,j*2+y);cout<<c;
			
			c=180;
			posxy(columnas*10+x, j*2+y );cout<<c;
		}		
	}		
}

void T7(){
	
	system("color 70");
	
}

void marco (int x, int y, int col, int ren){
	char c;
	int colum=x+col;
	int rengl=y+ren;
	
	c=201;
	posxy(x, y);cout<<c;
	c=187;
	posxy(colum, y);cout<<c;
	c=200;
	posxy(x,rengl);cout<<c;
	c=188;
	posxy(colum,rengl);cout<<c;
	
	c=205;
	for (int i=x+1; i<colum; i++){
	posxy(i,y);cout<<c;
	posxy(i,rengl);cout<<c;	
	}
	c=186;
	for (int i=y+1; i<rengl; i++){
	posxy(x,i);cout<<c;
	posxy(colum,i);cout<<c;	
	}
}


#ifndef _CONIO2_H_
#define _CONIO2_H_

#include <conio.h>
#ifdef UNICODE
    #include <windows.h>    // we need wchar_t
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Colors which you can use in your application.
 */
typedef enum
{
    BLACK,          /**< black color */
    BLUE,           /**< blue color */
    GREEN,          /**< green color */
    CYAN,           /**< cyan color */
    RED,            /**< red color */
    MAGENTA,        /**< magenta color */
    BROWN,          /**< brown color */
    LIGHTGRAY,      /**< light gray color */
    DARKGRAY,       /**< dark gray color */
    LIGHTBLUE,      /**< light blue color */
    LIGHTGREEN,     /**< light green color */
    LIGHTCYAN,      /**< light cyan color */
    LIGHTRED,       /**< light red color */
    LIGHTMAGENTA,   /**< light magenta color */
    YELLOW,         /**< yellow color */
    WHITE           /**< white color */
} COLORS;

/*@{*/
/**
 * This defines enables you to use all MinGW conio.h functions without
 * underscore.
 */
#define cgets   _cgets
#define cprintf _cprintf
#define cputs   _cputs
#define cscanf  _cscanf

#ifdef UNICODE
    #define cgetws   _cgetws
    #define getwch   _getwch
    #define getwche  _getwche
    #define putwch   _putwch
    #define ungetwch _ungetwch
    #define cputws   _cputws
    #define cwprintf _cwprintf
    #define cwscanf  _cwscanf
#endif
/*@}*/

/**
 * Define alias for _conio_gettext.
 * If you want to use gettext function from some other library
 * (e.g. GNU gettext) you have to define _CONIO_NO_GETTEXT_ so you won't get
 * name conflict.
 */
#ifndef _CONIO_NO_GETTEXT_
  #define gettext _conio_gettext
#endif

#define ScreenClear clrscr

/**
 * @anchor cursortypes
 * @name Cursor types
 * Predefined cursor types. */
/*@{*/
#define _NOCURSOR 0         /**< no cursor */
#define _SOLIDCURSOR 100    /**< cursor filling whole cell */
#define _NORMALCURSOR 20    /**< cursor filling 20 percent of cell height */
/*@}*/

/**
 * Structure holding information about screen.
 * @see gettextinfo
 * @see inittextinfo
 */
struct text_info {
    unsigned char curx;          /**< cursor coordinate x */
    unsigned char cury;          /**< cursor coordinate y */
    unsigned short attribute;    /**< current text attribute */
    unsigned short normattr;     /**< original value of text attribute after
                                      start of the application. If you don't
                                      called the <TT>inittextinfo</TT> on the
                                      beginning of the application, this always
                                      will be black background and light gray
                                      foreground */
    unsigned char screenwidth;   /**< screen width */
    unsigned char screenheight;  /**< screen height */
};

/**
 * Structure used by gettext/puttext.
 * @see _conio_gettext
 * @see puttext
 */
struct char_info {
#ifdef UNICODE
    wchar_t letter;        /**< character value */
#else
    char letter;           /**< character value */
#endif
    unsigned short attr;   /**< attribute value */
};

/**
 * Returns information of the screen.
 * @see text_info
 */
void gettextinfo (struct text_info * info);

/**
 * Call this if you need real value of normattr attribute in the text_info
 * structure.
 * @see text_info
 */
void inittextinfo (void);

/**
 * Clears rest of the line from cursor position to the end of line without
 * moving the cursor.
 */
void clreol (void);

/**
 * Clears whole screen.
 */
void clrscr (void);

/**
 * Delete the current line (line on which is cursor) and then moves all lines
 * below one line up. Lines below the line are moved one line up.
 */
void delline (void);

/**
 * Insert blank line at the cursor position.
 * Original content of the line and content of lines below moves one line down.
 * The last line is deleted.
 */
void insline (void);

/**
 * Gets text from the screen. If you haven't defined <TT>_CONIO_NO_GETTEXT_</TT>
 * prior to including <TT>conio2.h</TT> you can use this function also under
 * the <TT>gettext</TT> name.
 * @see char_info
 * @see puttext
 * @param left Left coordinate of the rectangle, inclusive, starting from 1.
 * @param top Top coordinate of the rectangle, inclusive, starting from 1.
 * @param right Right coordinate of the rectangle, inclusive, starting from 1.
 * @param bottom Bottom coordinate of the rectangle, inclusive, starting from 1.
 * @param buf You have to pass buffer of size
 * <TT>(right - left + 1) * (bottom - top + 1) * sizeof(char_info)</TT>.
 */
void _conio_gettext (int left, int top, int right, int bottom,
                     struct char_info * buf);

/**
 * Puts text back to the screen.
 * @see char_info
 * @see _conio_gettext
 * @param left Left coordinate of the rectangle, inclusive, starting from 1.
 * @param top Top coordinate of the rectangle, inclusive, starting from 1.
 * @param right Right coordinate of the rectangle, inclusive, starting from 1.
 * @param bottom Bottom coordinate of the rectangle, inclusive, starting from 1.
 * @param buf You have to pass buffer of size
 * <TT>(right - left + 1) * (bottom - top + 1) * sizeof(char_info)</TT>.
 */
void puttext (int left, int top, int right, int bottom, struct char_info * buf);

/**
 * Copies text.
 * @param left Left coordinate of the rectangle, inclusive, starting from 1.
 * @param top Top coordinate of the rectangle, inclusive, starting from 1.
 * @param right Right coordinate of the rectangle, inclusive, starting from 1.
 * @param bottom Bottom coordinate of the rectangle, inclusive, starting from 1.
 * @param destleft Left coordinate of the destination rectangle.
 * @param desttop Top coordinate of the destination rectangle.
 */
void movetext (int left, int top, int right, int bottom, int destleft,
              int desttop);

/**
 * Moves cursor to the specified position.
 * @param x horizontal position
 * @param y vertical position
 */
void gotoxy(int x, int y);

/**
 * Puts string at the specified position.
 * @param x horizontal position
 * @param y vertical position
 * @param str string
 */
void cputsxy (int x, int y, char * str);

/**
 * Puts char at the specified position.
 * @param x horizontal position
 * @param y vertical position
 * @param ch char
 */
void putchxy (int x, int y, char ch);

/**
 * Sets the cursor type.
 * @see @ref cursortypes
 * @param type cursor type, under Win32 it is height of the cursor in percents
 */
void _setcursortype (int type);

/**
 * Sets attribute of text.
 * @param _attr new text attribute
 */
void textattr (int _attr);

/**
 * Sets text attribute back to value it had after program start.
 * It uses text_info's normattr value.
 * @see text_info
 */
void normvideo (void);

/**
 * Sets text background color.
 * @see COLORS
 * @param color new background color
 */
void textbackground (int color);

/**
 * Sets text foreground color.
 * @see COLORS
 * @param color new foreground color
 */
void textcolor (int color);

/**
 * Reads the cursor X position.
 * @returns cursor X position
 */
int wherex (void);

/**
 * Reads the cursor Y position.
 * @returns cursor Y position
 */
int wherey (void);

/**
 * Reads password. This function behaves like cgets.
 *
 * @see cgets
 * @param prompt prompt which will be displayed to user
 * @param str string for the password. <TT>str[0]</TT> have to contain
 * length of the <TT>str</TT> - 3
 * @returns <TT>&str[2]</TT>, the password will be stored in <TT>str</TT>
 * beginning at <TT>str[2]</TT>, in <TT>str[1]</TT> will be length of the
 * string without <TT>\\0</TT>, at <TT>str[2 + str[1]]</TT> will be \\0.
 */
char * getpass (const char * prompt, char * str);

/**
 * Makes foreground colors light.
 * If the current foreground color is less than <TT>DARKGRAY</TT> adds
 * 8 to the its value making dark colors light.
 * @see COLORS
 * @see lowvideo
 */
void highvideo (void);

/**
 * Makes foreground colors dark.
 * If the current foreground color is higher than <TT>LIGHTGRAY</TT> substracts
 * 8 from its value making light colors dark.
 * @see COLORS
 * @see highvideo
 */
void lowvideo (void);

/*@{*/
/** Link with libmsvcr70.a or libmsvcr70d.a or libmsvcr71.a or libmsvcr71d.a
 *  if you want any of these functions. */
#ifdef UNICODE
_CRTIMP wchar_t * __cdecl         _cgetws(wchar_t *);
_CRTIMP unsigned short __cdecl    _getwch(void);
_CRTIMP unsigned short __cdecl    _getwche(void);
_CRTIMP unsigned short __cdecl    _putwch(wchar_t);
_CRTIMP unsigned short __cdecl    _ungetwch(unsigned short);
_CRTIMP int __cdecl               _cputws(const wchar_t *);
_CRTIMP int __cdecl               _cwprintf(const wchar_t *, ...);
_CRTIMP int __cdecl               _cwscanf(const wchar_t *, ...);
#endif
/*@}*/

#ifdef __cplusplus
}
#endif

#endif /* _CONIO2_H_ */
