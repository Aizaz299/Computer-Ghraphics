Shabab altaf 01-134151-071
Aizaz ur rehman 01-134142-009
Code:
#include<iostream> 
#include<stdlib.h>
#include<math.h>
#include "glut.h"
#include <conio.h>
#include <windows.h>


float angle = 0.0f;
float lx = 0.0f, lz = -1.0f;
float x = 0.0f, z = 5.0f;
float deltaAngle = 0.0f;
float deltaMove = 0;

static double year = 0, day = 0, position1 = 2, position2 = 10, position3 = 15, rate = 0.000, positionobs = 1.95, positionobs1 = 2.75, positionobs2 = 3.75, positiontree1 = 40, positiontree2 = 30;
int score = 0;

void reshape(int w, int h) {
	if (h == 0)
		h = 1;
	float ratio = w * 1.0 / h;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glViewport(0, 0, w, h);
	gluPerspective(45.0f, ratio, 0.1f, 100.0f);
	glMatrixMode(GL_MODELVIEW);
}

void groundroad()                   //GroundRoad
{
	glColor3f(0, 1, 0);
	glPushMatrix();
	glScalef(1, 50, 0);                          //Green BackGround
									  //glPopMatrix();

	glColor3f(0, 1, 0);
	//glPushMatrix();
	glScalef(1.1, 10, 0);
                         //Green BackGround
	glPopMatrix();


	glPushMatrix();
	glColor3f(0, 1, 0);
	glScalef(-1, 50, 0);                          //Green BackGround
	glPopMatrix();


	glTranslatef(5, 0, .01);

	glPushMatrix();
	glScalef(.25, 50, 1);
	glColor3f(0.411765, 0.411765, 0.411765);                 //Black Road
	glPopMatrix();


	glPushMatrix();
	glTranslatef(1.5, -1.3, .01);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 250; i++)
	{
		glTranslatef(0, 2, 0);
		glRectf(0, 0, .5, 1);       //White Bricks on Road
	}

	glPopMatrix();

	glPushMatrix();
	glTranslatef(3.5, -1.3, .01);
	glColor3f(1, 0.54902, 0);
	for (int i = 0; i < 500; i++)
	{
		glTranslatef(0, 1, 0);
		glRectf(0, 0, .5, 1);       //Yellow line on Road
	}

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-.5, -1.3, .01);
	glColor3f(1, 0.54902, 0);
	for (int i = 0; i < 500; i++)
	{
		glTranslatef(0, 1, 0);
		glRectf(0, 0, .5, 1);       //Yellow line on Road
	}

	glPopMatrix();

	glPushMatrix();
	glTranslatef(4, 1.3, -1);
	glColor3f(1, 0.54902, 0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(9, 1.3, -1);
	glColor3f(0.721569, 0.52549, 0.0431373);
	glRectf(0, 0, 22, 600);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(15, -1.3, .01);
	glColor3f(1, 0.54902, 0);
	for (int i = 0; i < 500; i++)
	{
		glTranslatef(0, 1, 0);
		glRectf(0, 0, .5, 1);       //track 1
	}

	glPopMatrix();

	glPushMatrix();
	glTranslatef(21, -1.3, .01);
	glColor3f(1, 0.54902, 0);
	for (int i = 0; i < 500; i++)
	{
		glTranslatef(0, 1, 0);
		glRectf(0, 0, .5, 1);       //track
	}

	glPopMatrix();

	glPushMatrix();
	glTranslatef(19, 20, 2.5);
	glColor3f(0, 0, 1);
	glScalef(3, 8, 2.5);
	glutSolidCube(2);
	glPopMatrix();

}

void tree()
{


	glTranslatef(0.0f, 1.75f, 0.0f);

	glColor3f(0.0, 0.8, 0.0);
	glRotatef(-90.0, 1.0, 0.0, 0.0);
	glTranslatef(0.0f, 1.0f, 0.0f);
	glutSolidCone(0.6f, 2, 2, 2);


}

