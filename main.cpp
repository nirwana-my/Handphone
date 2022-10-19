#include <windows.h>
#include <GL/glut.h>
#include <GL/glut.h>

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
