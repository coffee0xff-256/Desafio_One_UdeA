#ifndef PIECES_H
#define PIECES_H
#include <iostream>
using namespace std;

// creare mis tetrimonios

// tetrimonio I o linea larga

unsigned char I[4][4] = {
    {0,0,0,0},
    {1,1,1,1},
    {0,0,0,0},
    {0,0,0,0}
};

// tetrimonio cuadrado O

unsigned char O[2][2] = {
    {1,1},
    {1,1}
};

// tetrimonio T

unsigned char T[3][3] = {
    {0,0,0},
    {1,1,1},
    {0,1,0}
};

// tetrimonio en forma de S

unsigned char S[3][3]={
    {0,0,0},
    {0,1,1},
    {1,1,0}
};

// tetrimonio en forma de Z

unsigned char Z[3][3] = {
    {0,0,0},
    {1,1,0},
    {0,1,1}
};

// tetrimonio en forma de J

unsigned char J[3][3] = {
    {0,1,0},
    {0,1,0},
    {1,1,0}
};

// tetrimonio en forma de L

unsigned char L[3][3] = {
    {0,1,0},
    {0,1,0},
    {0,1,1}
};
#endif // PIECES_H