void drawcar()
{
	glClearColor(0, 0, 1, 0);
	glColor3f(0.2f, 0.0f, 0.0f);
	glRotatef(180.0, 0, 1, 0);
	glTranslatef(day, 0.8, year);
	glEnable(GL_BLEND);//TRANCPARENCY1
	glBlendFunc(GL_ONE, GL_ZERO);//TRANCPARENCY2
								 //glColor3f(1.0,1.0,1.0);
								 // glBegin(
								 //glVertex3f(

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();


	// top filling
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(.52, 0.56, 0.7);//n
	glEnd();

	//back filling
	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();






	glBegin(GL_POLYGON);
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.14, 0.22, 0.7);//l
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(0.0, -0.2, 0.7);//oo



	glEnd();
	//
	glBegin(GL_POLYGON);

	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, -0.2, -0.7);//pp'

	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(0.0, -0.2, -0.7);//oo'

	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, 0.7);//bb
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, 0.5, 0.7);//ee
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, 0.7);//ff
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.12, 0.5, 0.7);//ii
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.76, .22, 0.7);//m
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//0'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, -0.7);//bb'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, 0.5, -0.7);//ee'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, -0.7);//ff'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.12, 0.5, -0.7);//ii'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.76, .22, -0.7);//m'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.24, -.2, -0.7);//h'
	glEnd();


	// door1 body- rear, near
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();

	// door body- rear, far
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'
	glEnd();

	// door2  body- near, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();



	// door2  body- far, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();

	glTranslatef(-.58, -.52, 0.7);//translate to 1st tyre
	glColor3f(0.09, 0.09, 0.09);// tyre color********
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(1.68, 0.0, 0.0);//translate to 2nd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);

	glTranslatef(0.0, 0.0, -1.4);//translate to 3rd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(-1.68, 0.0, 0.0);//translate to 4th tyre which is behind 1st tyre i.e rear .back
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(.58, .52, 0.7);//translate to origin
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.40);

	glutSolidTorus(0.2f, .2f, 10, 25);

	glTranslatef(0.0, 0.0, 1.40);
	glRotatef(270.0, 0.0, 1.0, 0.0);


	//bottom filling
	glBegin(GL_POLYGON);
	glColor3f(0.25, 0.25, 0.25);
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.81, -0.48, 0.7);//f
	glEnd();




	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-1.12, -.48, 0.7);//a

	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-0.86, -.48, 0.7);//b
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.74, -0.2, 0.7);//c
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-.42, -.2, 0.7);//d
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.94, -0.2, 0.7);//g
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.38, -.48, 0.7);//i
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();




	//********************************************************************************************8


	// door outline- rear, front
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp


	glEnd();



	// door2 outline- near, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	// door2  outline- far, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	// door outline- rear, far
	glBegin(GL_LINE_LOOP);

	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'


	glEnd();
	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j

	glEnd();

	glColor3f(0.0, 0.0, 1.0);


	glEnd();


	////car code ends here
	glColor3f(0.0, 0.0, 1.0);

}

void obstacle()
{
	glClearColor(0, 0, 1, 0);
	glColor3f(0.0f, 0.7f, 0.0f);
	glRotatef(180.0, 0, 1, 0);
	glTranslatef(position1, 0.8, positionobs);
	glEnable(GL_BLEND);//TRANCPARENCY1
	glBlendFunc(GL_ONE, GL_ZERO);//TRANCPARENCY2
								 //glColor3f(1.0,1.0,1.0);
								 // glBegin(
								 //glVertex3f(

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();


	// top filling
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(.52, 0.56, 0.7);//n
	glEnd();

	//back filling
	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();






	glBegin(GL_POLYGON);
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.14, 0.22, 0.7);//l
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(0.0, -0.2, 0.7);//oo



	glEnd();
	//
	glBegin(GL_POLYGON);

	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, -0.2, -0.7);//pp'

	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(0.0, -0.2, -0.7);//oo'

	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, 0.7);//bb
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, 0.5, 0.7);//ee
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, 0.7);//ff
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.12, 0.5, 0.7);//ii
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.76, .22, 0.7);//m
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//0'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, -0.7);//bb'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, 0.5, -0.7);//ee'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, -0.7);//ff'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.12, 0.5, -0.7);//ii'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.76, .22, -0.7);//m'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.24, -.2, -0.7);//h'
	glEnd();


	// door1 body- rear, near
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();

	// door body- rear, far
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'
	glEnd();

	// door2  body- near, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();



	// door2  body- far, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();

	glTranslatef(-.58, -.52, 0.7);//translate to 1st tyre
	glColor3f(0.09, 0.09, 0.09);// tyre color********
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(1.68, 0.0, 0.0);//translate to 2nd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);

	glTranslatef(0.0, 0.0, -1.4);//translate to 3rd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(-1.68, 0.0, 0.0);//translate to 4th tyre which is behind 1st tyre i.e rear .back
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(.58, .52, 0.7);//translate to origin
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.40);

	glutSolidTorus(0.2f, .2f, 10, 25);

	glTranslatef(0.0, 0.0, 1.40);
	glRotatef(270.0, 0.0, 1.0, 0.0);


	//bottom filling
	glBegin(GL_POLYGON);
	glColor3f(0.25, 0.25, 0.25);
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.81, -0.48, 0.7);//f
	glEnd();




	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-1.12, -.48, 0.7);//a

	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-0.86, -.48, 0.7);//b
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.74, -0.2, 0.7);//c
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-.42, -.2, 0.7);//d
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.94, -0.2, 0.7);//g
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.38, -.48, 0.7);//i
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();




	//********************************************************************************************8


	// door outline- rear, front
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp


	glEnd();



	// door2 outline- near, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	// door2  outline- far, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	// door outline- rear, far
	glBegin(GL_LINE_LOOP);

	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'


	glEnd();
	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j

	glEnd();

	glColor3f(0.0, 0.0, 1.0);

	// transparent objects are placed next ..

	
	////car code ends here
	glColor3f(0.0, 0.0, 1.0);
}



