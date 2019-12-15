#include <iostream>
#include <cmath>
#include "matrica.h"

using namespace std;

int main()
{
    Matrica b = Matrica::E(3);
    b.ispisi();
    (b*3).ispisi();
    Matrica c = b*b;
    c.ispisi();
}