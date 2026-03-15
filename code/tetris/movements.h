#ifndef MOVEMENTS_H
#define MOVEMENTS_H
#include
void draw_tetrimonio(unsigned char **tablero, unsigned char (*pieza)[4], int x, int y){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(pieza[i][j] == 1){
                int fila = y + i;
                int columna = x + j;
                int byte = columna / 8;
                int bit = columna % 8;
                tablero[fila][byte] |= (1 << (7-bit)); }
        }
    }
}





#endif // MOVEMENTS_H
