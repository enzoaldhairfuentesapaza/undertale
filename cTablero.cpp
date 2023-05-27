#include <iostream>
#include "cTablero.h"
using namespace std;

cTablero::cTablero()
{
    alto = 30;
    ancho = 150;
    for (int i = 0; i < alto; i++)
    {
        for (int j=0; j < ancho; j++)
        {
            if((i==0 && j==0))
            {
                margen[i][j]=201;
            }
            else if(i==alto-1 && j==ancho-1)
            {
                margen[i][j]=188;
            }
            else if((i==alto-1 && j==0))
            {
                margen[i][j]=200;
            }
            else if((i==0 && j==ancho-1))
            {
                margen[i][j]=187;
            }
            else if(j==0 || j==ancho-1)
            {
                margen[i][j]=186;
            }
            else if(i==0 || i==alto-1)
            {
                margen[i][j]=205;
            }
            else
            {
                margen[i][j]=' ';
            }
        }
    }
}
void cTablero::imprimir()
{
    for (int i =0; i < alto; i++)
    {
        for (int j=0; j < ancho; j++)
        {
            cout << margen[i][j];
        }
        cout << endl;
    }
}
