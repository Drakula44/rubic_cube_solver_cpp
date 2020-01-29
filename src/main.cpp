#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <cstdio>

#include "../headers/grafika.h"

int main(int argc, char** argv)
{
    Grafika *grafika = new Grafika(1024, 620);
    
    while(!grafika->ShouldClose())
    {
        grafika->update();
    }
    delete grafika;

    cout << "#################"<< endl;
    for(int i = 0;i < 3;i ++)
    {


        cout << "__________" << endl;
        for(int j = 0;j < 3;j ++)
        {
            for(int k = 0;k < 3;k ++)
                cout << RubikovaKocka::kocka[i][j][k].id << " ";
            cout << endl;
        }
        cout << endl;
        cout << "___________"<< endl;
    }
    cout << "#################"<< endl;
    RubikovaKocka::kazaljka_mx();
    cout << "#################"<< endl;
    for(int i = 0;i < 3;i ++)
    {
        cout << "__________" << endl;
        for(int j = 0;j < 3;j ++)
        {
            for(int k = 0;k < 3;k ++)
                cout << RubikovaKocka::kocka[i][j][k].id << " ";
            cout << endl;
        }
        cout << endl;
        cout << "___________"<< endl;
    }
    cout << "#################"<< endl;
    RubikovaKocka::kazaljka_my();
    cout << "#################"<< endl;
    for(int i = 0;i < 3;i ++)
    {
        cout << "__________" << endl;
        for(int j = 0;j < 3;j ++)
        {
            for(int k = 0;k < 3;k ++)
                cout << RubikovaKocka::kocka[i][j][k].id << " ";
            cout << endl;
        }
        cout << endl;
        cout << "___________"<< endl;
    }
    cout << "#################"<< endl;
    return 0;

}
