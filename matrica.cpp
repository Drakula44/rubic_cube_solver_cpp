#include "matrica.h"
#include <bits/stdc++.h>
using namespace std;
Matrica::Matrica(int _n,int _m)
{
    this->n = _n;
    this->m = _m;
    mat =  new double*[n];
    for(int i = 0;i < n;i++)
    {
        mat[i] = new double[m];
    }
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            mat[i][j] = 0;
}

Matrica::Matrica(int _n,int _m,double** a)
{
    this->n = _n;
    this->m = _m;
    mat =  new double*[n];
    for(int i = 0;i < n;i++)
    {
        mat[i] = new double[m];
    }
    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++)
            mat[i][j] = a[i][j];
}

Matrica::Matrica(int _n,double* a)
{
    this->n = _n;
    this->m = 1;
    mat =  new double*[n];
    for(int i = 0;i < n;i++)
    {
        mat[i] = new double[1];
        mat[i][0] = a[i];
    }
}

Matrica Matrica::Rx(double theta)
{
    /* 
       1 0      0
       0 cos(a) -sin(a)
       0 sin(a)  cos(a)
    */
    double a[3][3]={1,0,0,0,cos(theta),-sin(theta),0,sin(theta),cos(theta)};
    Matrica b(3,3);
    for(int i = 0;i < 3;i++)
        for(int j = 0;j < 3;j++)
            b.mat[i][j] = a[i][j];
    return b;
}

Matrica Matrica::Ry(double theta)
{
    /* 
       cos(a) 0 sin(a) 
       0      1 0
      -sin(a) 0 cos(a)
    */
    double a[3][3]={cos(theta),0,sin(theta),0,1,0,-sin(theta),0,cos(theta)};
    Matrica b(3,3);
    for(int i = 0;i < 3;i++)
        for(int j = 0;j < 3;j++)
            b.mat[i][j] = a[i][j];
    return b;
}

Matrica Matrica::Rz(double theta)
{
    /*
       cos(a) -sin(a) 0
       sin(a)  cos(a) 0
       0       0      1
    */
    double a[3][3]={cos(theta),-sin(theta),0,sin(theta),cos(theta),0,0,0,1};
    Matrica b(3,3);
    for(int i = 0;i < 3;i++)
        for(int j = 0;j < 3;j++)
            b.mat[i][j] = a[i][j];
    return b;
}

Matrica Matrica::E(int _n)
{
    Matrica b(_n,_n);
    for(int i = 0;i < _n;i++)
        b.mat[i][i] = 1;
    return b;
}

Matrica Matrica::operator*(int const &obj)
{
    Matrica b(this->n,this->m);
    for(int i = 0;i < this->n;i++)
    {
        for(int j = 0;j < this->m;j++)
        {
            b.mat[i][j] = this->mat[i][j]*obj;
        }
    }
    return b;
}

Matrica Matrica::mnozenje(Matrica *obj)
{
    fflush(stdout);
    printf("aa");
    cout << "aaa";
    /*if(this->m != obj.n)
    {
        cout << "lol";
        return Matrica::E(1);
    }*/
     cout << "aaa";   
    Matrica b(this->n,obj->m);
    for(int i = 0;i < this->n;i++)
    {
        cout << "aaa";
        for(int j = 0;j < obj->m;j++)
        {
            
            double lol = 0;
            for(int k = 0;k < this->m;k++)
                lol += this->mat[i][k]*obj->mat[k][j];
            b.mat[i][j] = lol;
        }
    }
    return b;
}

Matrica::~Matrica()
{
    for(int i = 0;i < n;i++)
    {
        delete mat[m];
    }
    delete mat;
}

void Matrica::ispisi()
{
    for(int i = 0;i < this->n;i++)
    {
        for(int j = 0;j < this->m;j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << '\n';
    }
}