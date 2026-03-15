#ifndef ROTATION_H
#define ROTATION_H
#include <board.h>
#include <pieces.h>

void rotar(unsigned char (*pieza)[4])
{ unsigned char temp[4][4];
for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
    { temp[j][3-i] = pieza[i][j];
        }
} for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        pieza[i][j] = temp[i][j]; }
}
}

#endif // ROTATION_H
