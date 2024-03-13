#include<windows.h> 
#include<glut.h> 
void draw() { 
 glClear(GL_COLOR_BUFFER_BIT); 
 //First Object 
 glPushMatrix(); 
 glColor3f(1, 0, 0); 
 glutSolidTorus(5, 30, 10, 10); 
 glPopMatrix(); 
  
 //Second Object 
 glPushMatrix(); 
 glColor3f(1, 0, 0); 
 glScaled(20, 20, 20); 
 glutWireIcosahedron(); 
 glPopMatrix(); 
  
 glFlush(); 
} 
int main() { 
 glutInitWindowSize(400, 400); 
 glutCreateWindow("Lab6"); 
 glClearColor(1, 1, 1, 1); 
 glOrtho(-100, 100, -100, 100, -100, 100); 
 glutDisplayFunc(draw); 
 glutMainLoop(); 
}