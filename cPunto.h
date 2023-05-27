class cPunto
{
    private:
        int x;
        int y;
    public:
        cPunto();
        cPunto(int nx, int ny);
        cPunto(cPunto &p2);
        void setPuntoX(int);
        void setPuntoY(int);
        int getPuntoX();
        int getPuntoY();
};