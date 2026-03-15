#ifndef CLEAR_LINE_H
#define CLEAR_LINE_H


void clear_lines(unsigned char **tablero,int alto,int ancho)
{
    int bytes = ancho/8;
    for(int i = 0; i < alto; i++)
    {
    bool llena = true;
    for(int j = 0; j < bytes; j++)
        {
        if(tablero[i][j] != 255)
            {
                llena = false;
                break;
            }
        }

        if(llena)
        {
            for(int k = i; k > 0; k--)
            {
                for(int j = 0; j < bytes; j++)
                {
                    tablero[k][j] = tablero[k-1][j];
                }
            }
            for(int j = 0; j < bytes; j++)
            {
                tablero[0][j] = 0;
            }
        }
    }
}


#endif // CLEAR_LINE_H
