#include <iostream>
#include <curses.h>
using namespace std;

int main() {
    // --> Inicializar curses
    initscr();
    noecho();
    cbreak();

    int numero;
    mvprintw(0, 0, "Digite un número: ");
    refresh();
    scanw("%d", &numero);

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        mvprintw(2, 0, "El número %d es par.", numero);
        mvprintw(3, 0, "Posición: %p", &numero);
    } else {
        mvprintw(2, 0, "El número %d es impar.", numero);
        mvprintw(3, 0, "Posición: %p", &numero);
    }

    // Esperar a que se presione una tecla
    mvprintw(5, 0, "Presione una tecla para terminar...");
    refresh();
    getch();

    // Limpiar la pantalla y finalizar curses
    endwin();

    return 0;
}