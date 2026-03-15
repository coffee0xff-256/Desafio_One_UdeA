#include <iostream>
#include <board.h>
#include <pieces.h>
using namespace std;

int main()
{
    int alto = 0, ancho = 0;
    cout << "Welcome to my Tetris" << endl;
    cout << "Please put a number (ancho debe ser multiplo de 8):" << endl;
    cout << "Alto: ";
    cin >> alto;
    cout << "Ancho: ";
    cin >> ancho;

    //aqui creamos nuestro tablero
    unsigned char **tablero_tetris = tablero(alto,ancho);

    //aqui ira la logica de nuestro juego

    // limpio memoria dinamica
    delete[] tablero_tetris;
    cout << "Hello World!" << endl;

    return 0;
}
