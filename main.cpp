#include <vector>
#include "headers/matrica.h"

using namespace std;

double xn1[3]= {-3,-3, 3};
double xn2[3]= {-3,-1, 3};
double xn3[3]= {-3, 1, 3};
double xn4[3]= {-3, 3, 3};
double xn5[3]= {-3,-3, 1};
double xn6[3]= {-3,-1, 1};
double xn7[3]= {-3, 1, 1};
double xn8[3]= {-3, 3, 1};
double xn9[3]= {-3,-3,-1};
double xn10[3]= {-3,-1,-1};
double xn11[3]= {-3, 1,-1};
double xn12[3]= {-3, 3,-1};
double xn13[3]= {-3,-3,-3};
double xn14[3]= {-3,-1,-3};
double xn15[3]= {-3, 1,-3};
double xn16[3]= {-3, 3,-3};

double xp1[3]= { 3,-3, 3};
double xp2[3]= { 3,-1, 3};
double xp3[3]= { 3, 1, 3};
double xp4[3]= { 3, 3, 3};
double xp5[3]= { 3,-3, 1};
double xp6[3]= { 3,-1, 1};
double xp7[3]= { 3, 1, 1};
double xp8[3]= { 3, 3, 1};
double xp9[3]= { 3,-3,-1};
double xp10[3]= { 3,-1,-1};
double xp11[3]= { 3, 1,-1};
double xp12[3]= { 3, 3,-1};
double xp13[3]= { 3,-3,-3};
double xp14[3]= { 3,-1,-3};
double xp15[3]= { 3, 1,-3};
double xp16[3]= { 3, 3,-3};

double yp1[3]= {-3, 3, 3};
double yp2[3]= {-1, 3, 3};
double yp3[3]= { 1, 3, 3};
double yp4[3]= { 3, 3, 3};
double yp5[3]= {-3, 3, 1};
double yp6[3]= {-1, 3, 1};
double yp7[3]= { 1, 3, 1};
double yp8[3]= { 3, 3, 1};
double yp9[3]= {-3, 3,-1};
double yp10[3]= {-1, 3,-1};
double yp11[3]= { 1, 3,-1};
double yp12[3]= { 3, 3,-1};
double yp13[3]= {-3, 3,-3};
double yp14[3]= {-1, 3,-3};
double yp15[3]= { 1, 3,-3};
double yp16[3]= { 3, 3,-3};

double yn1[3]= {-3,-3, 3};
double yn2[3]= {-1,-3,  3};
double yn3[3]= { 1,-3, 3};
double yn4[3]= { 3,-3, 3};
double yn5[3]= {-3,-3, 1};
double yn6[3]= {-1,-3, 1};
double yn7[3]= { 1,-3, 1};
double yn8[3]= { 3,-3, 1};
double yn9[3]= {-3,-3,-1};
double yn10[3]= {-1,-3,-1};
double yn11[3]= { 1,-3,-1};
double yn12[3]= { 3,-3,-1};
double yn13[3]= {-3,-3,-3};
double yn14[3]= {-1,-3,-3};
double yn15[3]= { 1,-3,-3};
double yn16[3]= { 3,-3,-3};

double zn1[3]= {-3,-3,-3};
double zn2[3]= {-1,-3,-3};
double zn3[3]= { 1,-3,-3};
double zn4[3]= { 3,-3,-3};
double zn5[3]= {-3,-3,-3};
double zn6[3]= {-1,-3,-3};
double zn7[3]= { 1,-3,-3};
double zn8[3]= { 3,-3,-3};
double zn9[3]= {-3,-3,-3};
double zn10[3]= {-1,-3,-3};
double zn11[3]= { 1,-3,-3};
double zn12[3]= { 3,-3,-3};
double zn13[3]= {-3,-3,-3};
double zn14[3]= {-1,-3,-3};
double zn15[3]= { 1,-3,-3};
double zn16[3]= { 3,-3,-3};

double zp1[3]= {-3,-3, 3};
double zp2[3]= {-1,-3, 3};
double zp3[3]= { 1,-3, 3};
double zp4[3]= { 3,-3, 3};
double zp5[3]= {-3,-3, 3};
double zp6[3]= {-1,-3, 3};
double zp7[3]= { 1,-3, 3};
double zp8[3]= { 3,-3, 3};
double zp9[3]= {-3,-3, 3};
double zp10[3]= {-1,-3, 3};
double zp11[3]= { 1,-3, 3};
double zp12[3]= { 3,-3, 3};
double zp13[3]= {-3,-3, 3};
double zp14[3]= {-1,-3, 3};
double zp15[3]= { 1,-3, 3};
double zp16[3]= { 3,-3, 3};

