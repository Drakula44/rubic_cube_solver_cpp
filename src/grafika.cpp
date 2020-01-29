#include "../headers/grafika.h"

#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592653589793
void Grafika::controls(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    double inc=0.05;
    if(glfwGetKey(window,GLFW_KEY_Q) == GLFW_PRESS)rx+=inc;
    if(glfwGetKey(window,GLFW_KEY_W) == GLFW_PRESS)ry+=inc;
    if(glfwGetKey(window,GLFW_KEY_E) == GLFW_PRESS)rz+=inc;
    if(glfwGetKey(window,GLFW_KEY_A) == GLFW_PRESS)rx-=inc;
    if(glfwGetKey(window,GLFW_KEY_S) == GLFW_PRESS)ry-=inc;
    if(glfwGetKey(window,GLFW_KEY_D) == GLFW_PRESS)rz-=inc;
    if(rangle == 0)
    {
        if(glfwGetKey(window,GLFW_KEY_J) == GLFW_PRESS)
        {
            if (mods == GLFW_MOD_SHIFT) {
                    rotation=1;
            }
            else {
                    rotation=-1;
            }
        }
        if(glfwGetKey(window,GLFW_KEY_K) == GLFW_PRESS)
        {
            if (mods == GLFW_MOD_SHIFT) {
                    rotation=2;
            }
            else {
                    rotation=-2;
            }
        }
        if(glfwGetKey(window,GLFW_KEY_L) == GLFW_PRESS)
        {
            if (mods == GLFW_MOD_SHIFT) {
                    rotation=3;
            }
            else {
                    rotation=-3;
            }
        }
        if(glfwGetKey(window,GLFW_KEY_U) == GLFW_PRESS)
        {
            if (mods == GLFW_MOD_SHIFT) {
                    rotation=4;
            }
            else {
                    rotation=-4;
            }
        }
        if(glfwGetKey(window,GLFW_KEY_I) == GLFW_PRESS)
        {
            if (mods == GLFW_MOD_SHIFT) {
                    rotation=5;
            }
            else {
                    rotation=-5;
            }
        }
        if(glfwGetKey(window,GLFW_KEY_O) == GLFW_PRESS)
        {
            if (mods == GLFW_MOD_SHIFT) {
                    rotation=6;
            }
            else {
                    rotation=-6;
            }
        }    
    }
    //cout << rotation << endl;
    if(action == GLFW_PRESS)
        if(key == GLFW_KEY_ESCAPE)
            glfwSetWindowShouldClose(window, GL_TRUE);
    
}
//komentar
double Grafika::rx = 0;
double Grafika::ry = 0;
double Grafika::rz = 0;
double Grafika::rangle = 0;
int Grafika::rotation = 0;

Grafika::Grafika(const int resX, const int resY)
{
    
    if(!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        window = NULL;
    }
    glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing

    // Open a window and create its OpenGL context
    GLFWwindow* _window = glfwCreateWindow(resX, resY, "TEST", NULL, NULL);
    window = _window;
    if(window == NULL)
    {
        fprintf(stderr, "Failed to open GLFW window.\n");
        glfwTerminate();
        window = NULL;
    }

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, controls);

    // Get info of GPU and supported OpenGL version
    printf("Renderer: %s\n", glGetString(GL_RENDERER));
    printf("OpenGL version supported %s\n", glGetString(GL_VERSION));

    glEnable(GL_DEPTH_TEST); // Depth Testing
    glDepthFunc(GL_LEQUAL);
    glDisable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    init();
    int u = 0;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                u += 24*3;
            }
        }
    }
    u = 72*27;
    
    vertices = new GLfloat[u];
    colors = new GLfloat[u];
}

void Grafika::update()
{
    // Scale to window size
    GLint windowWidth, windowHeight;
    glfwGetWindowSize(window, &windowWidth, &windowHeight);
    glViewport(0, 0, windowWidth, windowHeight);

    // Draw stuff
    glClearColor(0.0, 0.8, 0.3, 1.0);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    drawCube();

    //(GL_PROJECTION_MATRIX);
    glLoadIdentity();

    gluPerspective( 60, (double)windowWidth / (double)windowHeight, 0.1, 100 );


    glMatrixMode(GL_MODELVIEW_MATRIX);

    glTranslatef(0,0,-10);


    

    // Update
    glfwSwapBuffers(window);


    // Check for any input, or window movement
    glfwPollEvents();

}

bool Grafika::ShouldClose()
{
    return glfwWindowShouldClose(window);
}

Grafika::~Grafika()
{
    glfwDestroyWindow(window);
    glfwTerminate();
}

