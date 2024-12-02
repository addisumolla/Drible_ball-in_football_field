#include <GL/glut.h>
#include<math.h>
float ballRadius;
float ballX = 0.0;
float ballY = 0.2;
float ballSpeedX = 0.1; float ballSpeedY = 0.2;

void init()
{
    glClearColor(0.0,0.7,0.0,1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}
void display()
{
//#####################################################################################################//

//polygon grass  Dark
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.0);
glVertex2f(38,0);
glVertex2f(98,0);
glVertex2f(98,600);
glVertex2f(38,600);
glEnd();

//polygon grass  Light
glBegin(GL_POLYGON);
glColor3f(0.0,0.7,0.0);
glVertex2f(98,0);
glVertex2f(156,0);
glVertex2f(156,600);
glVertex2f(98,600);

glEnd();
//polygon grass  Dark
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.0);
glVertex2f(156,0);
glVertex2f(216,0);
glVertex2f(216,600);
glVertex2f(156,600);
glEnd();

//polygon grass Light
glBegin(GL_POLYGON);
glColor3f(0.0,0.7,0.0);
glVertex2f(216,0);
glVertex2f(276,0);
glVertex2f(276,600);
glVertex2f(216,600);

glEnd();

//polygon grass  Dark
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.0);
glVertex2f(282,0);
glVertex2f(342,0);
glVertex2f(342,600);
glVertex2f(282,600);
glEnd();

//polygon grass Light
glBegin(GL_POLYGON);
glColor3f(0.0,0.7,0.0);
glVertex2f(342,0);
glVertex2f(402,0);
glVertex2f(402,600);
glVertex2f(342,600);

glEnd();

//polygon grass  Dark
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.0);
glVertex2f(402,0);
glVertex2f(462,0);
glVertex2f(462,600);
glVertex2f(402,600);
glEnd();

//polygon ended

//#####################################################################################################//

/*Filed Boundary line*/

 glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
glColor3f(1,1,1);
glVertex2f(25, 20);//l1

glVertex2f(477,20);

glVertex2f(477, 475);

glVertex2f(25, 475);

glEnd();

//#####################################################################################################//

//Center line
glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
glColor3f(1,1,1);
glVertex2f(250,20);
glVertex2f(250,475);
glEnd();


//Left 16.5 Box
 glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
glColor3f(1,1,1);
glVertex2f(25, 80);
glVertex2f(100, 80 );
glVertex2f(100, 400 );
glVertex2f(25, 400 );

glEnd();

//left penalty Box
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2f(25 , 155);//l1
    glVertex2f(61, 155);
    glVertex2f(61, 330);
    glVertex2f(25, 330);

glEnd();



//Right 16.50 Box
  glLineWidth(5.0);
glBegin(GL_LINE_LOOP);
glColor3f(1,1,1);
glVertex2f(401 , 85);//l1
glVertex2f(477, 85);
glVertex2f(477, 400);
glVertex2f(401, 400);

glEnd();


//Right penalty Box
    glLineWidth(5.0);
    glBegin(GL_LINE_LOOP);
    glColor3f(1,1,1);
    glVertex2f(441 , 155);//l1
    glVertex2f(477, 155);
    glVertex2f(477, 330);
    glVertex2f(441, 330);

glEnd();




//Penalty kick point

glPointSize(10.0);
    glBegin(GL_POINTS);
        glVertex2f(250,250);
        glVertex2f(420,240);
        glVertex2f(80,240);
glEnd();



glLineWidth(5.0);
//Center circle
    float theta;
        glColor3f(1,1,1);
        glBegin(GL_LINE_LOOP);
            for(int i=0; i<360;i++)
        {
            theta=i*3.142/180;
            //glVertex2f(250+31*cos(theta),250+62*sin(theta));
            glVertex2f(250+55*cos(theta),250+100*sin(theta));
        }
glEnd();