Matrica mxn1(3,xn1 );
Matrica mxn2(3,xn2 );
Matrica mxn3(3,xn3 );
Matrica mxn4(3,xn4 );
Matrica mxn5(3,xn5 );
Matrica mxn6(3,xn6 );
Matrica mxn7(3,xn7 );
Matrica mxn8(3,xn8 );
Matrica mxn9(3,xn9 );
Matrica mxn10(3,xn10);
Matrica mxn11(3,xn11);
Matrica mxn12(3,xn12);
Matrica mxn13(3,xn13);
Matrica mxn14(3,xn14);
Matrica mxn15(3,xn15);
Matrica mxn16(3,xn16);

Matrica mxp1(3,xp1 );
Matrica mxp2(3,xp2 );
Matrica mxp3(3,xp3 );
Matrica mxp4(3,xp4 );
Matrica mxp5(3,xp5 );
Matrica mxp6(3,xp6 );
Matrica mxp7(3,xp7 );
Matrica mxp8(3,xp8 );
Matrica mxp9(3,xp9 );
Matrica mxp10(3,xp10);
Matrica mxp11(3,xp11);
Matrica mxp12(3,xp12);
Matrica mxp13(3,xp13);
Matrica mxp14(3,xp14);
Matrica mxp15(3,xp15);
Matrica mxp16(3,xp16);

Matrica myp1(3,yp1 );
Matrica myp2(3,yp2 );
Matrica myp3(3,yp3 );
Matrica myp4(3,yp4 );
Matrica myp5(3,yp5 );
Matrica myp6(3,yp6 );
Matrica myp7(3,yp7 );
Matrica myp8(3,yp8 );
Matrica myp9(3,yp9 );
Matrica myp10(3,yp10);
Matrica myp11(3,yp11);
Matrica myp12(3,yp12);
Matrica myp13(3,yp13);
Matrica myp14(3,yp14);
Matrica myp15(3,yp15);
Matrica myp16(3,yp16);

Matrica myn1(3,yn1 );
Matrica myn2 (3,yn2 );
Matrica myn3(3,yn3 );
Matrica myn4(3,yn4 );
Matrica myn5(3,yn5 );
Matrica myn6(3,yn6 );
Matrica myn7(3,yn7 );
Matrica myn8(3,yn8 );
Matrica myn9(3,yn9 );
Matrica myn10(3,yn10);
Matrica myn11(3,yn11);
Matrica myn12(3,yn12);
Matrica myn13(3,yn13);
Matrica myn14(3,yn14);
Matrica myn15(3,yn15);
Matrica myn16(3,yn16);

Matrica mzn1(3,zn1 );
Matrica mzn2(3,zn2 );
Matrica mzn3(3,zn3 );
Matrica mzn4(3,zn4 );
Matrica mzn5(3,zn5 );
Matrica mzn6(3,zn6 );
Matrica mzn7(3,zn7 );
Matrica mzn8(3,zn8 );
Matrica mzn9(3,zn9 );
Matrica mzn10(3,zn10);
Matrica mzn11(3,zn11);
Matrica mzn12(3,zn12);
Matrica mzn13(3,zn13);
Matrica mzn14(3,zn14);
Matrica mzn15(3,zn15);
Matrica mzn16(3,zn16);

Matrica mzp1(3,zp1 );
Matrica mzp2(3,zp2 );
Matrica mzp3(3,zp3 );
Matrica mzp4(3,zp4 );
Matrica mzp5(3,zp5 );
Matrica mzp6(3,zp6 );
Matrica mzp7(3,zp7 );
Matrica mzp8(3,zp8 );
Matrica mzp9(3,zp9 );
Matrica mzp10(3,zp10);
Matrica mzp11(3,zp11);
Matrica mzp12(3,zp12);
Matrica mzp13(3,zp13);
Matrica mzp14(3,zp14);
Matrica mzp15(3,zp15);
Matrica mzp16(3,zp16);



