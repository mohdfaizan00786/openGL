#include <Windows.h>
#include <GL/glut.h>
#include <math.h>

void DrawCircle() 
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0, 0, -10);
	glBegin(GL_LINE_LOOP);
    for (int ii = 0; ii < 100; ii++)
	{
        float theta = 2.0f * 3.1415926f * float(ii) / float(100); 
        float x = 2.5 * cosf(theta); 
        float y = 2.5 * sinf(theta); 
        glVertex2f(x + 0, y + 0);
    }
    glEnd();
    glutSwapBuffers();
}


void init()
{
    glViewport(0, 0, 300,300);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    gluPerspective(45, (float)300 / 300, .1, 100);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(300,300);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("Circle");
    init();
    glutDisplayFunc(DrawCircle);
    glutMainLoop();
}
