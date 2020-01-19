#include "../headers/grafika.h"

#include <iostream>
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
    
    if(glfwGetKey(window,GLFW_KEY_J) == GLFW_PRESS)rotation=1;
    if(glfwGetKey(window,GLFW_KEY_K) == GLFW_PRESS)rotation=2;
    if(glfwGetKey(window,GLFW_KEY_L) == GLFW_PRESS)rotation=3;
    if(glfwGetKey(window,GLFW_KEY_U) == GLFW_PRESS)rotation=-1;
    if(glfwGetKey(window,GLFW_KEY_I) == GLFW_PRESS)rotation=-2;
    if(glfwGetKey(window,GLFW_KEY_O) == GLFW_PRESS)rotation=-3;
    
    if(action == GLFW_PRESS)
        if(key == GLFW_KEY_ESCAPE)
            glfwSetWindowShouldClose(window, GL_TRUE);
    cout << rx << " " << ry << " " << rz << endl;
    
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

    glMatrixMode(GL_PROJECTION_MATRIX);
    glLoadIdentity();
    gluPerspective( 60, (double)windowWidth / (double)windowHeight, 0.1, 100 );

    glMatrixMode(GL_MODELVIEW_MATRIX);
    glTranslatef(0,0,-5);

    drawCube();

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
    return tmp;
}

void Grafika::drawCube()
{
    Kocka tmp[3][3][3];
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
                tmp[i][j][k] = kocka[i][j][k];
        }
    }
    if(rotation == 1)
    {
        int i = 0;
        for(int j = 0;j < 3;j++)
        {
            for(int k = 0;k < 3;k++)
            {
                        tmp[i][j][k] =  Matrica::Rx(Grafika::rangle)*tmp[i][j][k] ;
            }
        }
        if(rangle >= PI/2)
        {
            rangle = 0;
            rotation = 0;
            //TODO petrovic rotacija matrice
        }
        else
        {
            rangle += 0.05;
        }
    }
    cout << "###############################################"<<endl;
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
                for(int ii = 0;ii < 6;ii++)
                {
                    for(int jj = 0;jj < 4;jj++)
                    {
                        tmp[i][j][k].getStrana(ii).getMatrica(jj).ispisi();
                        cout << endl;
                    }
                    cout << "___________________" << endl;
                }
            }
        }
    }
    cout << "###############################################"<<endl;
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
                            //if(u >= 72*2) break;
                            vertices[vert] = tmp[i][j][k].getStrana(ii).getMatrica(jj).getE(kk);
                            colors[vert] = tmp[i][j][k].getStrana(ii).getBoja().getE(kk);
                            colors[vert] = 0.5;
                            vert += 1;
                        }
                        //cout << endl;
                    }   
                }
            }
        }
    }/*
    GLfloat colors[] = 
    {
        0, 0, 1,   0, 0, 1,   0, 0, 1,   0, 0, 1,
        0, 1, 0,   0, 1, 0,   0, 1, 0,  0, 1, 0,
        1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
        1, 1, 1,   1, 1, 1,   1, 1, 1,  1, 1, 1,   
        1, 0.5,0,  1, 0.5,0,  1, 0.5,0,  1, 0.5,0,  
        1, 1, 0,    1, 1, 0,    1, 1, 0,  1, 1, 0 ,
        0, 0, 0,   0, 0, 0,   0, 0, 0,  0, 0, 0,
        0, 0, 1,   0, 0, 1,   0, 0, 1,   0, 0, 1,
        0, 1, 0,   0, 1, 0,   0, 1, 0,  0, 1, 0,
        1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
        1, 1, 1,   1, 1, 1,   1, 1, 1,  1, 1, 1,   
        1, 0.5,0,  1, 0.5,0,  1, 0.5,0,  1, 0.5,0,  
        1, 1, 0,    1, 1, 0,    1, 1, 0,  1, 1, 0 ,
        0, 0, 0,   0, 0, 0,   0, 0, 0,  0, 0, 0
    };   /*/ 

    /* We have a color array and atmp vertex array */
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glColorPointer(3, GL_FLOAT, 0, colors);
    /* Send data : 24 vertices */
    glDrawArrays(GL_QUADS, 0, vert);
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

    Strana strana1(mb1, mb2, mb3, mb4, mbela);
    Strana strana2(mb5, mb6, mb7, mb8, mzuta);
    Strana strana3(mb9, mb10, mb11, mb12, mcrvena);
    Strana strana4(mb13, mb14, mb15, mb16, mnarandzasta);
    Strana strana5(mb17, mb18, mb19, mb20, mzelena);
    Strana strana6(mb21, mb22, mb23, mb24, mplava);
1
    Kocka kockakocka(strana1, strana2, strana3, strana4, strana5, strana6);
    
    for(int i = 0; i < 1   ; i++)
    {
        for(int j = 0; j < 1; j++)
        {
            for(int p = 0; p < 1; p++)
            {
                Kocka tmp;
                //tmp = *(new Kocka);
                double broj[3];
                broj[0] = -i*2;
                broj[1] = -j*2;
                broj[2] = -p*2;
                Matrica lol(3,broj);
                for(int ii = 0;ii < 6;ii++)
                {

                    //tmp.setStrana(ii,*(new Strana));  
                    //tmp.setStrana(ii,kockakocka.getStrana(ii));  
                    tmp.setStrana(ii,Strana());
                    tmp.getStrana(ii).setBoja(kockakocka.getStrana(ii).getBoja());  
                    for(int jj = 0;jj < 4;jj++)
                    {
                        tmp.getStrana(ii).setMatrica(jj,lol+kockakocka.getStrana(ii).getMatrica(jj));

                        cout << "kul"  << endl;
                        kockakocka.getStrana(ii).getMatrica(jj).ispisi();
                        (lol+kockakocka.getStrana(ii).getMatrica(jj)).ispisi();
                        lol.ispisi();
                        cout << "lol" << endl;
                        //tmp.getStrana(ii).setMatrica(jj,*(new Matrica))
                        //tmp.getStrana(ii).setMatrica(jj,kockakocka.getStrana(ii).getMatrica(jj));
                        /*cout << "lol" << endl;
                        lol.ispisi();
                        cout << "lol" << endl;
                        //tmp.getStrana(ii).getMatrica(jj).ispisi();
                        for(int kk = 0;kk<3;kk++)
                        {
                            //if(u >= 72*2) break;
                            cout << kockakocka.getStrana(ii).getMatrica(jj).getE(kk)+lol.getE(kk) << endl;
                            tmp.getStrana(ii).getMatrica(jj).setE(kk,kockakocka.getStrana(ii).getMatrica(jj).getE(kk)+lol.getE(kk));
                            //
                            cout << tmp.getStrana(ii).getMatrica(jj).getE(kk) << " ";
                        }
                        //tmp.getStrana(ii).setMatrica(jj,lol+kockakocka.getStrana(ii).getMatrica(jj));
                        //tmp.getStrana(ii).getMatrica(jj).ispisi();
                        //tmp.getStrana(ii).getMatrica(jj).ispisi();
                        cout << "lol" << endl;*/
                        tmp.getStrana(ii).getMatrica(jj).ispisi();
                    }
                }
                kocka[i][j][p] = tmp;
                cout << endl;
            }        


                cout << endl;
        }

                cout << endl;
    }
    cin.get();
    return;
}




