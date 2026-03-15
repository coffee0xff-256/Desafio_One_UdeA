#ifndef INDEXATION_H
#define INDEXATION_H
#include <iostream>
#include <board.h>
#include <pieces.h>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned char** spawn(unsigned char **tablero_tetris,int ancho)
{ int x = (ancho/2) - 2; int y = 0;
    unsigned char (*pieza)[4] = pieza_random();
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++){
            if(pieza[i][j] == 1){
                int fila = y + i;
                int columna = x + j;
                int byte = columna / 8;
                int bit = columna % 8;
                tablero_tetris[fila][byte] |= (1 << (7-bit)); }
        }
    }
    return tablero_tetris;
}

#endif // INDEXATION_H
