#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>


static void on_display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}


void graphicsInitialisation()
{
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,700);
    glutCreateWindow("Come on if you can");
    glutDisplayFunc(on_display);
    glClearColor(0.7,0.4,0.7,0);
    return;
}


int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);   
    graphicsInitialisation();
    glutMainLoop();

    return 0;
}

