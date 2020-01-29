#include "../headers/kocka.h"

Kocka::Kocka(Strana a1, Strana a2, Strana a3, Strana a4, Strana a5, Strana a6)
{
    kocka[0] = a1;
    kocka[1] = a2;
    kocka[2] = a3;
    kocka[3] = a4;
    kocka[4] = a5;
    kocka[5] = a6;
}

Kocka Kocka::operator*(Matrica const &obj)
{
    Kocka tmp;
    for(int i = 0; i < 6; i++)
    {
        tmp.setStrana(i,kocka[i] * obj);
    }
    return tmp;
}


Kocka Kocka::operator*(double const &obj)
{
    Kocka tmp;
    for(int i = 0; i < 6; i++)
    {
        tmp.setStrana(i,kocka[i] * obj);
    }
    return tmp;
}



Kocka Kocka::operator+(Matrica const &obj)
{
    Kocka tmp;
    for(int i = 0; i < 6; i++)
    {
        tmp.setStrana(i,kocka[i] + obj);
    }
    return tmp;
}

void Kocka::kazaljka_z()
{
    Strana tmp;
	tmp=kocka[1];
	kocka[1]=kocka[2];
	kocka[2]=kocka[3];
	kocka[3]=kocka[4];
	kocka[4]=tmp;
}
void Kocka::suprotno_z()
{
    Strana tmp;
	tmp=kocka[1];
	kocka[1]=kocka[4];
	kocka[4]=kocka[3];
	kocka[3]=kocka[2];
	kocka[2]=tmp;
}
void Kocka::kazaljka_y()
{
    Strana tmp;
	tmp=kocka[2];
	kocka[2]=kocka[0];
	kocka[0]=kocka[4];
	kocka[4]=kocka[5];
	kocka[5]=tmp;
}
void Kocka::suprotno_y()
{
    Strana tmp;
	tmp=kocka[2];
	kocka[2]=kocka[5];
	kocka[5]=kocka[4];
	kocka[4]=kocka[0];
	kocka[0]=tmp;
}
void Kocka::kazaljka_x()
{
    Strana tmp;
	tmp=kocka[1];
	kocka[1]=kocka[5];
	kocka[5]=kocka[3];
	kocka[3]=kocka[0];
	kocka[0]=tmp;
}
void Kocka::suprotno_x()
{
    Strana tmp;
	tmp=kocka[1];
	kocka[1]=kocka[0];
	kocka[0]=kocka[3];
	kocka[3]=kocka[5];
	kocka[5]=tmp;
}



