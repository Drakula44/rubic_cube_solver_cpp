#include <iostream>
#include <cmath>
#include "matrica.h"

using namespace std;

int main()
{
    Matrica b = Matrica::E(3);
    b.ispisi();
    cout << "mnozenje" << endl;
    (b*3).ispisi();
    cout << "gotovo"<<endl;
    Matrica c = b.mnozenje(&b);
    c.ispisi();
    cout << "gotovo"<<endl;
    /*cout << "a" << endl;
    (b*b).ispisi();
    cout << "a" << endl;
    (b*b).ispisi();
    cout << "a" << endl;*/
}