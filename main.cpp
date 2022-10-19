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
