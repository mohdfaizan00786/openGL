#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<iostream>
#include<math.h>
using namespace std;
float angle=1.0;
void createcircle () {
// Create the circle in the coordinates origin
const int sides = 20;  // The amount of segment to create the circle
const double radius = 10; // The radius of the circle
 glBegin(GL_LINE_LOOP);
 for (int a = 0; a < 360; a += 360 / sides)
  {
    double heading = a * 3.1415926535897932384626433832795 / 180;
    glVertex2d(cos(heading) * radius, sin(heading) * radius);
  }

glEnd();
}

void RotateCircle(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1.0, 1.0, 1.0);

  glMatrixMode(GL_MODELVIEW);

    glTranslatef(0,3,0);
    glRotatef(angle, 1.0, 0.0, 0.0);
    glRotatef(angle, 0.0, 1.0, 0.0);
    glRotatef(angle, 0.0, 0.0, 1.0);
    createcircle();
    glutSwapBuffers();

}


int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitWindowSize(500, 500);
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
  glutCreateWindow("Assignment# 3");
  glutDisplayFunc(RotateCircle);
  glutIdleFunc(RotateCircle);
  glOrtho(-30.0, 30.0, -30.0, 30.0, -30.0, 30.0);
  glutMainLoop();
  return(0);
}
// //    #include <GL/gl.h>
//#include <math.h>
//#include <GL/glut.h>
//
//
//typedef struct
//{
//float x;
//float y;
//}CIRCLE;
//
//CIRCLE circle;
//
//float rot = 0;
//
//void createcircle (int k, int r, int h) {
//    glBegin(GL_LINES);
//    for (double i = 0; i < 180; i++)
//    {
//    circle.x = r * cos(i) - h;
//    circle.y = r * sin(i) + k;
//    glVertex3f(circle.x + k,circle.y - h,0);
//   
//    circle.x = r * cos(i + 0.1) - h;
//    circle.y = r * sin(i + 0.1) + k;
//    glVertex3f(circle.x + k,circle.y - h,0);
//    }
//    glEnd();
//}
//
//void display (void) {
//    glClearColor (0.0,0.0,0.0,1.0);
//    glClear (GL_COLOR_BUFFER_BIT);
//    glLoadIdentity();
//    glTranslatef(0,0,-20);
//    glRotatef(rot,0,1,0);
//    glRotatef(rot,1,0,0);
//    glRotatef(rot,0,0,1);
//    glColor3f(1,1,1);
//    createcircle(0,10,0);
//    glRotatef(rot,0,1,0);
//    glRotatef(rot,1,0,0);
//    glRotatef(rot,0,0,1);
//    glColor3f(1,0,0);
//    createcircle(-2,8,-2);
//    glRotatef(rot,0,1,0);
//    glRotatef(rot,1,0,0);
//    glRotatef(rot,0,0,1);
//    glColor3f(0,1,0);
//    createcircle(-1,6,-1);
//    glRotatef(rot,0,1,0);
//    glRotatef(rot,1,0,0);
//    glRotatef(rot,0,0,1);
//    glColor3f(0,0,1);
//    createcircle(2,4,2);
//    glRotatef(rot,0,1,0);
//    glRotatef(rot,1,0,0);
//    glRotatef(rot,0,0,1);
//    glColor3f(0,1,1);
//    createcircle(1,2,1);
//    glutSwapBuffers();
//    rot++;
//}
//
//void reshape (int w, int h) {
//    glViewport (0, 0, (GLsizei)w, (GLsizei)h);
//    glMatrixMode (GL_PROJECTION);
//    glLoadIdentity ();
//    gluPerspective (60, (GLfloat)w / (GLfloat)h, 0.1, 100.0);
//    glMatrixMode (GL_MODELVIEW);
//}
//
//int main (int argc, char **argv) {
//    glutInit (&argc, argv);
//    glutInitDisplayMode (GLUT_DOUBLE);
//    glutInitWindowSize (500, 500);
//    glutInitWindowPosition (100, 100);
//    glutCreateWindow ("A basic OpenGL Window");
//
//    glutDisplayFunc (display);
//    glutIdleFunc (display);
//    glutReshapeFunc (reshape);
//    glutMainLoop ();
//    return 0;
//}
