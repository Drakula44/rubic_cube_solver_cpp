#include "grafika.h"

void Grafika::controls(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if(action == GLFW_PRESS)
        if(key == GLFW_KEY_ESCAPE)
            glfwSetWindowShouldClose(window, GL_TRUE);
}

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
}

void Grafika::update(void drawCube())
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

    // Update Screen
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