#include<windows.h> // for MS Windows
#include<GL/glut.h> // glut, include glu.h and gl.h

void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f); // BG set to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // clear color buffer (background)

    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3ub(207, 91, 14); // axis
    glVertex2f(0.0f,1.0f);
    glVertex2f(0.0f,-1.0f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(1.0f,0.0f);
    glVertex2f(-1.0f,0.0f);
    glEnd();

    glColor3ub(0, 94, 184);// israel
    glBegin(GL_POLYGON);
        glVertex2f(0.1f,0.125f);
        glVertex2f(0.9f,0.125f);
        glVertex2f(0.9f,0.875f);
        glVertex2f(0.1f,0.875f);
    glEnd();
    glColor3f(1.0f,1.0f,1.0f);// israel
    glBegin(GL_POLYGON);
        glVertex2f(0.1f,0.3f);
        glVertex2f(0.9f,0.3f);
        glVertex2f(0.9f,0.7f);
        glVertex2f(0.1f,0.7f);
    glEnd();
    glColor3ub(0, 94, 184);// israel
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.4f,0.425f);
        glVertex2f(0.6f,0.425f);
        glVertex2f(0.5f,0.65f);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.4f,0.6f);
        glVertex2f(0.6f,0.6f);
        glVertex2f(0.5f,0.375f);
    glEnd();


    glColor3ub(228, 49, 43);// palestine
    glBegin(GL_POLYGON);
        glVertex2f(0.1f,-0.125f);
        glVertex2f(0.9f,-0.125f);
        glVertex2f(0.9f,-0.375f);
        glVertex2f(0.1f,-0.375f);
    glEnd();
    glColor3f(0.0f,0.0f,0.0f);// palestine
    glBegin(GL_POLYGON);
        glVertex2f(0.1f,-0.625f);
        glVertex2f(0.9f,-0.625f);
        glVertex2f(0.9f,-0.875f);
        glVertex2f(0.1f,-0.875f);
    glEnd();
    glColor3ub(20, 153, 84);// palestine
    glBegin(GL_POLYGON);
        glVertex2f(0.1f,-0.125f);
        glVertex2f(0.4f,-0.5f);
        glVertex2f(0.1f,-0.875f);
    glEnd();

    glColor3ub(0,0,0);// Syria
    glBegin(GL_POLYGON);
        glVertex2f(-0.1f,0.125f);
        glVertex2f(-0.9f,0.125f);
        glVertex2f(-0.9f,0.375f);
        glVertex2f(-0.1f,0.375f);
    glEnd();
    glColor3ub(206, 17, 38);// Syria
    glBegin(GL_POLYGON);
        glVertex2f(-0.1f,0.625f);
        glVertex2f(-0.9f,0.625f);
        glVertex2f(-0.9f,0.875f);
        glVertex2f(-0.1f,0.875f);
    glEnd();
    glColor3ub(0, 122, 61);// Syria
    glBegin(GL_POLYGON);
        glVertex2f(-0.28f,0.525f);
        glVertex2f(-0.22f,0.525f);
        glVertex2f(-0.26f,0.475f);
        glVertex2f(-0.25f,0.425f);
        glVertex2f(-0.3f,0.45f);
        glVertex2f(-0.35f,0.425f);
        glVertex2f(-0.33f,0.475f);
        glVertex2f(-0.38f,0.525f);
        glVertex2f(-0.32f,0.525f);
        glVertex2f(-0.3f,0.575f);
    glEnd();
    glColor3ub(0, 122, 61);// Syria
    glBegin(GL_POLYGON);
        glVertex2f(-0.68f,0.525f);
        glVertex2f(-0.62f,0.525f);
        glVertex2f(-0.66f,0.475f);
        glVertex2f(-0.65f,0.425f);
        glVertex2f(-0.7f,0.45f);
        glVertex2f(-0.75f,0.425f);
        glVertex2f(-0.73f,0.475f);
        glVertex2f(-0.78f,0.525f);
        glVertex2f(-0.72f,0.525f);
        glVertex2f(-0.7f,0.575f);
    glEnd();

    glColor3ub(238, 28, 37);// china
    glBegin(GL_POLYGON);
        glVertex2f(-0.1f,-0.125f);
        glVertex2f(-0.9f,-0.125f);
        glVertex2f(-0.9f,-0.875f);
        glVertex2f(-0.1f,-0.875f);
    glEnd();
    glColor3ub(255, 255, 0);// china
    glBegin(GL_POLYGON);
        glVertex2f(-0.46f,-0.45f);
        glVertex2f(-0.36f,-0.45f);
        glVertex2f(-0.44f,-0.525f);
        glVertex2f(-0.4f,-0.675f);
        glVertex2f(-0.5f,-0.575f);
        glVertex2f(-0.6f,-0.675f);
        glVertex2f(-0.56f,-0.525f);
        glVertex2f(-0.64f,-0.45f);
        glVertex2f(-0.54f,-0.45f);
        glVertex2f(-0.5f,-0.325f);
    glEnd();

    glColor3ub(0, 0, 0);// israel
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.1f,0.125f);
        glVertex2f(0.9f,0.125f);
        glVertex2f(0.9f,0.875f);
        glVertex2f(0.1f,0.875f);
    glEnd();
    glColor3ub(0, 0, 0);// palestine
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.1f,-0.125f);
        glVertex2f(0.9f,-0.125f);
        glVertex2f(0.9f,-0.875f);
        glVertex2f(0.1f,-0.875f);
    glEnd();
    glColor3ub(0, 0, 0);// syria
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.1f,0.125f);
        glVertex2f(-0.9f,0.125f);
        glVertex2f(-0.9f,0.875f);
        glVertex2f(-0.1f,0.875f);
    glEnd();



    glFlush(); // render
}
void israel(){

}

int main(int argc , char** argv){
    glutInit(&argc,argv);
    glutInitWindowSize(640,480); // set window's initial size
    glutInitWindowPosition(80,50); // set position
    glutCreateWindow("OpenGL Setup Test"); // window title
    glutDisplayFunc(display); // register display callback handler for window re-paint

    glutMainLoop();// enter the event - processing loop
    return 0;
}
