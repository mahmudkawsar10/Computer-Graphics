#include <GL/gl.h>
#include<GL/glut.h>

void ice();
void display1();
void display2();
void display3();
void ship();
void water();

GLint shipD1=0,shipD3=0,iceBroke=-100,iceSink=-5,shipSink=100;
void update(int value)
{
	shipD1+=20.0;

    glutPostRedisplay();
    glutTimerFunc(150,update,0);
}


void display()
{
	display1();


	if(shipD1>600 )
	{
		display2();

	}
	if(shipD1>900)
    {
        shipD3+=10;
		display3();
	}
	glFlush();
}


void display1()
{

	glClear(GL_COLOR_BUFFER_BIT);
	ice();
    glPushMatrix();
	glTranslated(shipD1,70,0.0);
	ship();
	glPopMatrix();
	water();
}

void display2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(500,50,0);
	glScaled(20,10,0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,2.5);
		glVertex2f(12.5,19.5);
		glVertex2f(15,19.5);
		glVertex2f(12.5,19.5);
		glVertex2f(13.5,18.5);
		glVertex2f(16.5,20.5);
		glVertex2f(17.5,18.5);
		glVertex2f(18.5,3.5);
		glVertex2f(19,3);
		glVertex2f(19.5,2.5);
	glEnd();
	glPopMatrix();

	iceBroke-=0.05;
	iceSink-=5;
	shipD1+=10;

	glPushMatrix();
	glColor3f(1.0,1.0,1.0);
	glTranslated(iceBroke,iceSink,0);
	glTranslated(500,50,0);
	glScaled(20,10,0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,2.5);
		glVertex2f(6,3);
		glVertex2f(8.25,3.5);
		glVertex2f(8.5,18.5);
		glVertex2f(15,17);
		glVertex2f(12.5,19.5);
		glVertex2f(8.5,9.5);
		glVertex2f(12.5,2.5);
        glVertex2f(5.5,2.5);
    glEnd();
	glPopMatrix();
    glPushMatrix();
	glTranslated(shipD1,70,0.0);
	ship();
	glPopMatrix();
	water();





}

void display3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	shipSink-=5;
	glPushMatrix();
	glTranslated(shipD3,shipSink,0.0);
	glRotated(-15,0,0,1);
	ship();
	glPopMatrix();
	water();

}


/*To draw water*/
void water()
{
		glPushMatrix();
		glTranslated(0,0,0.0);
		glColor3f(0.1,0.5,1.0);
		glBegin(GL_POLYGON);
		glVertex2f(0,0);
		glVertex2f(0,100);
		glVertex2f(3000,100);
		glVertex2f(3000,0);
		glEnd();
		glPopMatrix();
}

/* TO DRAW SHIP */
void ship()
{



    glScaled(20,20,0);
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(3.5,5.5);
        glVertex2f(3.5,8.5);
        glVertex2f(19.5,8.5);
        glVertex2f(19.5,5.5);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(1,5.5);
        glVertex2f(4,1);
        glVertex2f(19,1);
        glVertex2f(21.5,5.5);
    glEnd();
    glColor3f(0.7,0.4,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(4,5.5);
        glVertex2f(4,8);
        glVertex2f(5,8);
        glVertex2f(5,5.5);
    glEnd();
    glColor3f(0.9,0.9,0.9);
    glBegin(GL_POLYGON);
        glVertex2f(7,7.5);
        glVertex2f(7,8);
        glVertex2f(10,8);
        glVertex2f(10,7.5);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(11.5,7.5);
        glVertex2f(11.5,8);
        glVertex2f(15,8);
        glVertex2f(15,7.5);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2f(16,7.5);
        glVertex2f(16,8);
        glVertex2f(19,8);
        glVertex2f(19,7.5);
    glEnd();
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
        glVertex2f(4.5,8.5);
        glVertex2f(4.5,10);
        glVertex2f(18.5,10);
        glVertex2f(18.5,8.5);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(5.5,10);
        glVertex2f(5.5,12.9);
        glVertex2f(7,12.9);
        glVertex2f(7,10);
    glEnd();
    glColor3f(0.9,0.5,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(5.5,12.9);
        glVertex2f(5.5,13.5);
        glVertex2f(7,13.5);
        glVertex2f(7,12.9);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(8.5,10);
        glVertex2f(8.5,12.9);
        glVertex2f(10,12.9);
        glVertex2f(10,10);
    glEnd();
    glColor3f(0.9,0.5,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(8.5,12.9);
        glVertex2f(8.5,13.5);
        glVertex2f(10,13.5);
        glVertex2f(10,12.9);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(11.5,10);
        glVertex2f(11.5,12.9);
        glVertex2f(13,12.9);
        glVertex2f(13,10);
    glEnd();
    glColor3f(0.9,0.5,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(11.5,12.9);
        glVertex2f(11.5,13.5);
        glVertex2f(13,13.5);
        glVertex2f(13,12.9);
    glEnd();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(14.5,10);
        glVertex2f(14.5,12.9);
        glVertex2f(16,12.9);
        glVertex2f(16,10);
    glEnd();
    glColor3f(0.9,0.5,0.2);
    glBegin(GL_POLYGON);
        glVertex2f(14.5,12.9);
        glVertex2f(14.5,13.5);
        glVertex2f(16,13.5);
        glVertex2f(16,12.9);
    glEnd();

}
/* TO DRAW ICEBERG */
void ice()
{
	glPushMatrix();
	glTranslated(500,50,0.0);
	glScaled(20,10,0);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
		glVertex2f(5.5,2.5);

		glVertex2f(12.5,19.5);
		glVertex2f(15,19.5);
		glVertex2f(12.5,19.5);
		glVertex2f(13.5,18.5);
		glVertex2f(16.5,20.5);
		glVertex2f(17.5,18.5);
		glVertex2f(18.5,3.5);
		glVertex2f(19,3);
		glVertex2f(19.5,2.5);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(5.5,2.5);
		glVertex2f(6,3);
		glVertex2f(8.25,3.5);
		glVertex2f(8.5,18.5);
		glVertex2f(12,15);
		glVertex2f(13,17);
		glVertex2f(12.5,19.5);
		glVertex2f(8.5,9.5);
		glVertex2f(12.5,2.5);
        glVertex2f(5.5,2.5);
    glEnd();
   	glPopMatrix();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1024.0,768.0);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Destroying Titanic");
	glutDisplayFunc(display);
	glClearColor(0.1f,0.1f,0.1f,0.1f);
	gluOrtho2D(0.0,999.0,0.0,799.0);
	glutTimerFunc(100,update,0);
	glutMainLoop();
}
