#include <iostream>
#include "cPunto.h"
using namespace std;
cPunto::cPunto()
{
    x = 1;
    y = 1;
}
cPunto::cPunto(int nx, int ny)
{
    x= nx;
    y= ny;
}
cPunto::cPunto(cPunto &p2)
{
    x= p2.x;
    y= p2.y;
}
void cPunto::setPuntoX(int xn)
{
    x = xn;
}
void cPunto::setPuntoY(int yn)
{
    y = yn;
}
int cPunto::getPuntoX()
{
    return x;
}
int cPunto::getPuntoY()
{
    return y;
}
