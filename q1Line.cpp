#include <math.h>
#include <GL/glut.h>

void init(void) {
    glClearColor(0, 0, 0, 0);
	glViewport(0, 0, 500, 500);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 500, 0, 500, 1, -1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
} 

void drawLines(void) {
    glClear(GL_COLOR_BUFFER_BIT);  
    glColor3f(0.0,0.4,0.2); 
    glPointSize(3.0);  
    glBegin(GL_LINES);
    glVertex2d(0,0);
    glVertex2d(200,200);
    glEnd();
    glFlush();
} 

int main(int argc, char**argv) {
    glutInit(&argc, argv);  
    glutInitWindowPosition(10,10); 
    glutInitWindowSize(500,500); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 

    glutCreateWindow("Line Example"); 
    init(); 
    glutDisplayFunc(drawLines); 
    glutMainLoop();
}
