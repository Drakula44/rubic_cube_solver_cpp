#include "../headers/strana.h"

Strana::Strana(Matrica a1,Matrica a2,Matrica a3,Matrica a4, Matrica boja)
{
    str[0] = a1;
    str[1] = a2;
    str[2] = a3;
    str[3] = a4;
    this->boja = boja;
}

Strana Strana::operator*(double const &obj)
{
    Strana tmp;
    for(int i = 0;i < 4;i++)
    {
        tmp.setMatrica(i,str[i] * obj);
    }
    tmp.setBoja(this->getBoja());
    return tmp;
}

Strana Strana::operator*(Matrica const &obj)
{
    Strana tmp;
    for(int i = 0;i < 4;i++)
    {
        tmp.setMatrica(i,str[i] * obj);
        
    }
    tmp.setBoja(this->getBoja());
    return tmp;
}

Strana Strana::operator+(Matrica const &obj)
{
    Strana tmp;
    for(int i = 0;i < 4;i++)
    {
        tmp.setMatrica(i,str[i] + obj);
    }
    tmp.setBoja(this->getBoja());
    return tmp;
}


