/* Program program to display a polygon */
#include<GL/glut.h>	  

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0.5,0.0,0.0);
		glVertex3f(0.5,0.5,0.0);
		glVertex3f(0.0,0.5,0.0);
	glEnd();
	glFlush();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(300,300);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Polygon");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
