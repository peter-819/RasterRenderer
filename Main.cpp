#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GLFW/glfw3.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const char* SCREEN_TITLE = "GLUT WINDOW";
void myInit() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glColor3f(1.0f, 1.0f, 1.0f);
	//glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4);
	glBegin(GL_POINTS);
	glVertex2i(400, 100);
	glEnd();
	glFlush();
}
void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	glutInitWindowPosition(100, 200);
	glutCreateWindow(SCREEN_TITLE);
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();

}