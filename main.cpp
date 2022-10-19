#include <windows.h>
#include <GL/glut.h>
#include <GL/glut.h>

<<<<<<< HEAD
   //Queen Isabel Felicya T---------------------------------------------------------------------------
    void update(int value) {
     _angle += 1.5f;
     if (_angle > 360) {
      _angle -= 360;
     }
     glutPostRedisplay();
     glutTimerFunc(25, update, 0);
    }
    int main(int argc, char** argv) {
     //Initialize GLUT
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
     glutInitWindowSize(600, 600);
     //Create the window
     glutCreateWindow("Handphone");
     initRendering();
     //Set handler functions
     glutDisplayFunc(drawScene);
     glutReshapeFunc(handleResize);
     update(0);
     glutMainLoop();
     return 0;
    }
=======
 //La Ode Muhammad Firza Fahrezi
     //Add ambient light
     GLfloat ambientColor[] = {0.2f, 0.2f, 0.2f, 1.0f}; //Color (0.2, 0.2, 0.2)
     glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);
     //Add positioned light
     GLfloat lightColor0[] = {0.5f, 0.5f, 0.5f, 1.0f}; //Color (0.5, 0.5, 0.5)
     GLfloat lightPos0[] = {0.0f, -8.0f, 8.0f, 1.0f}; //Positioned at (4, 0, 8)
     glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
     glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
     //Add directed light
     GLfloat lightColor1[] = {0.5f, 0.2f, 0.2f, 1.0f}; //Color (0.5, 0.2, 0.2)
     GLfloat lightPos1[] = {-1.0f, 0.5f, 0.5f, 0.0f};
     glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
     glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);
     glRotatef(10, 1.0f, 0.0f, 0.0f);
     glRotatef(-0.0, 0.0f, 0.0f, 1.0f);
     glRotatef(_angle,0.0f, 1.0f, 0.0f);
     glColor3f(1.1f, 1.1f, 1.1f);
     glBegin(GL_QUADS);

     // E1E121036_NIRWANA
     //front depan atas
     glColor3f(5.1f, 5.1f, 1.1f);
     glVertex3f(-0.9f, 0.2f, -1.8f);
     glVertex3f(0.9f, 0.2f, -1.8f);
     glVertex3f(0.9f, 3.5f, -1.8f);
     glVertex3f(-0.9f, 3.5f, -1.8f);
     //back belakang atas
     glVertex3f(-0.9f, 0.2f, -2.0f);
     glVertex3f(0.9f, 0.2f, -2.0f);
     glVertex3f(0.9f, 3.5f, -2.0f);
     glVertex3f(-0.9f, 3.5f, -2.0f);

>>>>>>> 3529879fb32803d832e3d880229eddadd0dc9952