void obstacle1()
{
	glClearColor(0, 0, 1, 0);
	glColor3f(0.2f, 0.0f, 0.0f);

	glTranslatef(position2, 0.8, positionobs1);
	glEnable(GL_BLEND);//TRANCPARENCY1
	glBlendFunc(GL_ONE, GL_ZERO);//TRANCPARENCY2
								 //glColor3f(1.0,1.0,1.0);
								 // glBegin(
								 //glVertex3f(

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();


	// top filling
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(.52, 0.56, 0.7);//n
	glEnd();

	//back filling
	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();






	glBegin(GL_POLYGON);
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.14, 0.22, 0.7);//l
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(0.0, -0.2, 0.7);//oo



	glEnd();
	//
	glBegin(GL_POLYGON);

	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, -0.2, -0.7);//pp'

	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(0.0, -0.2, -0.7);//oo'

	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, 0.7);//bb
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, 0.5, 0.7);//ee
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, 0.7);//ff
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.12, 0.5, 0.7);//ii
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.76, .22, 0.7);//m
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//0'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, -0.7);//bb'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, 0.5, -0.7);//ee'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, -0.7);//ff'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.12, 0.5, -0.7);//ii'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.76, .22, -0.7);//m'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.24, -.2, -0.7);//h'
	glEnd();


	// door1 body- rear, near
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();

	// door body- rear, far
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'
	glEnd();

	// door2  body- near, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();



	// door2  body- far, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();

	glTranslatef(-.58, -.52, 0.7);//translate to 1st tyre
	glColor3f(0.09, 0.09, 0.09);// tyre color********
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(1.68, 0.0, 0.0);//translate to 2nd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);

	glTranslatef(0.0, 0.0, -1.4);//translate to 3rd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(-1.68, 0.0, 0.0);//translate to 4th tyre which is behind 1st tyre i.e rear .back
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(.58, .52, 0.7);//translate to origin
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.40);

	glutSolidTorus(0.2f, .2f, 10, 25);

	glTranslatef(0.0, 0.0, 1.40);
	glRotatef(270.0, 0.0, 1.0, 0.0);


	//bottom filling
	glBegin(GL_POLYGON);
	glColor3f(0.25, 0.25, 0.25);
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.81, -0.48, 0.7);//f
	glEnd();




	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-1.12, -.48, 0.7);//a

	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-0.86, -.48, 0.7);//b
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.74, -0.2, 0.7);//c
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-.42, -.2, 0.7);//d
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.94, -0.2, 0.7);//g
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.38, -.48, 0.7);//i
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();




	//********************************************************************************************8


	// door outline- rear, front
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp


	glEnd();



	// door2 outline- near, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	// door2  outline- far, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	// door outline- rear, far
	glBegin(GL_LINE_LOOP);

	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'


	glEnd();
	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j

	glEnd();

	glColor3f(0.0, 0.0, 1.0);

	
	////car code ends here
	glColor3f(0.0, 0.0, 1.0);
}

