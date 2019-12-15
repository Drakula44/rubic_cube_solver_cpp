class Matrica
{
private:
    double** mat;
    int n,m;
public:
    Matrica(int n,int m);
    Matrica(int n,int m,double** a);
    Matrica(int n,double* a);
    static Matrica Rx(double theta);
    static Matrica Ry(double theta);
    static Matrica Rz(double theta);
    static Matrica E(int n);
    Matrica operator*(int const &obj);
    Matrica mnozenje(Matrica *obj);
    void ispisi();
    ~Matrica();
};
