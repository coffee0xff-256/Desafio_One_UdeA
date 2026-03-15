#ifndef INDEXATION_H
#define INDEXATION_H
#include <iostream>
#include <board.h>
#include <pieces.h>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned char** spawn(unsigned char **prueba,int ancho){
    int x= (ancho/2)-1;
    int y = 0;
    int byte = x/ 8; // el byte que ocupa
    int bit = x % 8;  // el bit que ocupa tambien
    prueba[y][byte] |= (1 << (7 - bit));
    return prueba;
}

#endif // INDEXATION_H
