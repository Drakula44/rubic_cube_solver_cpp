#include "kocka.h"
class RubikovaKocka
{
private:
    Kocka rubikova[3][3][3];
public:
    RubikovaKocka();

    void setKocka(int i,int j,int k, Kocka a){rubikova[i][j][k] = a;}
    Kocka getKocka(int i,int j,int k){return rubikova[i][j][k];}
    void kazaljka_pz();
    void kazaljka_mz();
    void suprotno_pz();
    void suprotno_mz();

    void kazaljka_py();
    void kazaljka_my();
    void suprotno_py();
    void suprotno_my();

    void kazaljka_px();
    void kazaljka_mx();
    void suprotno_px();
    void suprotno_mx();
    
};