int main()
{
    vector<vector<Matrica>> kocka[3][3][3];
    
        vector<Matrica> sxp1;
        sxp1.push_back(mxp1 );
        sxp1.push_back(mxp2 );
        sxp1.push_back(mxp5 );
        sxp1.push_back(mxp6 );
        //2
        vector<Matrica> sxp2;
        sxp2.push_back(mxp2 );
        sxp2.push_back(mxp3 );
        sxp2.push_back(mxp6 );
        sxp2.push_back(mxp7 );
        //3
        vector<Matrica> sxp3;
        sxp3.push_back(mxp3 );
        sxp3.push_back(mxp4 );
        sxp3.push_back(mxp7 );
        sxp3.push_back(mxp8 );
        //4
        vector<Matrica> sxp4;
        sxp4.push_back(mxp5 );
        sxp4.push_back(mxp6 );
        sxp4.push_back(mxp9 );
        sxp4.push_back(mxp10);
        //5
        vector<Matrica> sxp5;
        sxp5.push_back(mxp6 );
        sxp5.push_back(mxp7 );
        sxp5.push_back(mxp10);
        sxp5.push_back(mxp11);
        //6
        vector<Matrica> sxp6;
        sxp6.push_back(mxp7 );
        sxp6.push_back(mxp8 );
        sxp6.push_back(mxp11);
        sxp6.push_back(mxp12);
        //7
        vector<Matrica> sxp7;
        sxp7.push_back(mxp9 );
        sxp7.push_back(mxp10);
        sxp7.push_back(mxp13);
        sxp7.push_back(mxp14);
        //8
        vector<Matrica> sxp8;
        sxp8.push_back(mxp10);
        sxp8.push_back(mxp11);
        sxp8.push_back(mxp14);
        sxp8.push_back(mxp15);
        //9
        vector<Matrica> sxp9;
        sxp9.push_back(mxp11);
        sxp9.push_back(mxp12);
        sxp9.push_back(mxp15);
        sxp9.push_back(mxp16);


        //1
        vector<Matrica> sxn1;
        sxn1.push_back(mxn1 );
        sxn1.push_back(mxn2 );
        sxn1.push_back(mxn5 );
        sxn1.push_back(mxn6 );
        //2
        vector<Matrica> sxn2;
        sxn2.push_back(mxn2 );
        sxn2.push_back(mxn3 );
        sxn2.push_back(mxn6 );
        sxn2.push_back(mxn7 );
        //3
        vector<Matrica> sxn3;
        sxn3.push_back(mxn3 );
        sxn3.push_back(mxn4 );
        sxn3.push_back(mxn7 );
        sxn3.push_back(mxn8 );
        //4
        vector<Matrica> sxn4;
        sxn4.push_back(mxn5 );
        sxn4.push_back(mxn6 );
        sxn4.push_back(mxn9 );
        sxn4.push_back(mxn10);
        //5
        vector<Matrica> sxn5;
        sxn5.push_back(mxn6 );
        sxn5.push_back(mxn7 );
        sxn5.push_back(mxn10);
        sxn5.push_back(mxn11);
        //6
        vector<Matrica> sxn6;
        sxn6.push_back(mxn7 );
        sxn6.push_back(mxn8 );
        sxn6.push_back(mxn11);
        sxn6.push_back(mxn12);
        //7
        vector<Matrica> sxn7;
        sxn7.push_back(mxn9 );
        sxn7.push_back(mxn10);
        sxn7.push_back(mxn13);
        sxn7.push_back(mxn14);
        //8
        vector<Matrica> sxn8;
        sxn8.push_back(mxn10);
        sxn8.push_back(mxn11);
        sxn8.push_back(mxn14);
        sxn8.push_back(mxn15);
        //9
        vector<Matrica> sxn9;
        sxn9.push_back(mxn11);
        sxn9.push_back(mxn12);
        sxn9.push_back(mxn15);
        sxn9.push_back(mxn16);

        //1
        vector<Matrica> syn1;
        syn1.push_back(myn1 );
        syn1.push_back(myn2 );
        syn1.push_back(myn5 );
        syn1.push_back(myn6 );
        //2
        vector<Matrica> syn2;
        syn2.push_back(myn2 );
        syn2.push_back(myn3 );
        syn2.push_back(myn6 );
        syn2.push_back(myn7 );
        //3
        vector<Matrica> syn3;
        syn3.push_back(myn3 );
        syn3.push_back(myn4 );
        syn3.push_back(myn7 );
        syn3.push_back(myn8 );
        //4
        vector<Matrica> syn4;
        syn4.push_back(myn5 );
        syn4.push_back(myn6 );
        syn4.push_back(myn9 );
        syn4.push_back(myn10);
        //5
        vector<Matrica> syn5;
        syn5.push_back(myn6 );
        syn5.push_back(myn7 );
        syn5.push_back(myn10);
        syn5.push_back(myn11);
        //6
        vector<Matrica> syn6;
        syn6.push_back(myn7 );
        syn6.push_back(myn8 );
        syn6.push_back(myn11);
        syn6.push_back(myn12);
        //7
        vector<Matrica> syn7;
        syn7.push_back(myn9 );
        syn7.push_back(myn10);
        syn7.push_back(myn13);
        syn7.push_back(myn14);
        //8
        vector<Matrica> syn8;
        syn8.push_back(myn10);
        syn8.push_back(myn11);
        syn8.push_back(myn14);
        syn8.push_back(myn15);
        //9
        vector<Matrica> syn9;
        syn9.push_back(myn11);
        syn9.push_back(myn12);
        syn9.push_back(myn15);
        syn9.push_back(myn16);

        //1
        vector<Matrica> syp1;
        syp1.push_back(myp1 );
        syp1.push_back(myp2 );
        syp1.push_back(myp5 );
        syp1.push_back(myp6 );
        //2
        vector<Matrica> syp2;
        syp2.push_back(myp2 );
        syp2.push_back(myp3 );
        syp2.push_back(myp6 );
        syp2.push_back(myp7 );
        //3
        vector<Matrica> syp3;
        syp3.push_back(myp3 );
        syp3.push_back(myp4 );
        syp3.push_back(myp7 );
        syp3.push_back(myp8 );
        //4
        vector<Matrica> syp4;
        syp4.push_back(myp5 );
        syp4.push_back(myp6 );
        syp4.push_back(myp9 );
        syp4.push_back(myp10);
        //5
        vector<Matrica> syp5;
        syp5.push_back(myp6 );
        syp5.push_back(myp7 );
        syp5.push_back(myp10);
        syp5.push_back(myp11);
        //6
        vector<Matrica> syp6;
        syp6.push_back(myp7 );
        syp6.push_back(myp8 );
        syp6.push_back(myp11);
        syp6.push_back(myp12);
        //7
        vector<Matrica> syp7;
        syp7.push_back(myp9 );
        syp7.push_back(myp10);
        syp7.push_back(myp13);
        syp7.push_back(myp14);
        //8
        vector<Matrica> syp8;
        syp8.push_back(myp10);
        syp8.push_back(myp11);
        syp8.push_back(myp14);
        syp8.push_back(myp15);
        //9
        vector<Matrica> syp9;
        syp9.push_back(myp11);
        syp9.push_back(myp12);
        syp9.push_back(myp15);
        syp9.push_back(myp16);

        //1
        vector<Matrica> szp1;
        szp1.push_back(mzp1 );
        szp1.push_back(mzp2 );
        szp1.push_back(mzp5 );
        szp1.push_back(mzp6 );
        //2
        vector<Matrica> szp2;
        szp2.push_back(mzp2 );
        szp2.push_back(mzp3 );
        szp2.push_back(mzp6 );
        szp2.push_back(mzp7 );
        //3
        vector<Matrica> szp3;
        szp3.push_back(mzp3 );
        szp3.push_back(mzp4 );
        szp3.push_back(mzp7 );
        szp3.push_back(mzp8 );
        //4
        vector<Matrica> szp4;
        szp4.push_back(mzp5 );
        szp4.push_back(mzp6 );
        szp4.push_back(mzp9 );
        szp4.push_back(mzp10);
        //5
        vector<Matrica> szp5;
        szp5.push_back(mzp6 );
        szp5.push_back(mzp7 );
        szp5.push_back(mzp10);
        szp5.push_back(mzp11);
        //6
        vector<Matrica> szp6;
        szp6.push_back(mzp7 );
        szp6.push_back(mzp8 );
        szp6.push_back(mzp11);
        szp6.push_back(mzp12);
        //7
        vector<Matrica> szp7;
        szp7.push_back(mzp9 );
        szp7.push_back(mzp10);
        szp7.push_back(mzp13);
        szp7.push_back(mzp14);
        //8
        vector<Matrica> szp8;
        szp8.push_back(mzp10);
        szp8.push_back(mzp11);
        szp8.push_back(mzp14);
        szp8.push_back(mzp15);
        //9
        vector<Matrica> szp9;
        szp9.push_back(mzp11);
        szp9.push_back(mzp12);
        szp9.push_back(mzp15);
        szp9.push_back(mzp16);

        //1
        vector<Matrica> szn1;
        szn1.push_back(mzn1 );
        szn1.push_back(mzn2 );
        szn1.push_back(mzn5 );
        szn1.push_back(mzn6 );
        //2
        vector<Matrica> szn2;
        szn2.push_back(mzn2 );
        szn2.push_back(mzn3 );
        szn2.push_back(mzn6 );
        szn2.push_back(mzn7 );
        //3
        vector<Matrica> szn3;
        szn3.push_back(mzn3 );
        szn3.push_back(mzn4 );
        szn3.push_back(mzn7 );
        szn3.push_back(mzn8 );
        //4
        vector<Matrica> szn4;
        szn4.push_back(mzn5 );
        szn4.push_back(mzn6 );
        szn4.push_back(mzn9 );
        szn4.push_back(mzn10);
        //5
        vector<Matrica> szn5;
        szn5.push_back(mzn6 );
        szn5.push_back(mzn7 );
        szn5.push_back(mzn10);
        szn5.push_back(mzn11);
        //6
        vector<Matrica> szn6;
        szn6.push_back(mzn7 );
        szn6.push_back(mzn8 );
        szn6.push_back(mzn11);
        szn6.push_back(mzn12);
        //7
        vector<Matrica> szn7;
        szn7.push_back(mzn9 );
        szn7.push_back(mzn10);
        szn7.push_back(mzn13);
        szn7.push_back(mzn14);
        //8
        vector<Matrica> szn8;
        szn8.push_back(mzn10);
        szn8.push_back(mzn11);
        szn8.push_back(mzn14);
        szn8.push_back(mzn15);
        //9
        vector<Matrica> szn9;
        szn9.push_back(mzn11);
        szn9.push_back(mzn12);
        szn9.push_back(mzn15);
        szn9.push_back(mzn16);
    

    kocka[0][0][0].push_back(syn7);
    kocka[0][0][0].push_back(sxn7);
    kocka[0][0][0].push_back(szn1);

    kocka[2][0][0].push_back(syn9);
    kocka[2][0][0].push_back(szn3);
    kocka[2][0][0].push_back(sxp7);

    kocka[0][2][0].push_back(syp7);
    kocka[0][2][0].push_back(szn7);
    kocka[0][2][0].push_back(sxn9);

    kocka[2][2][0].push_back(syp9);
    kocka[2][2][0].push_back(szp9);
    kocka[2][2][0].push_back(sxp7);

    kocka[0][0][2].push_back(syn7);
    kocka[0][0][2].push_back(sxn7);
    kocka[0][0][2].push_back(szn1);

    kocka[2][0][2].push_back(syn9);
    kocka[2][0][2].push_back(szn3);
    kocka[2][0][2].push_back(sxp7);

    kocka[0][2][2].push_back(syp7);
    kocka[0][2][2].push_back(szn7);
    kocka[0][2][2].push_back(sxn9);

    kocka[2][2][2].push_back(syp9);
    kocka[2][2][2].push_back(szp9);
    kocka[2][2][2].push_back(sxp7);
    /*kocka[0][0][0].resize(3);
    kocka[0][0][0][0].push_back(Matrica(3,a1));
    kocka[0][0][0][0].push_back(Matrica(3,a1));
    kocka[0][0][0][0].push_back(Matrica(3,a1));
    kocka[0][0][0][0].push_back(Matrica(3,a1));*/
    /*for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                kocka[i][j][k].resize(3);   
            }
        }   
    }*/
    double a[100][3];
    a[0] = {1,1,1};
    int i = 0;
    vector<Matrica> tmp;
    double
    for(int j = 0;j < 3;j++)
    {
        for(int k = 0;k < 3;k++)
        {
            tmp.push_back(Matrica(3,a1));   
        }
    }   
    

}