void obstacle2()
{
	glClearColor(0, 0, 1, 0);
	glColor3f(0.2f, 0.1f, 0.8f);

	glTranslatef(position3, 0.8, positionobs2);
	glEnable(GL_BLEND);//TRANCPARENCY1
	glBlendFunc(GL_ONE, GL_ZERO);//TRANCPARENCY2
								 //glColor3f(1.0,1.0,1.0);
								 // glBegin(
								 //glVertex3f(

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, 0.7);//0
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();


	// top filling
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-0.1, 0.6, 0.7);//o
	glVertex3f(-0.1, 0.6, -0.7);//o'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(.52, 0.56, 0.7);//n
	glEnd();

	//back filling
	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();






	glBegin(GL_POLYGON);
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.76, .22, 0.7);//m
	glVertex3f(0.76, .22, -0.7);//m'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.14, 0.22, 0.7);//l
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.2, -.28, 0.7);//r
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(0.0, -0.2, 0.7);//oo



	glEnd();
	//
	glBegin(GL_POLYGON);

	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.2, -.28, -0.7);//r'
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, -0.2, -0.7);//pp'

	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(0.0, -0.2, -0.7);//oo'

	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, 0.7);//q
	glVertex3f(-1.08, 0.22, 0.7);//dd
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(-1.02, 0.6, 0.7);//p
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, 0.7);//p
	glVertex3f(-0.98, 0.5, 0.7);//aa
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(-0.1, 0.6, 0.7);//0
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, 0.7);//bb
	glVertex3f(-0.64, 0.22, 0.7);//cc
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(-0.5, 0.5, 0.7);//ee
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, 0.7);//ff
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.12, 0.5, 0.7);//ii
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, 0.7);//n
	glVertex3f(0.44, 0.5, 0.7);//jj
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.76, .22, 0.7);//m
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, 0.7);//l
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, -.44, 0.7);//j
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.2, 0.22, -0.7);//q'
	glVertex3f(-1.08, 0.22, -0.7);//dd'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.02, 0.6, -0.7);//p'
	glVertex3f(-0.98, 0.5, -0.7);//aa'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(-0.1, 0.6, -0.7);//0'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.64, 0.5, -0.7);//bb'
	glVertex3f(-0.64, 0.22, -0.7);//cc'
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(-0.5, 0.5, -0.7);//ee'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.5, -0.7);//ff'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.12, 0.5, -0.7);//ii'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.52, 0.56, -0.7);//n'
	glVertex3f(0.44, 0.5, -0.7);//jj'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.76, .22, -0.7);//m'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.14, 0.22, -0.7);//l'
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.24, -.2, -0.7);//h'
	glEnd();


	// door1 body- rear, near
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp
	glEnd();

	// door body- rear, far
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'
	glEnd();

	// door2  body- near, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();



	// door2  body- far, driver

	glBegin(GL_POLYGON);
	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();

	glTranslatef(-.58, -.52, 0.7);//translate to 1st tyre
	glColor3f(0.09, 0.09, 0.09);// tyre color********
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(1.68, 0.0, 0.0);//translate to 2nd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);

	glTranslatef(0.0, 0.0, -1.4);//translate to 3rd tyre
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(-1.68, 0.0, 0.0);//translate to 4th tyre which is behind 1st tyre i.e rear .back
	glutSolidTorus(0.12f, .14f, 10, 25);
	glTranslatef(.58, .52, 0.7);//translate to origin
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glTranslatef(0.0, 0.0, -1.40);

	glutSolidTorus(0.2f, .2f, 10, 25);

	glTranslatef(0.0, 0.0, 1.40);
	glRotatef(270.0, 0.0, 1.0, 0.0);


	//bottom filling
	glBegin(GL_POLYGON);
	glColor3f(0.25, 0.25, 0.25);
	glVertex3f(-0.3, -.48, 0.7);//e
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.81, -0.48, 0.7);//f
	glEnd();




	glBegin(GL_POLYGON);
	glVertex3f(-.42, -.2, 0.7);//d
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-0.3, -.48, -0.7);//e'
	glVertex3f(-0.3, -.48, 0.7);//e
	glEnd();

	glBegin(GL_POLYGON);

	glVertex3f(-1.2, -.28, 0.7);//r
	glVertex3f(-1.2, -.28, -0.7);//r'
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-1.12, -.48, 0.7);//a

	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.12, -.48, 0.7);//a
	glVertex3f(-1.12, -.48, -0.7);//a'
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-0.86, -.48, 0.7);//b
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.86, -.48, 0.7);//b
	glVertex3f(-0.86, -.48, -0.7);//b'
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.74, -0.2, 0.7);//c
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-.74, -0.2, 0.7);//c
	glVertex3f(-.74, -0.2, -0.7);//c'
	glVertex3f(-.42, -.2, -0.7);//d'
	glVertex3f(-.42, -.2, 0.7);//d
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.81, -0.48, 0.7);//f
	glVertex3f(.81, -0.48, -0.7);//f'
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(.94, -0.2, 0.7);//g
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(.94, -0.2, 0.7);//g
	glVertex3f(.94, -0.2, -0.7);//g'
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.24, -.2, 0.7);//h
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.24, -.2, 0.7);//h
	glVertex3f(1.24, -.2, -0.7);//h'
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.38, -.48, 0.7);//i
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(1.38, -.48, 0.7);//i
	glVertex3f(1.38, -.48, -0.7);//i'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j
	glEnd();




	//********************************************************************************************8


	// door outline- rear, front
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-0.5, 0.22, 0.7);//hh
	glVertex3f(0.0, 0.22, 0.7);//gg
	glVertex3f(0.0, -0.2, 0.7);//oo
	glVertex3f(-0.5, -0.2, 0.7);//pp


	glEnd();



	// door2 outline- near, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, 0.7);//ll
	glVertex3f(0.62, 0.22, 0.7);//kk
	glVertex3f(0.62, -0.2, 0.7);//mm
	glVertex3f(0.12, -0.2, 0.7);//nn
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	// door2  outline- far, driver

	glBegin(GL_LINE_LOOP);

	glVertex3f(0.12, 0.22, -0.7);//ll'
	glVertex3f(0.62, 0.22, -0.7);//kk'
	glVertex3f(0.62, -0.2, -0.7);//mm'
	glVertex3f(0.12, -0.2, -0.7);//nn'
	glEnd();

	// door outline- rear, far
	glBegin(GL_LINE_LOOP);

	glVertex3f(-0.5, 0.22, -0.7);//hh'
	glVertex3f(0.0, 0.22, -0.7);//gg'
	glVertex3f(0.0, -0.2, -0.7);//oo'
	glVertex3f(-0.5, -0.2, -0.7);//pp'


	glEnd();
	glBegin(GL_POLYGON);//front**
	glVertex3f(1.52, .14, 0.7);//k
	glVertex3f(1.52, .14, -0.7);//k'
	glVertex3f(1.52, -.44, -0.7);//j'
	glVertex3f(1.52, -.44, 0.7);//j

	glEnd();

	glColor3f(0.0, 0.0, 1.0);

	// transparent objects are placed next ..

	
	////car code ends here
	glColor3f(0.0, 0.0, 1.0);
}

