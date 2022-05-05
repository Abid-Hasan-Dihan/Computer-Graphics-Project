/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(0.52, 0.808, 0.922, 0.0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 2400, 0.0, 1800);
}
void home()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.297, 0.519, 0.152);
    glBegin(GL_POLYGON);
    glVertex2i(0, 300);
    glVertex2i(2400, 300);
    glVertex2i(2400, 0);
    glVertex2i(0, 0);
    glEnd();
    glColor3f(0.1875, 0.3672, 0.379); //Body Color
    glBegin(GL_POLYGON);
    glVertex2i(600, 1200);
    glVertex2i(1800, 1200);
    glVertex2i(1800, 300);
    glVertex2i(600, 300);
    glEnd();
  glBegin(GL_TRIANGLES); //roof color
  glColor3f(0.524, 0.528, 0.532);
    glVertex2i(1200, 1700);
    glVertex2i(500, 1200);
    glVertex2i(1900, 1200);
    glEnd();
    glColor3f(0.400, 0.404, 0.408); //Door color
    glBegin(GL_POLYGON);
    glVertex2i(1100, 950);
    glVertex2i(1300, 950);
    glVertex2i(1300, 300);
    glVertex2i(1100, 300);
    glEnd();
        glColor3f(0.18, 0.32, 0.35); //window color
    glBegin(GL_POLYGON);
    glVertex2i(1450, 1000);
    glVertex2i(1700, 1000);
    glVertex2i(1700, 700);
    glVertex2i(1450, 700);
    glEnd();




    glFlush();
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("ID:801 ,807 ,817 -> Project House 2D ");
    init();
    glutDisplayFunc(home);
    glutMainLoop();
}


