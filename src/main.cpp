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
    return 0;
}