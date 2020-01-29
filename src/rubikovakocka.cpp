#include "../headers/rubikovakocka.h"
#include <iostream>
using namespace std;
Kocka RubikovaKocka::kocka[3][3][3];
void RubikovaKocka::suprotno_pz()
{
    Kocka tmp; 
   
    tmp=RubikovaKocka::kocka[0][2][2];
    RubikovaKocka::kocka[0][2][2]=RubikovaKocka::kocka[0][0][2];
    RubikovaKocka::kocka[0][0][2]=RubikovaKocka::kocka[2][0][2];
    RubikovaKocka::kocka[2][0][2]=RubikovaKocka::kocka[2][2][2];
    RubikovaKocka::kocka[2][2][2]=tmp;
    tmp=RubikovaKocka::kocka[1][2][2];
    RubikovaKocka::kocka[1][2][2]=RubikovaKocka::kocka[0][1][2];
    RubikovaKocka::kocka[0][1][2]=RubikovaKocka::kocka[1][0][2];
    RubikovaKocka::kocka[1][0][2]=RubikovaKocka::kocka[2][1][2];
    RubikovaKocka::kocka[2][1][2]=tmp;
}

void RubikovaKocka::suprotno_mz()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][2][0];
    RubikovaKocka::kocka[0][2][0]=RubikovaKocka::kocka[0][0][0];
    RubikovaKocka::kocka[0][0][0]=RubikovaKocka::kocka[2][0][0];
    RubikovaKocka::kocka[2][0][0]=RubikovaKocka::kocka[2][2][0];
    RubikovaKocka::kocka[2][2][0]=tmp;
    tmp=RubikovaKocka::kocka[1][2][0];
    RubikovaKocka::kocka[1][2][0]=RubikovaKocka::kocka[0][1][0];
    RubikovaKocka::kocka[0][1][0]=RubikovaKocka::kocka[1][0][0];
    RubikovaKocka::kocka[1][0][0]=RubikovaKocka::kocka[2][1][0];
    RubikovaKocka::kocka[2][1][0]=tmp;
}

void RubikovaKocka::kazaljka_pz()
{
    Kocka tmp;
     cout << "?????" <<endl;
    cout << tmp.id << endl;
    cout << "?????" <<endl;
    tmp=RubikovaKocka::kocka[0][2][2];
    RubikovaKocka::kocka[0][2][2]=RubikovaKocka::kocka[2][2][2];
    RubikovaKocka::kocka[2][2][2]=RubikovaKocka::kocka[2][0][2];
    RubikovaKocka::kocka[2][0][2]=RubikovaKocka::kocka[0][0][2];
    RubikovaKocka::kocka[0][0][2]=tmp;
    tmp=RubikovaKocka::kocka[1][2][2];
    RubikovaKocka::kocka[1][2][2]=RubikovaKocka::kocka[2][1][2];
    RubikovaKocka::kocka[2][1][2]=RubikovaKocka::kocka[1][0][2];
    RubikovaKocka::kocka[1][0][2]=RubikovaKocka::kocka[0][1][2];
    RubikovaKocka::kocka[0][1][2]=tmp;
}

void RubikovaKocka::kazaljka_mz()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][2][0];
    RubikovaKocka::kocka[0][2][0]=RubikovaKocka::kocka[2][2][0];
    RubikovaKocka::kocka[2][2][0]=RubikovaKocka::kocka[2][0][0];
    RubikovaKocka::kocka[2][0][0]=RubikovaKocka::kocka[0][0][0];
    RubikovaKocka::kocka[0][0][0]=tmp;
    tmp=RubikovaKocka::kocka[1][2][0];
    RubikovaKocka::kocka[1][2][0]=RubikovaKocka::kocka[2][1][0];
    RubikovaKocka::kocka[2][1][0]=RubikovaKocka::kocka[1][0][0];
    RubikovaKocka::kocka[1][0][0]=RubikovaKocka::kocka[0][1][0];
    RubikovaKocka::kocka[0][1][0]=tmp;
}

void RubikovaKocka::kazaljka_py()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][2][0];
    RubikovaKocka::kocka[0][2][0]=RubikovaKocka::kocka[2][2][0];
    RubikovaKocka::kocka[2][2][0]=RubikovaKocka::kocka[2][2][2];
    RubikovaKocka::kocka[2][2][2]=RubikovaKocka::kocka[0][2][2];
    RubikovaKocka::kocka[0][2][2]=tmp;
    tmp=RubikovaKocka::kocka[0][2][1];
    RubikovaKocka::kocka[0][2][1]=RubikovaKocka::kocka[1][2][0];
    RubikovaKocka::kocka[1][2][0]=RubikovaKocka::kocka[2][2][1];
    RubikovaKocka::kocka[2][2][1]=RubikovaKocka::kocka[1][2][2];
    RubikovaKocka::kocka[1][2][2]=tmp;
}

void RubikovaKocka::suprotno_my()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][0][0];
    RubikovaKocka::kocka[0][0][0]=RubikovaKocka::kocka[2][0][0];
    RubikovaKocka::kocka[2][0][0]=RubikovaKocka::kocka[2][0][2];
    RubikovaKocka::kocka[2][0][2]=RubikovaKocka::kocka[0][0][2];
    RubikovaKocka::kocka[0][0][2]=tmp;
    tmp=RubikovaKocka::kocka[0][0][1];
    RubikovaKocka::kocka[0][0][1]=RubikovaKocka::kocka[1][0][0];
    RubikovaKocka::kocka[1][0][0]=RubikovaKocka::kocka[2][0][1];
    RubikovaKocka::kocka[2][0][1]=RubikovaKocka::kocka[1][0][2];
    RubikovaKocka::kocka[1][0][2]=tmp;
}

