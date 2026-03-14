#include <iostream>
#include <board.h>
using namespace std;

int main()
{


    int alto = 8, ancho = 32;
    unsigned char **prueba = tablero(alto,ancho);
    // creo mis coordenadas
    int y = 0;
    int x = ((ancho/8)/2)-1;

    delete prueba;
    cout << "Hello World!" << endl;

    return 0;
}
