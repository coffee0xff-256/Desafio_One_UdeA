#ifndef PIECES_H
#define PIECES_H
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
unsigned char pieza_random(){
    srand(0);

    int opcion = rand() % 7;

    switch (opcion) {
    case 0:
        unsigned char I[4][4] = {
            {0,0,0,0},
            {1,1,1,1},
            {0,0,0,0},
            {0,0,0,0}
        };
        break;
    case 1:
        unsigned char O[2][2] = {
            {1,1},
            {1,1}
        };
        break;
    case 2:
        unsigned char T[3][3] = {
            {0,0,0},
            {1,1,1},
            {0,1,0}
        };

        break;
    case 3:
        unsigned char S[3][3]={
            {0,0,0},
            {0,1,1},
            {1,1,0}
        };

        break;
    case 4:
        unsigned char Z[3][3] = {
            {0,0,0},
            {1,1,0},
            {0,1,1}
        };
        break;
    case 5:
        unsigned char J[3][3] = {
            {0,1,0},
            {0,1,0},
            {1,1,0}
        };

        break;
    case 6:
        unsigned char L[3][3] = {
            {0,1,0},
            {0,1,0},
            {0,1,1}
        };

        break;

    }




}
#endif // PIECES_H

