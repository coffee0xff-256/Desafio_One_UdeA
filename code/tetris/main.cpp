#include <iostream>
#include <board.h>
#include <pieces.h>
#include <indexation.h>
#include <cstdlib>
#include <ctime>
void imprimir_tablero(unsigned char **tablero,int alto,int ancho)
{ int bytes = ancho / 8;
    for(int i = 0; i < alto; i++){
        for(int j = 0; j < bytes; j++){
            for(int bit = 7; bit >= 0; bit--)
            { if(tablero[i][j] & (1 << bit)) cout << "#"; else cout << "."; }
        }
        cout << endl; }
}
using namespace std;

int main()
{
    srand(time(0));
    bool playing = true;
    int alto = 0, ancho = 0;
    cout << "Welcome to my Tetris" << endl;
    cout << "Please put a number (ancho debe ser multiplo de 8):" << endl;
    cout << "Alto: ";
    cin >> alto;
    cout << "Ancho: ";
    cin >> ancho;

    //aqui creamos nuestro tablero
    unsigned char **tablero_tetris = tablero(alto,ancho);

    while(playing == true){
    //aqui ira la logica de nuestro juego los desplazamientos y todo ese grupo de cosas
    tablero_tetris = spawn(tablero_tetris,ancho);
    imprimir_tablero(tablero_tetris,alto,ancho);
    playing = false;
    }

    // limpio memoria dinamica
    delete[] tablero_tetris;
    cout << "Hello World!" << endl;

    return 0;
}