Strana operator*(Matrica const  &nes, Strana const &obj) 
{

    Strana tmp,tmp2;
    tmp2 = obj;
    for(int i = 0;i < 4;i++)
    {
        tmp.setMatrica(i,nes * tmp2.getMatrica(i));
        
    }
    tmp.setBoja(tmp2.getBoja());
    return tmp;
}
Kocka operator*(Matrica const &nes,Kocka const &obj)
{
    Kocka tmp;
    Kocka tmp2 = obj;
    for(int i = 0; i < 6; i++)
    {
        tmp.setStrana(i,nes * tmp2.getStrana(i));
    }
    tmp.id = obj.id;
    return tmp;
}

double Pitagora(Matrica a,Matrica b)
{
    double sum = 0;
    for(int i = 0;i < 3;i++)
    {
        sum += (a.getE(i)-b.getE(i))*(a.getE(i)-b.getE(i));
    }
    sqrt(sum);
    return sum;
}

void Grafika::sideRotation(Kocka (& tmp)[3][3][3])
{
    if(rotation == 0)
        return;
    rangle /= 3;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                int ti = i;
                int tj = j;
                int tk = k;
                switch (abs(rotation))
                {
                case 1:
                    i = 0;
                    tmp[i][j][k] =  Matrica::Rx(Grafika::rangle)*tmp[i][j][k] ;
                    break;
                case 4:
                    i = 2;
                    tmp[i][j][k] =  Matrica::Rx(Grafika::rangle)*tmp[i][j][k] ;
                    break;
                case 2:
                    j = 0;
                    tmp[i][j][k] =  Matrica::Ry(Grafika::rangle)*tmp[i][j][k] ;
                    break;
                case 5:
                    j = 2;
                    tmp[i][j][k] =  Matrica::Ry(Grafika::rangle)*tmp[i][j][k] ;
                    break;
                case 3:
                    k = 0;
                    tmp[i][j][k] =  Matrica::Rz(Grafika::rangle)*tmp[i][j][k] ;
                    break;
                case 6:
                    k = 2;
                    tmp[i][j][k] =  Matrica::Rz(Grafika::rangle)*tmp[i][j][k] ;
                    break;
                default:
                    break;
                }
                i = ti;
                j = tj;
                k = tk;
            }
        }
    }
    rangle *= 3;

    bool provera[3][3][3] ={0};
    if(abs(rangle) >= PI/2)
    {
        if(rangle < 0)
            rangle = -PI/2;
        else
            rangle = +PI/2;
        for(int i = 0;i < 3;i++)
        {
            for(int j = 0;j < 3;j++)
            {
                for(int k = 0;k < 3;k++)
                {
                    if(provera[i][j][k] == true)
                        continue;
                    int ti = i;
                    int tj = j;
                    int tk = k;
                    switch (abs(rotation))
                    {
                    case 1:
                        ti = 0;
                        if(provera[ti][tj][tk] == true)
                        continue;
                        if(rangle < 0)
                            RubikovaKocka::kocka[ti][tj][tk].kazaljka_x();
                        if(rangle > 0)
                            RubikovaKocka::kocka[ti][tj][tk].suprotno_x();
                        RubikovaKocka::kocka[ti][tj][tk] = Matrica::Rx(Grafika::rangle)*RubikovaKocka::kocka[ti][tj][tk];
                        break;
                    case 4:
                        ti = 2;
                        if(provera[ti][tj][tk] == true)
                        continue;
                        if(rangle < 0)
                            RubikovaKocka::kocka[ti][tj][tk].kazaljka_x();
                        if(rangle > 0)
                            RubikovaKocka::kocka[ti][tj][tk].suprotno_x();
                        RubikovaKocka::kocka[ti][tj][tk] = Matrica::Rx(Grafika::rangle)*RubikovaKocka::kocka[ti][tj][tk];
                        break;
                    case 2:
                        tj = 0;
                        if(provera[ti][tj][tk] == true)
                        continue;
                        if(rangle < 0)
                            RubikovaKocka::kocka[ti][tj][tk].kazaljka_y();
                        if(rangle > 0)
                            RubikovaKocka::kocka[ti][tj][tk].suprotno_y();
                        RubikovaKocka::kocka[ti][tj][tk] = Matrica::Ry(Grafika::rangle)*RubikovaKocka::kocka[ti][tj][tk];
                        break;
                    case 5:
                        tj = 2;
                        if(provera[ti][tj][tk] == true)
                        continue;
                        if(rangle < 0)
                            RubikovaKocka::kocka[ti][tj][tk].kazaljka_y();
                        if(rangle > 0)
                            RubikovaKocka::kocka[ti][tj][tk].suprotno_y();
                        RubikovaKocka::kocka[ti][tj][tk] = Matrica::Ry(Grafika::rangle)*RubikovaKocka::kocka[ti][tj][tk];
                        break;
                    case 3:
                        tk = 0;
                        if(provera[ti][tj][tk] == true)
                        continue;
                        if(rangle < 0)
                            RubikovaKocka::kocka[ti][tj][tk].kazaljka_z();
                        if(rangle > 0)
                            RubikovaKocka::kocka[ti][tj][tk].suprotno_z();
                        RubikovaKocka::kocka[ti][tj][tk] = Matrica::Rz(Grafika::rangle)*RubikovaKocka::kocka[ti][tj][tk];
                        break;
                    case 6:
                        tk = 2;
                        if(provera[ti][tj][tk] == true)
                        continue;
                        if(rangle < 0)
                            RubikovaKocka::kocka[ti][tj][tk].kazaljka_z();
                        if(rangle > 0)
                            RubikovaKocka::kocka[ti][tj][tk].suprotno_z();
                        RubikovaKocka::kocka[ti][tj][tk] = Matrica::Rz(Grafika::rangle)*RubikovaKocka::kocka[ti][tj][tk];
                        break;
                    }
                    provera[ti][tj][tk] = true;
                }
            }
        }
        switch (abs(rotation))
        {
        case 1:
            if(rangle < 0)
                RubikovaKocka::kazaljka_mx();
            if(rangle > 0)
                RubikovaKocka::suprotno_mx();
            break;
        case 4:
            if(rangle < 0)
                RubikovaKocka::kazaljka_px();
            if(rangle > 0)
                RubikovaKocka::suprotno_px();
            break;
        case 2:
            if(rangle < 0)
                RubikovaKocka::kazaljka_my();
            if(rangle > 0)
                RubikovaKocka::suprotno_my();
            break;
        case 5:
            if(rangle < 0)
                RubikovaKocka::suprotno_py();
            if(rangle > 0)
                RubikovaKocka::kazaljka_py();
            break;
        case 3:
            if(rangle < 0)
                RubikovaKocka::suprotno_mz();
            if(rangle > 0)
                RubikovaKocka::kazaljka_mz();
            break;
        case 6:
            if(rangle < 0)
                RubikovaKocka::suprotno_pz();
            if(rangle > 0)
                RubikovaKocka::kazaljka_pz();
            break;
        default:
            break;
        }
        cout << rotation << endl;
        cout << "#################"<< endl;
        for(int i = 0;i < 3;i ++)
        {
            cout << "__________" << endl;
            for(int j = 0;j < 3;j++)
            {
                for(int k = 2;k >= 0;k --)
                    cout << RubikovaKocka::kocka[k][j][i].id << " ";
                cout << endl;
            }
            cout << endl;
            cout << "___________"<< endl;
        }
        cout << "#################"<< endl;
        rotation = 0;
        rangle = 0;
    }
    else
    {
        if(rotation < 0)
            rangle += 0.15;
        else if(rotation > 0)
            rangle -= 0.15;
    }
    
    
}

