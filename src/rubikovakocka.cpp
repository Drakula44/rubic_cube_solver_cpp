#include "../headers/rubikovakocka.h"

void RubikovaKocka::kazaljka_pz()
{
    Kocka tmp; 
    tmp=rubikova[1][3][3];
    rubikova[1][3][3]=rubikova[1][1][3];
    rubikova[1][1][3]=rubikova[3][1][3];
    rubikova[3][1][3]=rubikova[3][3][3];
    rubikova[3][3][3]=tmp;
    tmp=rubikova[2][3][3];
    rubikova[2][3][3]=rubikova[1][2][3];
    rubikova[1][2][3]=rubikova[2][1][3];
    rubikova[2][1][3]=rubikova[3][2][3];
    rubikova[3][2][3]=tmp;
}

void RubikovaKocka::kazaljka_mz()
{
    Kocka tmp;
    tmp=rubikova[1][3][1];
    rubikova[1][3][1]=rubikova[1][1][1];
    rubikova[1][1][1]=rubikova[3][1][1];
    rubikova[3][1][1]=rubikova[3][3][1];
    rubikova[3][3][1]=tmp;
    tmp=rubikova[2][3][1];
    rubikova[2][3][1]=rubikova[1][2][1];
    rubikova[1][2][1]=rubikova[2][1][1];
    rubikova[2][1][1]=rubikova[3][2][1];
    rubikova[3][2][1]=tmp;
}

void RubikovaKocka::suprotno_pz()
{
    Kocka tmp;
    tmp=rubikova[1][3][3];
    rubikova[1][3][3]=rubikova[3][3][3];
    rubikova[3][3][3]=rubikova[3][1][3];
    rubikova[3][1][3]=rubikova[1][1][3];
    rubikova[1][1][3]=tmp;
    tmp=rubikova[2][3][3];
    rubikova[2][3][3]=rubikova[3][2][3];
    rubikova[3][2][3]=rubikova[2][1][3];
    rubikova[2][1][3]=rubikova[1][2][3];
    rubikova[1][2][3]=tmp;
}

void RubikovaKocka::suprotno_mz()
{
    Kocka tmp;
    tmp=rubikova[1][3][1];
    rubikova[1][3][1]=rubikova[3][3][1];
    rubikova[3][3][1]=rubikova[3][1][1];
    rubikova[3][1][1]=rubikova[1][1][1];
    rubikova[1][1][1]=tmp;
    tmp=rubikova[2][3][1];
    rubikova[2][3][1]=rubikova[3][2][1];
    rubikova[3][2][1]=rubikova[2][1][1];
    rubikova[2][1][1]=rubikova[1][2][1];
    rubikova[1][2][1]=tmp;
}

void RubikovaKocka::kazaljka_py()
{
    Kocka tmp;
    tmp=rubikova[1][3][1];
    rubikova[1][3][1]=rubikova[3][3][1];
    rubikova[3][3][1]=rubikova[3][3][3];
    rubikova[3][3][3]=rubikova[1][3][3];
    rubikova[1][3][3]=tmp;
    tmp=rubikova[1][3][2];
    rubikova[1][3][2]=rubikova[2][3][1];
    rubikova[2][3][1]=rubikova[3][3][2];
    rubikova[3][3][2]=rubikova[2][3][3];
    rubikova[2][3][3]=tmp;
}

void RubikovaKocka::kazaljka_my()
{
    Kocka tmp;
    tmp=rubikova[1][1][1];
    rubikova[1][1][1]=rubikova[3][1][1];
    rubikova[3][1][1]=rubikova[3][1][3];
    rubikova[3][1][3]=rubikova[1][1][3];
    rubikova[1][1][3]=tmp;
    tmp=rubikova[1][1][2];
    rubikova[1][1][2]=rubikova[2][1][1];
    rubikova[2][1][1]=rubikova[3][1][2];
    rubikova[3][1][2]=rubikova[2][1][3];
    rubikova[2][1][3]=tmp;
}