//Right Arc
    float theta2;
        glColor3f(1,1,1);
        glBegin(GL_LINE_LOOP);
            for(int i=120; i<=240;i++)
        {
            theta2=i*3.142/180;
            glVertex2f(428+55*cos(theta2),245+120*sin(theta2));
        }
glEnd();

//Left Arc
    float theta3;
        glColor3f(1,1,1);
        glBegin(GL_LINE_LOOP);
            for(int i=300; i<=420;i++)
        {
            theta3=i*3.142/180;
            glVertex2f(72+55*cos(theta3),243+120*sin(theta3));
        }
glEnd();


//Ball circle

glTranslatef(ballX, ballY, 0.0);

    glBegin(GL_LINES);
    glLineWidth(4.0);
  float theta4;
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            for(int i=0; i<=360;i++)
        {
            theta4=i*3.142/180;
            glVertex2f(250+30*cos(theta4),250+50*sin(theta4));
        }
glEnd();

//Ball belly

//Pentagon

glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
        glVertex2f(250,270);
        glVertex2f(263,255);
        glVertex2f(257,234);
        glVertex2f(242,234);
        glVertex2f(237,255);
glEnd();

//hexagon1

glBegin(GL_POLYGON);
  //  glColor3f(1,1,1);
   glColor3f(1.0,1.0,1.0);
        glVertex2f(250,270);
        glVertex2f(250,287);
        glVertex2f(237,294);
        glVertex2f(226,279);
        glVertex2f(226,260);
        glVertex2f(237,255);
glEnd();

//hexagon2
glBegin(GL_POLYGON);
  // glColor3f(1,1,1);
    glColor3f(1.0,0.0,0.0);
        glVertex2f(242,234);
        glVertex2f(237,255);
        glVertex2f(226,260);
        glVertex2f(221,244);
        glVertex2f(225,226);
        glVertex2f(235,218);
glEnd();

//hexagon3
glBegin(GL_POLYGON);
  //  glColor3f(1,1,1);
   glColor3f(1.0,1.0,1.0);
        glVertex2f(257,234);
        glVertex2f(264,218);
        glVertex2f(257,203);
        glVertex2f(242,203);
        glVertex2f(235,218);
        glVertex2f(242,234);
glEnd();

//hexagon4
glBegin(GL_POLYGON);
 // glColor3f(1,1,1);
    glColor3f(0.9,0.9,0.);
        glVertex2f(263,255);
        glVertex2f(273,260);
        glVertex2f(273,279);
        glVertex2f(262,294);
        glVertex2f(250,287);
        glVertex2f(250,270);
glEnd();

//hexagon5

glBegin(GL_POLYGON);
  //glColor3f(1,1,1);
    glColor3f(1.0,1.0,1.0);
        glVertex2f(273,260);
        glVertex2f(263,255);
        glVertex2f(257,234);
        glVertex2f(264,218);
        glVertex2f(276,226);
        glVertex2f(279,244);
glEnd();

glBegin(GL_LINES);
glLineWidth(1.0)
;glColor3f(0,0,0);

glVertex2f(250,268);
glVertex2f(250,289);

glVertex2f(226,261);
glVertex2f(238,254);

glVertex2f(235,217);
glVertex2f(242,235);

glVertex2f(257,235);
glVertex2f(264,218);

glVertex2f(262,255);
glVertex2f(274,260);
glEnd();

glTranslatef(-ballX, -ballY, 0.0);


    // Update ball position
      ballX += ballSpeedX;
      ballY += ballSpeedY;


    // Bounce the ball at the field boundaries

    if (ballX + ballRadius >     197 || ballX - ballRadius < -    197) {
        ballSpeedX = -ballSpeedX;
    }
    if (ballY + ballRadius >     175 || ballY - ballRadius < -    179) {
        ballSpeedY = -ballSpeedY;
    }
        glFlush();
        glutPostRedisplay();




glFlush();

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);// used to create window
    glutInitWindowPosition(70, 90);
    glutInitWindowSize(1300,700);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Football Filed");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
