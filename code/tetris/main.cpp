#include <iostream>
#include <board.h>
#include <pieces.h>
#include <indexation.h>
#include <cstdlib>
#include <ctime>
#include <movements.h>
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

    // un errorcito mio, las coordenadas tambien deben de estar fuera de la funcion que cree
    int x = (ancho/2)-1;
    int y = 0;
    //opcines para los movimientos
    char movimiento  = 0;
    unsigned char (*pieza)[4] = pieza_random();
    tablero_tetris = spawn(tablero_tetris,ancho);
    imprimir_tablero(tablero_tetris,alto,ancho);
    draw_tetrimonio(tablero_tetris,pieza,x,y);

    while(playing == true){
    //aqui ira la logica de nuestro juego los desplazamientos y todo ese grupo de cosas


     cin>>movimiento;
     if(movimiento == 68 || movimiento == 100){
         erase_piece(tablero_tetris,pieza,x,y);
         x++;
         draw_tetrimonio(tablero_tetris,pieza,x,y);
        imprimir_tablero(tablero_tetris,alto,ancho);
     }
     else if(movimiento == 73 || movimiento == 105){
         erase_piece(tablero_tetris,pieza,x,y);
         x--;
         draw_tetrimonio(tablero_tetris,pieza,x,y);
         imprimir_tablero(tablero_tetris,alto,ancho);
     }
    }

    // limpio memoria dinamica
    delete[] tablero_tetris;
    cout << "Hello World!" << endl;

    return 0;
}
