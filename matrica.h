class Matrica
{
private:
    double mat[3][3];
    int n,m;
public:
    Matrica(int n,int m);
    Matrica(int n,int m,double a[3][3]);
    Matrica(int n,double a[3]);
    static Matrica Rx(double theta);
    static Matrica Ry(double theta);
    static Matrica Rz(double theta);
    static Matrica E(int n);
    Matrica operator*(int const &obj);
    Matrica operator*(Matrica const &obj);
    void ispisi();
    //~Matrica();
};
