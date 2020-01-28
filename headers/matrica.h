#include <iostream>
using namespace std;

class Matrica
{
private:
    int n,m;
public:
    double mat[3][3] = {0};
    Matrica();
    Matrica(int n,int m);
    Matrica(int n,int m,double a[3][3]);
    Matrica(int n,double a[3]);
    
    static Matrica Rx(double theta);
    static Matrica Ry(double theta);
    static Matrica Rz(double theta);
    static Matrica E(int n);
    Matrica operator*(double const &obj);
    Matrica operator*(Matrica const &obj) const;
    Matrica operator+(Matrica const &obj);
    //Matrica operator=(const Matrica &obj);
    void ispisi();
    double getE(int i)
    {
        if(i >= n)
            return -1;
        return mat[i][0];
    }
    void setE(int i,double a)
    {
        mat[i][0] = a;    
    }
};




