#include <iostream>
#include <board.h>

using namespace std;

int main()
{
    int alto = 8, ancho = 32;
    unsigned char **prueba = tablero(alto,ancho);
    delete prueba;
    cout << "Hello World!" << endl;
    return 0;
}