void RubikovaKocka::suprotno_py()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][2][0];
    RubikovaKocka::kocka[0][2][0]=RubikovaKocka::kocka[0][2][2];
    RubikovaKocka::kocka[0][2][2]=RubikovaKocka::kocka[2][2][2];
    RubikovaKocka::kocka[2][2][2]=RubikovaKocka::kocka[2][2][0];
    RubikovaKocka::kocka[2][2][0]=tmp;
    tmp=RubikovaKocka::kocka[0][2][1];
    RubikovaKocka::kocka[0][2][1]=RubikovaKocka::kocka[1][2][2];
    RubikovaKocka::kocka[1][2][2]=RubikovaKocka::kocka[2][2][1];
    RubikovaKocka::kocka[2][2][1]=RubikovaKocka::kocka[1][2][0];
    RubikovaKocka::kocka[1][2][0]=tmp;
}

void RubikovaKocka::kazaljka_my()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][0][0];
    RubikovaKocka::kocka[0][0][0]=RubikovaKocka::kocka[0][0][2];
    RubikovaKocka::kocka[0][0][2]=RubikovaKocka::kocka[2][0][2];
    RubikovaKocka::kocka[2][0][2]=RubikovaKocka::kocka[2][0][0];
    RubikovaKocka::kocka[2][0][0]=tmp;
    tmp=RubikovaKocka::kocka[0][0][1];
    RubikovaKocka::kocka[0][0][1]=RubikovaKocka::kocka[1][0][2];
    RubikovaKocka::kocka[1][0][2]=RubikovaKocka::kocka[2][0][1];
    RubikovaKocka::kocka[2][0][1]=RubikovaKocka::kocka[1][0][0];
    RubikovaKocka::kocka[1][0][0]=tmp;
}

void RubikovaKocka::suprotno_px()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[2][2][0];
    RubikovaKocka::kocka[2][2][0]=RubikovaKocka::kocka[2][0][0];
    RubikovaKocka::kocka[2][0][0]=RubikovaKocka::kocka[2][0][2];
    RubikovaKocka::kocka[2][0][2]=RubikovaKocka::kocka[2][2][2];
    RubikovaKocka::kocka[2][2][2]=tmp;
    tmp=RubikovaKocka::kocka[2][2][1];
    RubikovaKocka::kocka[2][2][1]=RubikovaKocka::kocka[2][1][0];
    RubikovaKocka::kocka[2][1][0]=RubikovaKocka::kocka[2][0][1];
    RubikovaKocka::kocka[2][0][1]=RubikovaKocka::kocka[2][1][2];
    RubikovaKocka::kocka[2][1][2]=tmp;
}

void RubikovaKocka::suprotno_mx()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][2][0];
    RubikovaKocka::kocka[0][2][0]=RubikovaKocka::kocka[0][0][0];
    RubikovaKocka::kocka[0][0][0]=RubikovaKocka::kocka[0][0][2];
    RubikovaKocka::kocka[0][0][2]=RubikovaKocka::kocka[0][2][2];
    RubikovaKocka::kocka[0][2][2]=tmp;
    tmp=RubikovaKocka::kocka[0][2][1];
    RubikovaKocka::kocka[0][2][1]=RubikovaKocka::kocka[0][1][0];
    RubikovaKocka::kocka[0][1][0]=RubikovaKocka::kocka[0][0][1];
    RubikovaKocka::kocka[0][0][1]=RubikovaKocka::kocka[0][1][2];
    RubikovaKocka::kocka[0][1][2]=tmp;
}

void RubikovaKocka::kazaljka_px()
{
    Kocka tmp;
    tmp=RubikovaKocka::kocka[2][2][0];
    RubikovaKocka::kocka[2][2][0]=RubikovaKocka::kocka[2][2][2];
    RubikovaKocka::kocka[2][2][2]=RubikovaKocka::kocka[2][0][2];
    RubikovaKocka::kocka[2][0][2]=RubikovaKocka::kocka[2][0][0];
    RubikovaKocka::kocka[2][0][0]=tmp;
    tmp=RubikovaKocka::kocka[2][2][1];
    RubikovaKocka::kocka[2][2][1]=RubikovaKocka::kocka[2][1][2];
    RubikovaKocka::kocka[2][1][2]=RubikovaKocka::kocka[2][0][1];
    RubikovaKocka::kocka[2][0][1]=RubikovaKocka::kocka[2][1][0];
    RubikovaKocka::kocka[2][1][0]=tmp;
}

void RubikovaKocka::kazaljka_mx()
{

    Kocka tmp;
    tmp=RubikovaKocka::kocka[0][2][0];
    RubikovaKocka::kocka[0][2][0]=RubikovaKocka::kocka[0][2][2];
    RubikovaKocka::kocka[0][2][2]=RubikovaKocka::kocka[0][0][2];
    RubikovaKocka::kocka[0][0][2]=RubikovaKocka::kocka[0][0][0];
    RubikovaKocka::kocka[0][0][0]=tmp;
    tmp=RubikovaKocka::kocka[0][2][1];
    RubikovaKocka::kocka[0][2][1]=RubikovaKocka::kocka[0][1][2];
    RubikovaKocka::kocka[0][1][2]=RubikovaKocka::kocka[0][0][1];
    RubikovaKocka::kocka[0][0][1]=RubikovaKocka::kocka[0][1][0];
    RubikovaKocka::kocka[0][1][0]=tmp;
}