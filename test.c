#include <GL/glut.h>
#include <GL/gl.h>
#include<stdio.h>

int display () {
	glClear(GL_COLOR_BUFFER_BIT);
	//glColor3f(1.0,1.0,1.0);
	glFlush();
 return 0;
}
 
 
 
int drawSquare(int x, int y) {
	//y = 250-y;
	//x = x-250;
	y = 500-y;
 
	glPointSize(10);
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_POINTS);
	glVertex2f(x , y);
	glEnd();
	glutSwapBuffers();
	//glFlush();
  return 0;
  
}
 
 
 
 
 
int mouse(int bin, int state , int x , int y) {
	if(bin == GLUT_LEFT_BUTTON &amp;&amp; state == GLUT_DOWN) drawSquare(x,y);
	return 0;
}
 
 
int init () {
	/* select clearing (background) color */
	glClearColor (1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
 
	glViewport( 0,0, 500, 500 );
	glMatrixMode( GL_PROJECTION );
	glOrtho( 0.0, 500.0, 0.0, 500.0, 1.0, -1.0 );
 
	/* initialize viewing values */
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	return 0;
}
 
/*Main*/
 
int main (int argc,char** argv){
	glutInit(&amp;argc,argv);
	glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
	glutInitWindowSize(500,500);
	/*Set the posotion of window*/
	glutInitWindowPosition(0,0);
	glutCreateWindow("My Vindow");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	init();
	glutMainLoop();
	return 0; 
 
 
}
