#ifndef PIECES_H
#define PIECES_H
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// tetrimonio I
unsigned char I[4][4] = {
    {0,0,0,0},
    {1,1,1,1},
    {0,0,0,0},
    {0,0,0,0}
};

// tetrimonio O
unsigned char O[4][4] = {
    {1,1,0,0},
    {1,1,0,0},
    {0,0,0,0},
    {0,0,0,0}
};

// tetrimonio T
unsigned char T[4][4] = {
    {0,0,0,0},
    {1,1,1,0},
    {0,1,0,0},
    {0,0,0,0}
};

// tetrimonio S
unsigned char S[4][4] = {
    {0,0,0,0},
    {0,1,1,0},
    {1,1,0,0},
    {0,0,0,0}
};

// tetrimonio Z
unsigned char Z[4][4] = {
    {0,0,0,0},
    {1,1,0,0},
    {0,1,1,0},
    {0,0,0,0}
};

// tetrimonio J
unsigned char J[4][4] = {
    {0,1,0,0},
    {0,1,0,0},
    {1,1,0,0},
    {0,0,0,0}
};

// tetrimonio L
unsigned char L[4][4] = {
    {0,1,0,0},
    {0,1,0,0},
    {0,1,1,0},
    {0,0,0,0}
};

unsigned char (*pieza_random())[4]
{
    int pieza = rand() % 7;

    if(pieza == 0) return I;
    if(pieza == 1) return O;
    if(pieza == 2) return T;
    if(pieza == 3) return S;
    if(pieza == 4) return Z;
    if(pieza == 5) return J;
    return L;
}

#endif
