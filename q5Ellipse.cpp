#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

#define h 0.0			//Center x
#define k 0.0			//Center y	
#define a 80.0		    //Radius x
#define b 60.0		    //Radius y

 void display(void)
{
 	
	double I,J;
	int i,j;
	glClear (GL_COLOR_BUFFER_BIT);
 	glColor3f (1.0, 0.0, 1.0);
 	glBegin(GL_POINTS);
 	glVertex2s(h,k);
 	for( i=0 ; i<=a ; i+=1)
	{ 
 		J=sqrt(1 - (i*i)/(a*a))*b;
 		j=(int)(J);
 		glVertex2s(h+i,k+j);
 		glVertex2s(h-i,k+j);
 		glVertex2s(h-i,k-j);
 		glVertex2s(h+i,k-j);
	}
 glEnd();
 glFlush();
 }
 
void init(void)
 {
 glClearColor (0.0, 0.0, 0.0, 0.0);
 glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
 }
 
int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize (500, 500);
 glutInitWindowPosition (100, 100);
 glutCreateWindow ("Ellipse");
 init ();
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}
