#include "matrica.h"

class Strana
{
    private:
    Matrica str[4];
    Matrica boja;
    public:
    Strana(Matrica a1,Matrica a2,Matrica a3,Matrica a4,Matrica boja);
    Strana(){;}
    Matrica getMatrica(int i) const {return str[i];}
    Matrica getBoja() const {return boja;}
    void setBoja(Matrica boja){this->boja = boja;}
    void setMatrica(int i, Matrica a){str[i] = a;}
    Strana operator*(double const &obj);
    Strana operator*(Matrica const &obj);
    Strana operator+(Matrica const &obj);
    Strana operator=(const Strana &obj)
    {
        for(int i = 0;i < 4;i++)
                str[i] = obj.str[i];
    }
};