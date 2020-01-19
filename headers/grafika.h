#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <cstdio>
#include "kocka.h"
class Grafika
{
private:
    GLFWwindow* window;
    Kocka kocka[3][3][3];
    Matrica kocka_proba[3][3][3][6][4];
    GLfloat *vertices;
    GLfloat *colors;
    static int rotation;
    static double rangle;
    
    static double rx,ry,rz;
public:
    Grafika(const int resX, const int resY);
    ~Grafika();
    static void controls(GLFWwindow* window, int key, int scancode, int action, int mods);
    void drawCube();
    void update();
    void init();
    bool ShouldClose();
    
};
//rotacije
/*
 x =  1
-x = -1
 y =  2
-y = -2
 z =  3
-z = -3

*/