void House()
{
	glPushMatrix();
	glTranslatef(-16, 2, 2);
	glColor3f(0, 0, 0.4431373);
	glutSolidCube(4);

	glPushMatrix();
	glTranslatef(-27.5, 3, 1.5);
	glRotatef(90, 0, 1, 0);
	glColor3f(1, 1, 1);
	glRectf(0, 0, .5, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-27.5, 1, 1.5);
	glRotatef(90, 0, 1, 0);
	glColor3f(1, 1, 1);
	glRectf(0, 0, .5, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-27.5, -1, 1.5);
	glRotatef(90, 0, 1, 0);
	glColor3f(1, 1, 1);
	glRectf(0, 0, .5, 1);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-27.5, 3, -.5);
	glRotatef(90, 0, 1, 0);
	glColor3f(1, 1, 1);
	glRectf(0, 0, .5, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-27.5, 1, -.5);
	glRotatef(90, 0, 1, 0);
	glColor3f(1, 1, 1);
	glRectf(0, 0, .5, 1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-27.5, -1, -.5);
	glRotatef(90, 0, 1, 0);
	glColor3f(1, 1, 1);
	glRectf(0, 0, .5, 1);
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-16, 5, 2);
	glColor3f(0.721569, 0.52549, 0.4431373);
	glutSolidCube(4);
	glPopMatrix();

}

void computePos(float deltaMove)
{

	x += deltaMove * lx * 0.1f;
	z += deltaMove * lz * 0.1f;
}

void computeDir(float deltaAngle)
{

	angle += deltaAngle;
	lx = sin(angle);
	lz = -cos(angle);
}



