#include "matrica.h"
#include <iostream>

using namespace std;

class Strana
{
    private:
    Matrica boja;
    public:
    Matrica str[4];
    Strana(Matrica a1,Matrica a2,Matrica a3,Matrica a4,Matrica boja);
    Strana(){;}
    Matrica getMatrica(int i)
     {
        //cout << "############"<<endl;
        //str[i].ispisi();
        //cout << "############"<<endl;
        return str[i];
    }
    Matrica getBoja() const {return boja;}
    void setBoja(Matrica boja){this->boja = boja;}
    void setMatrica(int i, Matrica a)
    {
        //a.ispisi();
        str[i] = a;
        //str[i].ispisi();    
    }
    Strana operator*(double const &obj);
    Strana operator*(Matrica const &obj);
    Strana operator+(Matrica const &obj);
    //Strana operator=(const Strana &obj);
};