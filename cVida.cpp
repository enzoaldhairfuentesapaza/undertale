#include <iostream>
#include "cVida.h"
using namespace std;
cVida::cVida()
{
    hit=false;
    alto=7;
    ancho=7;
    cord.setPuntoX(1);
    cord.setPuntoY(1);
}
cVida::cVida(cPunto ubicacion)
{
    hit=false;
    alto=7;
    ancho=7;
    cord.setPuntoX(ubicacion.getPuntoX());
    cord.setPuntoY(ubicacion.getPuntoY());
}
void cVida::imprimir()
{
    for (int i =0; i < alto; i++)
    {
        for (int j=0; j < ancho; j++)
        {
            cout << img[i][j];
        }
        cout << endl;
    }
}