void RubikovaKocka::suprotno_py()
{
    Kocka tmp;
    tmp=rubikova[1][3][1];
    rubikova[1][3][1]=rubikova[1][3][3];
    rubikova[1][3][3]=rubikova[3][3][3];
    rubikova[3][3][3]=rubikova[3][3][1];
    rubikova[3][3][1]=tmp;
    tmp=rubikova[1][3][2];
    rubikova[1][3][2]=rubikova[2][3][3];
    rubikova[2][3][3]=rubikova[3][3][2];
    rubikova[3][3][2]=rubikova[2][3][1];
    rubikova[2][3][1]=tmp;
}

void RubikovaKocka::suprotno_my()
{
    Kocka tmp;
    tmp=rubikova[1][1][1];
    rubikova[1][1][1]=rubikova[1][1][3];
    rubikova[1][1][3]=rubikova[3][1][3];
    rubikova[3][1][3]=rubikova[3][1][1];
    rubikova[3][1][1]=tmp;
    tmp=rubikova[1][1][2];
    rubikova[1][1][2]=rubikova[2][1][3];
    rubikova[2][1][3]=rubikova[3][1][2];
    rubikova[3][1][2]=rubikova[2][1][1];
    rubikova[2][1][1]=tmp;
}

void RubikovaKocka::kazaljka_px()
{
    Kocka tmp;
    tmp=rubikova[3][3][1];
    rubikova[3][3][1]=rubikova[3][1][1];
    rubikova[3][1][1]=rubikova[3][1][3];
    rubikova[3][1][3]=rubikova[3][3][3];
    rubikova[3][3][3]=tmp;
    tmp=rubikova[3][3][2];
    rubikova[3][3][2]=rubikova[3][2][1];
    rubikova[3][2][1]=rubikova[3][1][2];
    rubikova[3][1][2]=rubikova[3][2][3];
    rubikova[3][2][3]=tmp;
}

void RubikovaKocka::kazaljka_mx()
{
    Kocka tmp;
    tmp=rubikova[1][3][1];
    rubikova[1][3][1]=rubikova[1][1][1];
    rubikova[1][1][1]=rubikova[1][1][3];
    rubikova[1][1][3]=rubikova[1][3][3];
    rubikova[1][3][3]=tmp;
    tmp=rubikova[1][3][2];
    rubikova[1][3][2]=rubikova[1][2][1];
    rubikova[1][2][1]=rubikova[1][1][2];
    rubikova[1][1][2]=rubikova[1][2][3];
    rubikova[1][2][3]=tmp;
}

void RubikovaKocka::suprotno_px()
{
    Kocka tmp;
    tmp=rubikova[3][3][1];
    rubikova[3][3][1]=rubikova[3][3][3];
    rubikova[3][3][3]=rubikova[3][1][3];
    rubikova[3][1][3]=rubikova[3][1][1];
    rubikova[3][1][1]=tmp;
    tmp=rubikova[3][3][2];
    rubikova[3][3][2]=rubikova[3][2][3];
    rubikova[3][2][3]=rubikova[3][1][2];
    rubikova[3][1][2]=rubikova[3][2][1];
    rubikova[3][2][1]=tmp;
}

void RubikovaKocka::suprotno_mx()
{
    Kocka tmp;
    tmp=rubikova[1][3][1];
    rubikova[1][3][1]=rubikova[1][3][3];
    rubikova[1][3][3]=rubikova[1][1][3];
    rubikova[1][1][3]=rubikova[1][1][1];
    rubikova[1][1][1]=tmp;
    tmp=rubikova[1][3][2];
    rubikova[1][3][2]=rubikova[1][2][3];
    rubikova[1][2][3]=rubikova[1][1][2];
    rubikova[1][1][2]=rubikova[1][2][1];
    rubikova[1][2][1]=tmp;
}