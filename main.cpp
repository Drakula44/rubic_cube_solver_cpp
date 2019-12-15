#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <cstdio>

#include "grafika.h"

void drawCube()
{
    GLfloat vertices[] =
    {
        /*-1, -1, -1,   -1, -1,  1,   -1,  1,  1,   -1,  1, -1,
        1, -1, -1,    1, -1,  1,    1,  1,  1,    1,  1, -1,
        -1, -1, -1,   -1, -1,  1,    1, -1,  1,    1, -1, -1,
        -1,  1, -1,   -1,  1,  1,    1,  1,  1,    1,  1, -1,
        -1, -1, -1,   -1,  1, -1,    1,  1, -1,    1, -1, -1,
        -1, -1,  1,   -1,  1,  1,    1,  1,  1,    1, -1,  1,*/
        -1, -1, -1,   -1, -1,  1, -1, -1, -1,   -1, -1,  1,
    };
    /*GLfloat vertices[] = 
    {
        //-1, -1, -1,   -1, -1,  1,   -1,  1,  1,   -1,  1, -1
        1, -1, -1,    1, -1,  1,    1,  1,  1,    1,  1, -1
    };*/
    /*GLfloat colors[] =
    {
        0, 0, 0,   0, 0, 1,   0, 1, 1,   0, 1, 0,
        1, 0, 0,   1, 0, 1,   1, 1, 1,   1, 1, 0,
        0, 0, 0,   0, 0, 1,   1, 0, 1,   1, 0, 0,
        0, 1, 0,   0, 1, 1,   1, 1, 1,   1, 1, 0,
        0, 0, 0,   0, 1, 0,   1, 1, 0,   1, 0, 0,
        0, 0, 1,   0, 1, 1,   1, 1, 1,   1, 0, 1
    };*/
    GLfloat colors[] = 
    {
       /* 0, 0, 1,   0, 0, 1,   0, 0, 1,   0, 0, 1,
        0, 1, 0,   0, 1, 0,   0, 1, 0,  0, 1, 0,
        1, 0, 0,   1, 0, 0,   1, 0, 0,   1, 0, 0,
        1, 1, 1,   1, 1, 1,   1, 1, 1,  1, 1, 1,   
        1, 0.5,0,  1, 0.5,0,  1, 0.5,0,  1, 0.5,0,  
        1, 1, 0,    1, 1, 0,    1, 1, 0,  1, 1, 0 ,*/
        0, 0, 0,   0, 0, 0,   0, 0, 0,  0, 0, 0
    };
    static float alpha = 0;
    //attempt to rotate cube
    glRotatef(alpha, 0, 1, 0);

    /* We have a color array and a vertex array */
    /*glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glColorPointer(3, GL_FLOAT, 0, colors);*/

    /* Send data : 24 vertices */
    //glDrawArrays(GL_QUADS, 0, 28);
    glPointSize(10);
	glLineWidth(2.5); 
	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex3f(-1, -1, -1   );
	glVertex3f(-1, -1,  1);
    glEnd();
    /* Cleanup states */
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    alpha += 1;
}


int main(int argc, char** argv)
{
    Grafika *grafika = new Grafika(1024, 620);

    //while(true);
    while(!grafika->ShouldClose())
    {
        grafika->update(drawCube);
    }
    delete grafika;
    return 0;
}