void display(void) {
	if (deltaMove)
		computePos(deltaMove);
	if (deltaAngle)
		computeDir(deltaAngle);

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	///// Camera
	gluLookAt(x, 1.0f, z, x + lx, 1.0f, z + lz, 0.0f, 5.0f, 0.0f);
	
	/////World
	glColor3f(0.2f, 0.8f, 0.0f);
	glBegin(GL_QUADS);
	glVertex3f(-500.0f, 0.0f, -500.0f);
	glVertex3f(-500.0f, 0.0f, 500.0f);
	glColor3f(0.8f, 0.2f, 0.0f);
	glVertex3f(500.0f, 0.0f, 500.0f);
	glVertex3f(500.0f, 0.0f, -500.0f);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glPushMatrix();
	glRotatef(90, 0, 1, 0);
	//glRotatef(90, 1, 0, 0);
	glTranslatef(-8.5, 0.1, -2);
	glRotatef(90, 1, 0, 0);
	groundroad();
	glPopMatrix();

	//building 1
	glPushMatrix();
	
	glTranslatef(40.0, 0.0, -10.0);
	House();
	glTranslatef(0.0, 0.0, -7.0);
	House();
	glTranslatef(-20.0, 0.0, 2.0);
	House();
	glTranslatef(8.0, 0.0, 7.0);
	House();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 0.0);
	//////////Own car
	drawcar();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(positiontree1, -1.0, 10.0);
	////////// Trees
	tree();
	while (positiontree1 != 0)
	{

		if (positiontree1 < -6)
		{
			positiontree1 = 30;
			break;
		}
		positiontree1 = positiontree1 - rate;
		break;
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(positiontree2, -1.0, 8);
	////////// Trees
	tree();
	while (positiontree2 != 0)
	{

		if (positiontree2 < -6)
		{
			positiontree2 = 40;
			break;
		}
		positiontree2 = positiontree2 - rate;
		break;
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(positiontree2, -1.0, -8);
	////////// Trees
	tree();
	while (positiontree2 != 0)
	{

		if (positiontree2 < -6)
		{
			positiontree2 = 60;
			break;
		}
		positiontree2 = positiontree2 - rate;
		break;
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(positiontree1, -1.0, -12.34);
	////////// Trees
	tree();
	while (positiontree1 != 0)
	{

		if (positiontree1 < -6)
		{
			positiontree1 = 30;
			break;
		}
		positiontree1 = positiontree1 - rate;
		break;
	}
	glPopMatrix();

	glPushMatrix();
	glTranslatef(positiontree2 - 12, -1.0, -7);
	////////// Trees
	tree();
	while (positiontree2 != 0)
	{

		if (positiontree2 < -6)
		{
			positiontree2 = 60;
			break;
		}
		positiontree2 = positiontree2 - rate;
		break;
	}
	glPopMatrix();
		glPushMatrix();
	////////////// First car
	obstacle();

	while (position1 != 0)
	{

		if (position1 < 0)
		{
			if (year > -1.35 && year < 1.35)
			{
				rate = 0;

			}
			position1 = 60;
			int scoremult = score * rate;
			score = score + scoremult;
			break;
		}
		position1 = position1 - rate;
		break;
	}
	glPopMatrix();

	//////////////////// Second Car

	glPushMatrix();
	obstacle1();

	while (position2 != 0)
	{
		if (position2 < 0)
		{
			if (year > 1.75 && year < (1.75 + 1.025))
			{
				rate = 0;

			}
			position2 = 80;
			break;
		}
		position2 = position2 - rate;
		break;
	}
	glPopMatrix();

	//////////Third Car 

	glPushMatrix();
	obstacle2();

	while (position3 != 0)
	{
		if (position3 < 0)
		{
			if (year > -2.7 && year < -1.025)
			{
				rate = 0;

			}
			position3 = 100;
			break;
		}
		position3 = position3 - rate;
		break;
	}
	glPopMatrix();

	glFlush();


	glutSwapBuffers();
}

////////Key Binds
void pressKey(int key, int xx, int yy) {

	switch (key) {
	case GLUT_KEY_LEFT: deltaAngle = -0.01f; break;
	case GLUT_KEY_RIGHT: deltaAngle = 0.01f; break;
	case GLUT_KEY_UP: deltaMove = 0.5f; break;
	case GLUT_KEY_DOWN: deltaMove = -0.5f; break;
	}
}


void releaseKey(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_LEFT:
	case GLUT_KEY_RIGHT: deltaAngle = 0.0f; break;
	case GLUT_KEY_UP:
	case GLUT_KEY_DOWN: deltaMove = 0; break;
	}
}



int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 600);
	glutCreateWindow("CG Project");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(display);
	glutSpecialFunc(pressKey);
	glutSpecialUpFunc(releaseKey);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();

	return 0;
} 
