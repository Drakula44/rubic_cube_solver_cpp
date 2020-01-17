#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <cstdio>

class Grafika
{
private:
    GLFWwindow* window;
public:
    Grafika(const int resX, const int resY);
    ~Grafika();
    static void controls(GLFWwindow* window, int key, int scancode, int action, int mods);
    void update(void drawCube());
    bool ShouldClose();
};