void Grafika::drawCube()
{
    Kocka tmp[3][3][3];
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                //cout << RubikovaKocka::kocka[i][j][k].id << " ";
                tmp[i][j][k] = RubikovaKocka::kocka[i][j][k];
            }
        }
    }
    sideRotation(tmp);
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                tmp[i][j][k] =  Matrica::Rx(Grafika::rx)*tmp[i][j][k] ;
                tmp[i][j][k] =   Matrica::Ry(Grafika::ry)*tmp[i][j][k] ;
                tmp[i][j][k] =  Matrica::Rz(Grafika::rz)*tmp[i][j][k];
                tmp[i][j][k] =  tmp[i][j][k]*(1/3.0);
                double gg[3] = {0,0,2};
                tmp[i][j][k] = tmp[i][j][k] + Matrica(3,gg);
            }
        }
    }
    int vert = 0;
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                for(int ii = 0;ii < 6;ii++)
                {
                    for(int jj = 0;jj < 4;jj++)
                    {
                        for(int kk = 0;kk<3;kk++)
                        {
                            vertices[vert] = tmp[i][j][k].getStrana(ii).getMatrica(jj).getE(kk);
                            colors[vert] = tmp[i][j][k].getStrana(ii).getBoja().getE(kk);
                            vert += 1;
                        }
                    }   
                }
            }
        }
    }/*
    GLfloat colors[] = 
    /* We have a color array and atmp vertex array */
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glColorPointer(3, GL_FLOAT, 0, colors);
    /* Send data : 24 vertices */
    glDrawArrays(GL_QUADS, 0, vert-1);
    /* Cleanup states */
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    //alpha += 1;
}



