#include <iostream>
#ifndef BOARD_H
#define BOARD_H
using namespace std;
// nuestro tablerito espera 2 variables el alto y el ancho

unsigned char **tablero(int alto, int bytes_por_filas){
    bytes_por_filas /=8; // pongo mis bytes que necesito
  unsigned char **matriz = new unsigned char*[alto];  // reservo filas puntero que apunta en memoria dinamica a filas
    for(int i = 0; i < alto; i++)
    {
        matriz[i] = new unsigned char[bytes_por_filas]; // reservo columnas puntero que apunta a columnas
        for(int j = 0; j < bytes_por_filas; j++)
        {
            matriz[i][j] = 0; // pongo todo en 0's
        }
    }
     /*//Imprimir tablero
    for(int i = 0; i < alto; i++)
    {
        for(int j = 0; j < bytes_por_filas; j++)
        {
            for(int bit = 7; bit >= 0; bit--)
            {
                if(matriz[i][j] & (1 << bit))
                    cout << "#";
                else
                    cout << ".";
            }
        }
        cout << endl;
    }*/

    return matriz;
}

#endif // BOARD_H
