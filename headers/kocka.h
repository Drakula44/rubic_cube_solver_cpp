#include "strana.h"

class Kocka
{
    private:
    Strana kocka[6];
    public:
    int id;
    Kocka(Strana a1,Strana a2,Strana a3,Strana a4,Strana a5,Strana a6);
    Kocka(){}
    Strana getStrana(int i) const {return kocka[i];} 
    void setStrana(int i, Strana a){kocka[i]=a;}
    Kocka operator*(double const &obj);
    Kocka operator*(Matrica const &obj);
    Kocka operator+(Matrica const &obj);
    Kocka operator=(const Kocka &obj)
    {
        Kocka tmp;
        tmp.id = obj.id;
        this->id = obj.id;
        for(int i = 0;i < 6;i++)
        {
            this->kocka[i] = obj.kocka[i];
            tmp.kocka[i] = obj.kocka[i];
        }
        return tmp;
    }
    
    void kazaljka_z();
    void suprotno_z();

    void kazaljka_y();
    void suprotno_y();

    void kazaljka_x();
    void suprotno_x();
};