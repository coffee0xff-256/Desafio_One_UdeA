#ifndef GAME_OVER_H
#define GAME_OVER_H
    bool puede_spawnear(unsigned char **tablero,unsigned char (*pieza)[4],int x,int y)
{for(int i = 0; i < 4; i++)
    {for(int j = 0; j < 4; j++)
        {if(pieza[i][j] == 1)
            {int tablero_x = x + j;
                int tablero_y = y + i;
                int byte = tablero_x / 8;
                int bit  = tablero_x % 8;
                if(tablero[tablero_y][byte] & (1 << (7-bit)))
                {
                    return false;
                }
            }
        }
    }
    return true;
}


#endif // GAME_OVER_H
