#include "cPunto.h"
class cVida
{
    private:
        bool hit;
        int alto;
        int ancho;
        char img[7][7];
        cPunto cord;
    public:
        cVida();
        cVida(cPunto ubicacion);
        void imprimir();
};