void Grafika::init()
{
    double b1 [3] ={ 3, 3, 3};
    double b2 [3] ={ 3, 3, 1};
    double b3 [3] ={ 3, 1, 1};
    double b4 [3] ={ 3, 1, 3};
 
    double b5 [3] ={ 1, 3, 3};
    double b6 [3] ={ 1, 3, 1};
    double b7 [3] ={ 1, 1, 1};
    double b8 [3] ={ 1, 1, 3};
 
    double b9 [3] ={ 3, 3, 3};
    double b10[3] ={ 3, 3, 1};
    double b11[3] ={ 1, 3, 1};
    double b12[3] ={ 1, 3, 3};                        

    double b13[3] ={ 3, 1, 3};
    double b14[3] ={ 3, 1, 1};
    double b15[3] ={ 1, 1, 1};
    double b16[3] ={ 1, 1, 3};

    double b17[3] ={ 3, 3, 3};
    double b18[3] ={ 3, 1, 3};
    double b19[3] ={ 1, 1, 3};
    double b20[3] ={ 1, 3, 3};

    double b21[3] ={ 3, 3, 1};
    double b22[3] ={ 3, 1, 1};
    double b23[3] ={ 1, 1, 1};
    double b24[3] ={ 1, 3, 1};


    double crvena[3] = {1,0,0};
    double plava[3] = {0,0,1};
    double zelena[3] = {0,1,0};
    double bela[3] = {1,1,1};
    double narandzasta[3] = {1,0.5,0};
    double zuta[3] = {1,1,0};

    
    Matrica mb1 (3,b1 );
    Matrica mb2 (3,b2 );
    Matrica mb3 (3,b3 );
    Matrica mb4 (3,b4 );
    Matrica mb5 (3,b5 );
    Matrica mb6 (3,b6 );
    Matrica mb7 (3,b7 );
    Matrica mb8 (3,b8 );
    Matrica mb9 (3,b9 );
    Matrica mb10(3,b10);
    Matrica mb11(3,b11);
    Matrica mb12(3,b12);
    Matrica mb13(3,b13);
    Matrica mb14(3,b14);
    Matrica mb15(3,b15);
    Matrica mb16(3,b16);
    Matrica mb17(3,b17);
    Matrica mb18(3,b18);
    Matrica mb19(3,b19);
    Matrica mb20(3,b20);
    Matrica mb21(3,b21);
    Matrica mb22(3,b22);
    Matrica mb23(3,b23);
    Matrica mb24(3,b24);

    Matrica mbela(3,bela);
    Matrica mcrvena(3, crvena);
    Matrica mzuta(3, zuta);
    Matrica mnarandzasta(3, narandzasta);
    Matrica mzelena(3, zelena);
    Matrica mplava(3, plava);
/*
    Strana strana1(mb1, mb2, mb3, mb4, mbela);
    Strana strana2(mb5, mb6, mb7, mb8, mzuta);
    Strana strana3(mb9, mb10, mb11, mb12, mcrvena);
    Strana strana4(mb13, mb14, mb15, mb16, mnarandzasta);
    Strana strana5(mb17, mb18, mb19, mb20, mzelena);
    Strana strana6(mb21, mb22, mb23, mb24, mplava);
*/
    Strana strana1(mb1, mb2, mb3, mb4, mzelena);
    Strana strana2(mb5, mb6, mb7, mb8, mplava);
    Strana strana3(mb9, mb10, mb11, mb12, mcrvena);
    Strana strana4(mb13, mb14, mb15, mb16, mnarandzasta);
    Strana strana5(mb17, mb18, mb19, mb20, mbela);
    Strana strana6(mb21, mb22, mb23, mb24, mzuta);

    Kocka kockakocka(strana1, strana2, strana3, strana4, strana5, strana6);
    int br = 1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int p = 0; p <3; p++)
            {
                RubikovaKocka::kocka[i][j][p].id = br;
                if(true|| (i == 0 && j == 0 && p == 0) || (i == 2 && j == 2 && p == 2))
                {double broj[3];
                broj[0] = -i*2;
                broj[1] = -j*2;
                broj[2] = -p*2;
                Matrica lol(3,broj);
                RubikovaKocka::kocka[i][j][p] = kockakocka + lol;
                }
                if(!(i == 1 && j == 1 && p == 1))
                {
                    RubikovaKocka::kocka[i][j][p].id = br;
                    br++;
                }
                else
                {
                    RubikovaKocka::kocka[i][j][p].id = 0;
                }

            }    
              
        }
    }
    
}




