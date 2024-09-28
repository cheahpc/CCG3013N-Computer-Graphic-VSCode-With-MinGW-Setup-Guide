#include <windows.h>
#include <gl/glut.h>
#include "object.h"

using namespace std;

Object sprite01 = Object();

void render()
{
	glClearColor(0.15f, 0.15f, 0.15f, 1.0f); // Set background color to dark gray.
	glClear(GL_COLOR_BUFFER_BIT);

	// Canvas settings
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 800, 0, 600); // Set canvas to 800 by 600 pixels.

	// Render code here.
	glColor3f(0.0f, 1.0f, 1.0f);		// Set cyan color.
	sprite01.drawPoint(400, 300, 10.0); // Draw a red point at center of canvas.

	glColor3f(0.0f, 0.0f, 1.0f);			   // Set blue color.
	sprite01.drawLine(400, 0, 400, 280, 10.0); // Draw a green line from bottom center to middle center.

	glColor3f(1.0f, 0.0f, 0.0f); // Set red color.
	sprite01.drawQuad(300, 320,
					  500, 320,
					  500, 310,
					  300, 310);

	glColor3f(0.0f, 1.0f, 0.0f); // Set green brush.
	sprite01.drawTriangle(300, 330,
						  500, 330,
						  400, 500); // Draw a blue triangle on top of the red point.

	glFlush();	// Clear all GL executions.
	glFinish(); // Block until all GL executions are completed.
}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Primitive objects");
	glutDisplayFunc(render);
	glutMainLoop();

	system("PAUSE");
	return 0;
}
