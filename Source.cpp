#include <GL\glew.h>
#include <GL/glut.h>
#include <GL\freeglut.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;

GLuint myTexture2;

char image2Path[] = "computerlast3.bmp";

//http://stackoverflow.com/questions/12518111/how-to-load-a-bmp-on-glut-to-use-it-as-a-texture
GLuint LoadTexture(const char* filename, int width, int height)

{

    GLuint texture;

    unsigned char* data;

    FILE* file;



    //The following code will read in our RAW file

    fopen_s(&file, filename, "r+");



    if (file == NULL)

    {

        cout << "Unable to open the image file" << endl << "Program will exit :(" << endl;

        //exit(0);

        return -1;

    }



    data = (unsigned char*)malloc(width * height * 3);

    fread(data, width * height * 3, 1, file);


    fclose(file);



    // reorder the image colors to RGB not BGR

    for (int i = 0; i < width * height; ++i)

    {

        int index = i * 3;

        unsigned char B, R;

        B = data[index];

        R = data[index + 2];



        data[index] = R;

        data[index + 2] = B;



    }







    glGenTextures(1, &texture);            //generate the texture with the loaded data

    glBindTexture(GL_TEXTURE_2D, texture); //bind the texture to it's array



    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE); //set texture environment parameters



    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);



    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);

    /////////////////////////////////////////



    free(data); //free the texture array



    if (glGetError() != GL_NO_ERROR)

        printf("GLError in genTexture()\n");



    return texture; //return whether it was successfull  

}

void bulding() {
    glPushMatrix();
    glTranslatef(0, .4, 0.0f);
    glPushMatrix();
    glTranslatef(0, .1, 0.0f);
    //-------1st right building------------
    glBegin(GL_QUADS);
    glColor3ub(29, 57, 78);
    glVertex2f(0.05, -0.50);
    glVertex2f(0.05, 0.15);
    glVertex2f(-0.05, 0.15);
    glVertex2f(-0.05, -0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(41, 81, 112);
    glVertex2f(0.17, -0.50);
    glVertex2f(0.17, 0.15);
    glVertex2f(0.05, 0.15);
    glVertex2f(0.05, -0.50);
    glEnd();
    //glass
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.12);
    glVertex2f(0.16, 0.13);
    glVertex2f(0.06, 0.13);
    glVertex2f(0.06, 0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.12);
    glVertex2f(0.16, 0.13);
    glVertex2f(0.06, 0.13);
    glVertex2f(0.06, 0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.10);
    glVertex2f(0.16, 0.11);
    glVertex2f(0.06, 0.11);
    glVertex2f(0.06, 0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.08);
    glVertex2f(0.16, 0.09);
    glVertex2f(0.06, 0.09);
    glVertex2f(0.06, 0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.06);
    glVertex2f(0.16, 0.07);
    glVertex2f(0.06, 0.07);
    glVertex2f(0.06, 0.06);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.04);
    glVertex2f(0.16, 0.05);
    glVertex2f(0.06, 0.05);
    glVertex2f(0.06, 0.04);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.02);
    glVertex2f(0.16, 0.03);
    glVertex2f(0.06, 0.03);
    glVertex2f(0.06, 0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, 0.0);
    glVertex2f(0.16, 0.01);
    glVertex2f(0.06, 0.01);
    glVertex2f(0.06, 0.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.02);
    glVertex2f(0.16, -0.01);
    glVertex2f(0.06, -0.01);
    glVertex2f(0.06, -0.02);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.04);
    glVertex2f(0.16, -0.03);
    glVertex2f(0.06, -0.03);
    glVertex2f(0.06, -0.04);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.06);
    glVertex2f(0.16, -0.05);
    glVertex2f(0.06, -0.05);
    glVertex2f(0.06, -0.06);
    glEnd();//
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.08);
    glVertex2f(0.16, -0.07);
    glVertex2f(0.06, -0.07);
    glVertex2f(0.06, -0.08);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.10);
    glVertex2f(0.16, -0.09);
    glVertex2f(0.06, -0.09);
    glVertex2f(0.06, -0.10);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.12);
    glVertex2f(0.16, -0.11);
    glVertex2f(0.06, -0.11);
    glVertex2f(0.06, -0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.14);
    glVertex2f(0.16, -0.13);
    glVertex2f(0.06, -0.13);
    glVertex2f(0.06, -0.14);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.16);
    glVertex2f(0.16, -0.15);
    glVertex2f(0.06, -0.15);
    glVertex2f(0.06, -0.16);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.18);
    glVertex2f(0.16, -0.17);
    glVertex2f(0.06, -0.17);
    glVertex2f(0.06, -0.18);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.20);
    glVertex2f(0.16, -0.19);
    glVertex2f(0.06, -0.19);
    glVertex2f(0.06, -0.20);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.22);
    glVertex2f(0.16, -0.21);
    glVertex2f(0.06, -0.21);
    glVertex2f(0.06, -0.22);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.24);
    glVertex2f(0.16, -0.23);
    glVertex2f(0.06, -0.23);
    glVertex2f(0.06, -0.24);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.26);
    glVertex2f(0.16, -0.25);
    glVertex2f(0.06, -0.25);
    glVertex2f(0.06, -0.26);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.28);
    glVertex2f(0.16, -0.27);
    glVertex2f(0.06, -0.27);
    glVertex2f(0.06, -0.28);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.30);
    glVertex2f(0.16, -0.29);
    glVertex2f(0.06, -0.29);
    glVertex2f(0.06, -0.30);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.32);
    glVertex2f(0.16, -0.31);
    glVertex2f(0.06, -0.31);
    glVertex2f(0.06, -0.32);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.34);
    glVertex2f(0.16, -0.33);
    glVertex2f(0.06, -0.33);
    glVertex2f(0.06, -0.34);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.36);
    glVertex2f(0.16, -0.35);
    glVertex2f(0.06, -0.35);
    glVertex2f(0.06, -0.36);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.06);
    glVertex2f(0.16, -0.05);
    glVertex2f(0.06, -0.05);
    glVertex2f(0.06, -0.06);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(193, 215, 215);
    glVertex2f(0.16, -0.06);
    glVertex2f(0.16, -0.05);
    glVertex2f(0.06, -0.05);
    glVertex2f(0.06, -0.06);
    glEnd();


    //Right blding 2

    glBegin(GL_QUADS);
    glColor3ub(149, 147, 160);
    glVertex2f(0.25, -0.50);
    glVertex2f(0.25, 0.05);
    glVertex2f(0.17, 0.05);
    glVertex2f(0.17, -0.50);
    glEnd();

    //Right blding 3

    glBegin(GL_QUADS);
    glColor3ub(133, 173, 173);
    glVertex2f(0.37, -0.50);
    glVertex2f(0.37, 0.1);
    glVertex2f(0.25, 0.1);
    glVertex2f(0.25, -0.50);
    glEnd();

    //GLASS
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.365, -0.50);
    glVertex2f(0.365, 0.085);
    glVertex2f(0.30, 0.085);
    glVertex2f(0.30, -0.50);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.29, -0.50);
    glVertex2f(0.29, 0.085);
    glVertex2f(0.255, 0.085);
    glVertex2f(0.255, -0.50);
    glEnd();



    //Right blding 5

    glBegin(GL_QUADS);
    glColor3ub(210, 219, 219);
    glVertex2f(0.53, -0.50);
    glVertex2f(0.53, 0.3);
    glVertex2f(0.37, 0.3);
    glVertex2f(0.37, -0.50);
    glEnd();


    //glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.29);
    glVertex2f(0.525, 0.28);
    glVertex2f(0.42, 0.28);
    glVertex2f(0.42, 0.29);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.27);
    glVertex2f(0.525, 0.26);
    glVertex2f(0.42, 0.26);
    glVertex2f(0.42, 0.27);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.25);
    glVertex2f(0.525, 0.24);
    glVertex2f(0.42, 0.24);
    glVertex2f(0.42, 0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.23);
    glVertex2f(0.525, 0.22);
    glVertex2f(0.42, 0.22);
    glVertex2f(0.42, 0.23);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.21);
    glVertex2f(0.525, 0.20);
    glVertex2f(0.42, 0.20);
    glVertex2f(0.42, 0.21);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.19);
    glVertex2f(0.525, 0.18);
    glVertex2f(0.42, 0.18);
    glVertex2f(0.42, 0.19);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.17);
    glVertex2f(0.525, 0.16);
    glVertex2f(0.42, 0.16);
    glVertex2f(0.42, 0.17);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.15);
    glVertex2f(0.525, 0.14);
    glVertex2f(0.42, 0.14);
    glVertex2f(0.42, 0.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.13);
    glVertex2f(0.525, 0.12);
    glVertex2f(0.42, 0.12);
    glVertex2f(0.42, 0.13);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.11);
    glVertex2f(0.525, 0.10);
    glVertex2f(0.42, 0.10);
    glVertex2f(0.42, 0.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.09);
    glVertex2f(0.525, 0.08);
    glVertex2f(0.42, 0.08);
    glVertex2f(0.42, 0.09);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.07);
    glVertex2f(0.525, 0.06);
    glVertex2f(0.42, 0.06);
    glVertex2f(0.42, 0.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.05);
    glVertex2f(0.525, 0.04);
    glVertex2f(0.42, 0.04);
    glVertex2f(0.42, 0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.03);
    glVertex2f(0.525, 0.02);
    glVertex2f(0.42, 0.02);
    glVertex2f(0.42, 0.03);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, 0.01);
    glVertex2f(0.525, 0.00);
    glVertex2f(0.42, 0.00);
    glVertex2f(0.42, 0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.01);
    glVertex2f(0.525, -0.02);
    glVertex2f(0.42, -0.02);
    glVertex2f(0.42, -0.01);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.03);
    glVertex2f(0.525, -0.04);
    glVertex2f(0.42, -0.04);
    glVertex2f(0.42, -0.03);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.05);
    glVertex2f(0.525, -0.06);
    glVertex2f(0.42, -0.06);
    glVertex2f(0.42, -0.05);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.07);
    glVertex2f(0.525, -0.08);
    glVertex2f(0.42, -0.08);
    glVertex2f(0.42, -0.07);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.09);
    glVertex2f(0.525, -0.10);
    glVertex2f(0.42, -0.10);
    glVertex2f(0.42, -0.09);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.11);
    glVertex2f(0.525, -0.12);
    glVertex2f(0.42, -0.12);
    glVertex2f(0.42, -0.11);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.13);
    glVertex2f(0.525, -0.14);
    glVertex2f(0.42, -0.14);
    glVertex2f(0.42, -0.13);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.15);
    glVertex2f(0.525, -0.16);
    glVertex2f(0.42, -0.16);
    glVertex2f(0.42, -0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.17);
    glVertex2f(0.525, -0.18);
    glVertex2f(0.42, -0.18);
    glVertex2f(0.42, -0.17);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.19);
    glVertex2f(0.525, -0.20);
    glVertex2f(0.42, -0.20);
    glVertex2f(0.42, -0.19);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.21);
    glVertex2f(0.525, -0.22);
    glVertex2f(0.42, -0.22);
    glVertex2f(0.42, -0.21);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.23);
    glVertex2f(0.525, -0.24);
    glVertex2f(0.42, -0.24);
    glVertex2f(0.42, -0.23);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.25);
    glVertex2f(0.525, -0.26);
    glVertex2f(0.42, -0.26);
    glVertex2f(0.42, -0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.27);
    glVertex2f(0.525, -0.28);
    glVertex2f(0.42, -0.28);
    glVertex2f(0.42, -0.27);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.29);
    glVertex2f(0.525, -0.30);
    glVertex2f(0.42, -0.30);
    glVertex2f(0.42, -0.29);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.31);
    glVertex2f(0.525, -0.32);
    glVertex2f(0.42, -0.32);
    glVertex2f(0.42, -0.31);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.33);
    glVertex2f(0.525, -0.34);
    glVertex2f(0.42, -0.34);
    glVertex2f(0.42, -0.33);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.35);
    glVertex2f(0.525, -0.36);
    glVertex2f(0.42, -0.36);
    glVertex2f(0.42, -0.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.37);
    glVertex2f(0.525, -0.38);
    glVertex2f(0.42, -0.38);
    glVertex2f(0.42, -0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.39);
    glVertex2f(0.525, -0.40);
    glVertex2f(0.42, -0.40);
    glVertex2f(0.42, -0.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.41);
    glVertex2f(0.525, -0.42);
    glVertex2f(0.42, -0.42);
    glVertex2f(0.42, -0.41);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.525, -0.43);
    glVertex2f(0.525, -0.44);
    glVertex2f(0.42, -0.44);
    glVertex2f(0.42, -0.43);
    glEnd();

    // Right blding 4

    glBegin(GL_QUADS);
    glColor3ub(20, 92, 114);
    glVertex2f(0.5, -0.50);
    glVertex2f(0.5, -0.21);
    glVertex2f(0.3, -0.21);
    glVertex2f(0.3, -0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(27, 123, 152);
    glVertex2f(0.75, -0.50);
    glVertex2f(0.75, -0.21);
    glVertex2f(0.5, -0.21);
    glVertex2f(0.5, -0.50);
    glEnd();

    //glass

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.23);
    glVertex2f(0.74, -0.22);
    glVertex2f(0.51, -0.22);
    glVertex2f(0.51, -0.23);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.25);
    glVertex2f(0.74, -0.24);
    glVertex2f(0.51, -0.24);
    glVertex2f(0.51, -0.25);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.27);
    glVertex2f(0.74, -0.26);
    glVertex2f(0.51, -0.26);
    glVertex2f(0.51, -0.27);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.29);
    glVertex2f(0.74, -0.28);
    glVertex2f(0.51, -0.28);
    glVertex2f(0.51, -0.29);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.31);
    glVertex2f(0.74, -0.30);
    glVertex2f(0.51, -0.30);
    glVertex2f(0.51, -0.31);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.33);
    glVertex2f(0.74, -0.32);
    glVertex2f(0.51, -0.32);
    glVertex2f(0.51, -0.33);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.35);
    glVertex2f(0.74, -0.34);
    glVertex2f(0.51, -0.34);
    glVertex2f(0.51, -0.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.37);
    glVertex2f(0.74, -0.36);
    glVertex2f(0.51, -0.36);
    glVertex2f(0.51, -0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.39);
    glVertex2f(0.74, -0.38);
    glVertex2f(0.51, -0.38);
    glVertex2f(0.51, -0.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.41);
    glVertex2f(0.74, -0.40);
    glVertex2f(0.51, -0.40);
    glVertex2f(0.51, -0.41);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.43);
    glVertex2f(0.74, -0.42);
    glVertex2f(0.51, -0.42);
    glVertex2f(0.51, -0.43);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.45);
    glVertex2f(0.74, -0.44);
    glVertex2f(0.51, -0.44);
    glVertex2f(0.51, -0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.74, -0.47);
    glVertex2f(0.74, -0.46);
    glVertex2f(0.51, -0.46);
    glVertex2f(0.51, -0.47);
    glEnd();

    //Right blding 8
    glBegin(GL_QUADS);
    glColor3ub(133, 173, 173);
    glVertex2f(0.85, -0.50);
    glVertex2f(0.85, -0.25);
    glVertex2f(0.8, -0.25);
    glVertex2f(0.8, -0.50);
    glEnd();
    //Right blding 6
    glBegin(GL_QUADS);
    glColor3ub(102, 153, 153);
    glVertex2f(0.85, -0.50);
    glVertex2f(0.85, -0.27);
    glVertex2f(0.75, -0.27);
    glVertex2f(0.75, -0.50);
    glEnd();
    //glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.45);
    glVertex2f(0.84, -0.44);
    glVertex2f(0.76, -0.44);
    glVertex2f(0.76, -0.45);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.43);
    glVertex2f(0.84, -0.42);
    glVertex2f(0.76, -0.42);
    glVertex2f(0.76, -0.43);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.41);
    glVertex2f(0.84, -0.40);
    glVertex2f(0.76, -0.40);
    glVertex2f(0.76, -0.41);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.39);
    glVertex2f(0.84, -0.38);
    glVertex2f(0.76, -0.38);
    glVertex2f(0.76, -0.39);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.37);
    glVertex2f(0.84, -0.36);
    glVertex2f(0.76, -0.36);
    glVertex2f(0.76, -0.37);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.34);
    glVertex2f(0.84, -0.35);
    glVertex2f(0.76, -0.35);
    glVertex2f(0.76, -0.34);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.32);
    glVertex2f(0.84, -0.33);
    glVertex2f(0.76, -0.33);
    glVertex2f(0.76, -0.32);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.30);
    glVertex2f(0.84, -0.31);
    glVertex2f(0.76, -0.31);
    glVertex2f(0.76, -0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(0.84, -0.28);
    glVertex2f(0.84, -0.29);
    glVertex2f(0.76, -0.29);
    glVertex2f(0.76, -0.28);
    glEnd();

    //Right blding 7


    glBegin(GL_QUADS);
    glColor3ub(198, 210, 210);
    glVertex2f(0.9, -0.50);
    glVertex2f(0.9, -0.105);
    glVertex2f(0.85, -0.1);
    glVertex2f(0.85, -0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(210, 219, 219);
    glVertex2f(1., -0.50);
    glVertex2f(1.0, -0.105);
    glVertex2f(0.9, -0.105);
    glVertex2f(0.9, -0.50);
    glEnd();
    //glass
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.45);
    glVertex2f(.995, -0.44);
    glVertex2f(0.91, -0.44);
    glVertex2f(0.91, -0.45);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.43);
    glVertex2f(.995, -0.42);
    glVertex2f(0.91, -0.42);
    glVertex2f(0.91, -0.43);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.41);
    glVertex2f(.995, -0.40);
    glVertex2f(0.91, -0.40);
    glVertex2f(0.91, -0.41);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.39);
    glVertex2f(.995, -0.38);
    glVertex2f(0.91, -0.38);
    glVertex2f(0.91, -0.39);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.37);
    glVertex2f(.995, -0.36);
    glVertex2f(0.91, -0.36);
    glVertex2f(0.91, -0.37);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.35);
    glVertex2f(.995, -0.34);
    glVertex2f(0.91, -0.34);
    glVertex2f(0.91, -0.35);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.33);
    glVertex2f(.995, -0.32);
    glVertex2f(0.91, -0.32);
    glVertex2f(0.91, -0.33);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.31);
    glVertex2f(.995, -0.30);
    glVertex2f(0.91, -0.30);
    glVertex2f(0.91, -0.31);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.29);
    glVertex2f(.995, -0.28);
    glVertex2f(0.91, -0.28);
    glVertex2f(0.91, -0.29);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.27);
    glVertex2f(.995, -0.26);
    glVertex2f(0.91, -0.26);
    glVertex2f(0.91, -0.27);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.25);
    glVertex2f(.995, -0.24);
    glVertex2f(0.91, -0.24);
    glVertex2f(0.91, -0.25);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.23);
    glVertex2f(.995, -0.22);
    glVertex2f(0.91, -0.22);
    glVertex2f(0.91, -0.23);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.21);
    glVertex2f(.995, -0.20);
    glVertex2f(0.91, -0.20);
    glVertex2f(0.91, -0.21);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.19);
    glVertex2f(.995, -0.18);
    glVertex2f(0.91, -0.18);
    glVertex2f(0.91, -0.19);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.17);
    glVertex2f(.995, -0.16);
    glVertex2f(0.91, -0.16);
    glVertex2f(0.91, -0.17);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.15);
    glVertex2f(.995, -0.14);
    glVertex2f(0.91, -0.14);
    glVertex2f(0.91, -0.15);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(.995, -0.13);
    glVertex2f(.995, -0.12);
    glVertex2f(0.91, -0.12);
    glVertex2f(0.91, -0.13);
    glEnd();
    glPopMatrix();

    //LEFT SIDE BLDING 1  //************************


    glBegin(GL_QUADS);
    glColor3ub(255, 236, 179);
    glVertex2f(-.95, -0.4);
    glVertex2f(-.95, 0.17);
    glVertex2f(-1.0, 0.17);
    glVertex2f(-1.0, -0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(230, 138, 0);
    glVertex2f(-.8, -0.4);
    glVertex2f(-.8, 0.17);
    glVertex2f(-.950, 0.17);
    glVertex2f(-.950, -0.4);
    glEnd();



    //glass#####
    glBegin(GL_QUADS);
    glColor3ub(255, 236, 179);
    glVertex2f(-.81, -0.4);
    glVertex2f(-.81, 0.15);
    glVertex2f(-.945, 0.15);
    glVertex2f(-.945, -0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 236, 179);
    glVertex2f(-.96, -0.4);
    glVertex2f(-.96, 0.15);
    glVertex2f(-.995, 0.15);
    glVertex2f(-.995, -0.4);
    glEnd();


    //LEFT SIDE BLDING 2


    glBegin(GL_QUADS);
    glColor3ub(35, 114, 86);
    glVertex2f(-.75, -0.4);
    glVertex2f(-.75, -0.13);
    glVertex2f(-0.8, -0.13);
    glVertex2f(-.8, -0.4);
    glEnd();
    //LEFT SIDE BLDING 3

    glBegin(GL_QUADS);
    glColor3ub(42, 137, 103);
    glVertex2f(-.65, -0.4);
    glVertex2f(-.65, -0.08);
    glVertex2f(-0.75, -0.08);
    glVertex2f(-.75, -0.4);
    glEnd();

    //LEFT SIDE BLDING 4


    //bldingside

    glBegin(GL_QUADS);
    glColor3ub(191, 191, 191);
    glVertex2f(-.6, -0.4);
    glVertex2f(-.6, 0.31);
    glVertex2f(-0.65, 0.31);
    glVertex2f(-.65, -0.4);
    glEnd();
    //miror 1


    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(-.59, -0.4);
    glVertex2f(-.59, 0.29);
    glVertex2f(-0.64, 0.29);
    glVertex2f(-.64, -0.4);
    glEnd();

    //blding

    glBegin(GL_QUADS);
    glColor3ub(204, 204, 204);
    glVertex2f(-.5, -0.4);
    glVertex2f(-.5, 0.31);
    glVertex2f(-0.6, 0.31);
    glVertex2f(-.6, -0.4);
    glEnd();

    //miror 2
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 255);
    glVertex2f(-.51, -0.4);
    glVertex2f(-.51, 0.29);
    glVertex2f(-0.59, 0.29);
    glVertex2f(-.59, -0.4);
    glEnd();

    //LEFT SIDE BLDING 5

    glBegin(GL_QUADS);
    glColor3ub(198, 140, 83);
    glVertex2f(-.45, -0.4);
    glVertex2f(-.45, 0.09);
    glVertex2f(-0.5, 0.09);
    glVertex2f(-0.5, -0.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204, 153, 102);
    glVertex2f(-.4, -0.4);
    glVertex2f(-.4, 0.09);
    glVertex2f(-0.45, 0.09);
    glVertex2f(-0.45, -0.4);
    glEnd();
    //Glass
    glBegin(GL_QUADS);
    glColor3ub(224, 224, 209);
    glVertex2f(-.405, -0.4);
    glVertex2f(-.405, 0.08);
    glVertex2f(-0.447, 0.08);
    glVertex2f(-0.447, -0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(224, 224, 209);
    glVertex2f(-.457, -0.4);
    glVertex2f(-.457, 0.08);
    glVertex2f(-0.495, 0.08);
    glVertex2f(-0.495, -0.4);
    glEnd();
    glPopMatrix();
}

void bulding2() {

    glColor3f(0.05, .1, 0.21);//31, 63, 96
    glBegin(GL_POLYGON);//..........................................building
    glVertex2f(-1.0f, -0.59f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-0.98f, 0.2f);
    glVertex2f(-0.98f, 0.15f);
    glVertex2f(-0.95f, 0.18f);
    glVertex2f(-0.92f, 0.15f);
    glVertex2f(-0.92f, 0.3f);
    glVertex2f(-0.89f, 0.3f);
    glVertex2f(-0.89f, 0.27f);
    glVertex2f(-0.86f, 0.27f);
    glVertex2f(-0.86f, 0.25f);
    glVertex2f(-0.83f, 0.25f);
    glVertex2f(-0.83f, 0.2f);
    glVertex2f(-0.8f, 0.23f);
    glVertex2f(-0.77f, 0.2f);
    glVertex2f(-0.74f, 0.2f);
    glVertex2f(-0.74f, 0.35f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.67f, 0.2f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.67f, -0.59f);
    glVertex2f(-0.67f, 0.4f);
    glVertex2f(-0.61f, 0.4f);
    glVertex2f(-0.61f, 0.3f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.53f, 0.25f);
    glVertex2f(-0.51f, 0.2f);
    glVertex2f(-0.46f, 0.2f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.46f, -0.59f);
    glVertex2f(-0.46f, 0.5f);
    glVertex2f(-0.35f, 0.5f);
    glVertex2f(-0.35f, 0.25f);
    glVertex2f(-0.3f, 0.25f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3f, -0.59f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.25f, 0.5f);
    glVertex2f(-0.25f, 0.53f);
    glVertex2f(-0.23f, 0.53f);
    glVertex2f(-0.23f, 0.25f);
    glVertex2f(-0.23f, 0.4f);
    glVertex2f(-0.14f, 0.4f);
    glVertex2f(-0.14f, 0.25f);
    glVertex2f(-0.1f, 0.25f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.05f, -0.59f);
    glVertex2f(-0.05f, 0.5f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.05f, 0.25f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.3f, -0.59f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.25f, 0.5f);
    glVertex2f(0.25f, 0.53f);
    glVertex2f(0.23f, 0.53f);
    glVertex2f(0.23f, 0.25f);
    glVertex2f(0.23f, 0.4f);
    glVertex2f(0.14f, 0.4f);
    glVertex2f(0.14f, 0.25f);
    glVertex2f(0.1f, 0.25f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.46f, -0.59f);
    glVertex2f(0.46f, 0.5f);
    glVertex2f(0.35f, 0.5f);
    glVertex2f(0.35f, 0.25f);
    glVertex2f(0.3f, 0.25f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.67f, -0.59f);
    glVertex2f(0.67f, 0.4f);
    glVertex2f(0.61f, 0.4f);
    glVertex2f(0.61f, 0.3f);
    glVertex2f(0.55f, 0.3f);
    glVertex2f(0.55f, 0.25f);
    glVertex2f(0.53f, 0.25f);
    glVertex2f(0.51f, 0.2f);
    glVertex2f(0.46f, 0.2f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.0f, -0.59f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(0.98f, 0.2f);
    glVertex2f(0.98f, 0.15f);
    glVertex2f(0.95f, 0.18f);
    glVertex2f(0.92f, 0.15f);
    glVertex2f(0.92f, 0.3f);
    glVertex2f(0.89f, 0.3f);
    glVertex2f(0.89f, 0.27f);
    glVertex2f(0.86f, 0.27f);
    glVertex2f(0.86f, 0.25f);
    glVertex2f(0.83f, 0.25f);
    glVertex2f(0.83f, 0.2f);
    glVertex2f(0.8f, 0.23f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.74f, 0.2f);
    glVertex2f(0.74f, 0.35f);
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.67f, 0.2f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();


}


void bulding2effect2() {
    glPushMatrix();

    glTranslatef(0.1, -0.24, 0.0);
    glScalef(1.2, 0.97, 0.0);
    glColor4f(0.05, .14, 0.3, .90);
    glBegin(GL_POLYGON);//..........................................building
    glVertex2f(-1.0f, -0.59f);
    glVertex2f(-1.0f, 0.2f);
    glVertex2f(-0.98f, 0.2f);
    glVertex2f(-0.98f, 0.15f);
    glVertex2f(-0.95f, 0.18f);
    glVertex2f(-0.92f, 0.15f);
    glVertex2f(-0.92f, 0.3f);
    glVertex2f(-0.89f, 0.3f);
    glVertex2f(-0.89f, 0.27f);
    glVertex2f(-0.86f, 0.27f);
    glVertex2f(-0.86f, 0.25f);
    glVertex2f(-0.83f, 0.25f);
    glVertex2f(-0.83f, 0.2f);
    glVertex2f(-0.8f, 0.23f);
    glVertex2f(-0.77f, 0.2f);
    glVertex2f(-0.74f, 0.2f);
    glVertex2f(-0.74f, 0.35f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.7f, 0.2f);
    glVertex2f(-0.67f, 0.2f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.67f, -0.59f);
    glVertex2f(-0.67f, 0.4f);
    glVertex2f(-0.61f, 0.4f);
    glVertex2f(-0.61f, 0.3f);
    glVertex2f(-0.55f, 0.3f);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.53f, 0.25f);
    glVertex2f(-0.51f, 0.2f);
    glVertex2f(-0.46f, 0.2f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.46f, -0.59f);
    glVertex2f(-0.46f, 0.5f);
    glVertex2f(-0.35f, 0.5f);
    glVertex2f(-0.35f, 0.25f);
    glVertex2f(-0.3f, 0.25f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.3f, -0.59f);
    glVertex2f(-0.3f, 0.5f);
    glVertex2f(-0.25f, 0.5f);
    glVertex2f(-0.25f, 0.53f);
    glVertex2f(-0.23f, 0.53f);
    glVertex2f(-0.23f, 0.25f);
    glVertex2f(-0.23f, 0.4f);
    glVertex2f(-0.14f, 0.4f);
    glVertex2f(-0.14f, 0.25f);
    glVertex2f(-0.1f, 0.25f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.05f, 0.2f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.05f, -0.59f);
    glVertex2f(-0.05f, 0.5f);
    glVertex2f(0.05f, 0.5f);
    glVertex2f(0.05f, 0.25f);
    glVertex2f(1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.3f, -0.59f);
    glVertex2f(0.3f, 0.5f);
    glVertex2f(0.25f, 0.5f);
    glVertex2f(0.25f, 0.53f);
    glVertex2f(0.23f, 0.53f);
    glVertex2f(0.23f, 0.25f);
    glVertex2f(0.23f, 0.4f);
    glVertex2f(0.14f, 0.4f);
    glVertex2f(0.14f, 0.25f);
    glVertex2f(0.1f, 0.25f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.46f, -0.59f);
    glVertex2f(0.46f, 0.5f);
    glVertex2f(0.35f, 0.5f);
    glVertex2f(0.35f, 0.25f);
    glVertex2f(0.3f, 0.25f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.67f, -0.59f);
    glVertex2f(0.67f, 0.4f);
    glVertex2f(0.61f, 0.4f);
    glVertex2f(0.61f, 0.3f);
    glVertex2f(0.55f, 0.3f);
    glVertex2f(0.55f, 0.25f);
    glVertex2f(0.53f, 0.25f);
    glVertex2f(0.51f, 0.2f);
    glVertex2f(0.46f, 0.2f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.0f, -0.59f);
    glVertex2f(1.0f, 0.2f);
    glVertex2f(0.98f, 0.2f);
    glVertex2f(0.98f, 0.15f);
    glVertex2f(0.95f, 0.18f);
    glVertex2f(0.92f, 0.15f);
    glVertex2f(0.92f, 0.3f);
    glVertex2f(0.89f, 0.3f);
    glVertex2f(0.89f, 0.27f);
    glVertex2f(0.86f, 0.27f);
    glVertex2f(0.86f, 0.25f);
    glVertex2f(0.83f, 0.25f);
    glVertex2f(0.83f, 0.2f);
    glVertex2f(0.8f, 0.23f);
    glVertex2f(0.77f, 0.2f);
    glVertex2f(0.74f, 0.2f);
    glVertex2f(0.74f, 0.35f);
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.7f, 0.2f);
    glVertex2f(0.67f, 0.2f);
    glVertex2f(-1.0f, -0.59f);
    glEnd();

    glPopMatrix();
}

void bulding3() {
    glPushMatrix();
    glTranslatef(0.10, -0.05, 0);
    //----------first building----------
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.4);
    glVertex2f(0.40, 0.15);
    glVertex2f(0.40, -0.50);
    glVertex2f(0.15, -0.50);
    glVertex2f(0.15, 0.15); //glVertex2f(,);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(0.25, 0.15);
    glVertex2f(0.25, -0.50);
    glVertex2f(0.15, -0.50);
    glVertex2f(0.15, 0.15); //glVertex2f(,);
    glEnd();

    float x12 = 0.30, y14, y23, x34 = 0.27;
    for (int i = 0; i < 3; i++) {
        y14 = -0.365, y23 = -0.435;
        for (int j = 0; j < 7; j++) {
            glBegin(GL_POLYGON);
            glColor3f(0.90196, 0.90196, 0.00000);
            glVertex2f(x12, y14);
            glVertex2f(x12, y23);
            glVertex2f(x34, y23);
            glVertex2f(x34, y14);
            glEnd();
            y14 = y14 + 0.08, y23 = y23 + 0.08;
        }
        x12 = x12 + 0.05, x34 = x34 + 0.05;
    }



    //---------second building----------

    float i, x, y;
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.60000, 0.60000);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.195 * cos(i) - 0.03;
        y = 0.155 * sin(i) + 0.33;
        glVertex2d(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.80000, 0.60000, 0.00000);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.16 * cos(i) - 0.03;
        y = 0.13 * sin(i) + 0.33;
        glVertex2d(x, y);
    }
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(0.00000, 0.60000, 0.60000);
    glVertex2f(-0.01, 0.46);
    glVertex2f(0.05, 0.33);

    glVertex2f(-0.07, 0.46);
    glVertex2f(-0.13, 0.33);
    glEnd();
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(0.00000, 0.60000, 0.60000);
    glVertex2f(0.10, 0.39);
    glVertex2f(-0.17, 0.39);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.60000, 0.60000);
    glVertex2f(0.14, 0.33);
    glVertex2f(0.11, 0.25);
    glVertex2f(-0.18, 0.25);
    glVertex2f(-0.21, 0.33);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.4);
    glVertex2f(0.11, 0.20);
    glVertex2f(0.11, -0.50);
    glVertex2f(-0.18, -0.50);
    glVertex2f(-0.18, 0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(0.20, 0.20);
    glVertex2f(0.20, 0.25);
    glVertex2f(-0.27, 0.25);
    glVertex2f(-0.27, 0.20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.9);
    glVertex2f(0.11, -0.35);
    glVertex2f(0.11, -0.50);
    glVertex2f(-0.18, -0.50);
    glVertex2f(-0.18, -0.35);
    glEnd();

    //windows
    x12 = -0.215, y14 = 0.24, y23 = 0.20, x34 = -0.265;
    for (int i = 0; i < 5; i++) {
        glBegin(GL_POLYGON);
        glColor3f(0.90196, 0.90196, 0.00000);
        glVertex2f(x12, 0.246);
        glVertex2f(x12, 0.206);
        glVertex2f(x34, 0.206);
        glVertex2f(x34, 0.246);
        glEnd();
        x12 = x12 + 0.10, x34 = x34 + 0.10;
    }

    x12 = -0.14, x34 = -0.18;
    for (int i = 0; i < 2; i++) {
        y14 = 0.15, y23 = 0.09;
        for (int j = 0; j < 6; j++) {
            glBegin(GL_POLYGON);
            glColor3f(0.90196, 0.90196, 0.00000);
            glVertex2f(x12, y14);
            glVertex2f(x12, y23);
            glVertex2f(x34, y23);
            glVertex2f(x34, y14);
            glEnd();
            y14 = y14 - 0.08, y23 = y23 - 0.08;
        }
        x12 = x12 + 0.25, x34 = x34 + 0.25;
    }


    //----------------third building---------
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(-0.84, -0.50);
    glVertex2f(-0.60, -0.50);
    glVertex2f(-0.625, 0.24);
    glVertex2f(-0.65, 0.24);
    glVertex2f(-0.68, 0.36);
    glVertex2f(-0.755, 0.36);
    glVertex2f(-0.79, 0.24);
    glVertex2f(-0.82, 0.24);
    glEnd();
    //البيضاوي
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.60000, 0.60000);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.29 * cos(i) - 0.725;
        y = 0.055 * sin(i) + 0.28;
        glVertex2d(x, y);
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(-1.015, 0.30);
    glVertex2f(-1.015, 0.26);
    glVertex2f(-0.435, 0.26);
    glVertex2f(-0.435, 0.30);
    glEnd();

    //windows
    x12 = -0.70, y14 = -0.32, y23 = -0.35, x34 = -0.73;
    for (int i = 0; i < 7; i++) {
        glBegin(GL_POLYGON);
        glColor3f(0.90196, 0.90196, 0.00000);
        glVertex2f(x12, y14);
        glVertex2f(x12, y23);
        glVertex2f(x34, y23);
        glVertex2f(x34, y14);
        glEnd();
        y14 = y14 + 0.08, y23 = y23 + 0.08;
    }
    x12 = -0.92, y14 = 0.30, y23 = 0.275, x34 = -1.01;
    for (int i = 0; i < 3; i++) {
        glBegin(GL_POLYGON);
        glColor3f(0.90196, 0.90196, 0.00000);
        glVertex2f(x12, y14);
        glVertex2f(x12, y23);
        glVertex2f(x34, y23);
        glVertex2f(x34, y14);
        glEnd();
        x12 = x12 + 0.24, x34 = x34 + 0.24;
    }
    glBegin(GL_TRIANGLES);
    glColor3f(0.00000, 0.60000, 0.60000);
    glVertex2f(-0.72, 0.47);
    glVertex2f(-0.70, 0.36);
    glVertex2f(-0.735, 0.36);
    glEnd();

    //----------------fourth building---------
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.50000, 0.60000);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.22 * cos(i) - 0.40;
        y = 0.66 * sin(i) - 0.45;
        glVertex2d(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.65000, 0.622000);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.15 * cos(i) - 0.40;
        y = 0.58 * sin(i) - 0.45;
        glVertex2d(x, y);
    }
    glEnd();

    //windows
    glBegin(GL_TRIANGLES);
    glColor3f(0.90196, 0.90196, 0.00000);
    glVertex2f(-0.40, 0.07);
    glVertex2f(-0.34, -0.20);
    glVertex2f(-0.46, -0.20);
    glEnd();

    glBegin(GL_POLYGON);//1
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(-0.32, -0.23);
    glVertex2f(-0.32, -0.27);
    glVertex2f(-0.475, -0.27);
    glVertex2f(-0.475, -0.23);
    glEnd();

    glBegin(GL_POLYGON);//2
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(-0.30, -0.30);
    glVertex2f(-0.30, -0.34);
    glVertex2f(-0.50, -0.34);
    glVertex2f(-0.50, -0.30);
    glEnd();

    glBegin(GL_POLYGON);//3
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(-0.28, -0.37);
    glVertex2f(-0.28, -0.41);
    glVertex2f(-0.52, -0.41);
    glVertex2f(-0.52, -0.37);
    glEnd();

    glBegin(GL_POLYGON);//4
    glColor3f(0.00000, 0.42353, 0.47451);
    glVertex2f(-0.27, -0.45);
    glVertex2f(-0.27, -0.49);
    glVertex2f(-0.54, -0.49);
    glVertex2f(-0.54, -0.45);
    glEnd();




    //----------------fifth building---------




    glPopMatrix();

    //floor

    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.42353, 0.45451);
    glVertex2f(1, -0.50);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, -0.50);
    glEnd();

}
void bulding3DepthEffect() {

    //----------first building----------
    glPushMatrix();

    glTranslatef(0.12, -0.05, 0);
    glScalef(0.91, 0.91, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.1);
    glVertex2f(0.40, 0.15);
    glColor4f(0.0, 0.0, 0.0, 0.3);
    glVertex2f(0.40, -0.50);
    glColor4f(0.0, 0.0, 0.0, 0.3);
    glVertex2f(0.15, -0.50);
    glColor4f(0.0, 0.0, 0.0, 0.3);
    glVertex2f(0.15, 0.15); //glVertex2f(,);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.00000, 0.42353, 0.47451, 0.2);
    glVertex2f(0.25, 0.15);
    glColor4f(0.00000, 0.42353, 0.47451, 0.2);
    glVertex2f(0.25, -0.50);
    glColor4f(0.0, 0.0, 0.0, 0.2);
    glVertex2f(0.15, -0.50);
    glColor4f(0.0, 0.0, 0.0, 0.2);
    glVertex2f(0.15, 0.15); //glVertex2f(,);
    glEnd();

    float x12 = 0.30, y14, y23, x34 = 0.27;

    glDisable(GL_BLEND);
    glPopMatrix();

    //---------second building----------
    glPushMatrix();

    glTranslatef(0.1, -0.03, 0);
    glScalef(0.91, 0.91, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    float i, x, y;
    glBegin(GL_POLYGON);
    glColor4f(0.00000, 0.60000, 0.60000, 0.2);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.195 * cos(i) - 0.03;
        y = 0.155 * sin(i) + 0.33;
        glVertex2d(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0.00000, 0.60000, 0.60000, 0.2);
    glVertex2f(0.14, 0.33);
    glColor4f(0.0, 0.0, 0.0, 0.3);
    glVertex2f(0.11, 0.25);
    glColor4f(0.00000, 0.60000, 0.60000, 0.2);
    glVertex2f(-0.18, 0.25);
    glColor4f(0.0, 0.0, 0.0, 0.3);
    glVertex2f(-0.21, 0.33);
    glEnd();


    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex2f(0.11, 0.20);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex2f(0.11, -0.50);
    glColor4f(0.0, 0.0, 0.4, 0.5);
    glVertex2f(-0.18, -0.50);
    glColor4f(0.0, 0.0, 0.0, 0.5);
    glVertex2f(-0.18, 0.20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor4f(0, 0, 0, 0.4);
    glVertex2f(0.20, 0.20);
    glColor4f(0.00000, 0.42353, 0.47451, 0.2);
    glVertex2f(0.20, 0.25);
    glColor4f(0, 0, 0, 0.1);
    glVertex2f(-0.27, 0.25);
    glColor4f(0, 0, 0, 0.1);
    glVertex2f(-0.27, 0.20);
    glEnd();


    glDisable(GL_BLEND);
    glPopMatrix();

    //----------------third building---------
    glPushMatrix();

    glTranslatef(0.04, -0.02, 0);
    glScalef(0.91, 0.91, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glBegin(GL_POLYGON);
    glColor4f(0, 0, 0, 0.3);
    glVertex2f(-0.84, -0.50);
    glVertex2f(-0.60, -0.50);
    glVertex2f(-0.625, 0.24);
    glVertex2f(-0.65, 0.24);
    glColor4f(0.00000, 0.42353, 0.47451, 0.2);
    glVertex2f(-0.68, 0.36);
    glVertex2f(-0.755, 0.36);
    glVertex2f(-0.79, 0.24);
    glVertex2f(-0.82, 0.24);
    glEnd();



    glBegin(GL_POLYGON);
    glColor4f(0.0, 0.0, 0.0, 0.1);
    glVertex2f(-1.015, 0.30);
    glVertex2f(-1.015, 0.26);
    glColor4f(0.00000, 0.42353, 0.47451, 0.2);
    glVertex2f(-0.435, 0.26);
    glVertex2f(-0.435, 0.30);
    glEnd();


    x12 = -0.92, y14 = 0.30, y23 = 0.275, x34 = -1.01;
    for (int i = 0; i < 3; i++) {
        glBegin(GL_POLYGON);
        glColor4f(0.0, 0.0, 0.0, 0.1);
        glVertex2f(x12, y14);
        glVertex2f(x12, y23);
        glColor4f(0.90196, 0.90196, 0.00000, 0.2);
        glVertex2f(x34, y23);
        glVertex2f(x34, y14);
        glEnd();
        x12 = x12 + 0.24, x34 = x34 + 0.24;
    }


    glDisable(GL_BLEND);
    glPopMatrix();

    //----------------fourth building---------
    glPushMatrix();

    glTranslatef(0.26, -0.02, 0);
    glScalef(1.4, 1.2, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);


    glBegin(GL_POLYGON);
    glColor4f(0, 0, 0, 0.2);
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = 0.15 * cos(i) - 0.40;
        y = 0.58 * sin(i) - 0.45;
        glVertex2d(x, y);
    }
    glEnd();


    glDisable(GL_BLEND);
    glPopMatrix();

    //----------------fifth building---------

    //floor

    glBegin(GL_POLYGON);
    glColor3f(0.00000, 0.42353, 0.45451);
    glVertex2f(1, -0.50);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, -0.50);
    glEnd();

}

void setup() {//set up the background
    myTexture2 = LoadTexture(image2Path, 1200, 1200);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);//black

}
void reshape(int width, int hight) {
    const float ratio = (float)width / hight;
    float sx = ratio > 1.0f ? ratio : 1.0f;
    float sy = ratio > 1.0f ? 1.0f : 1.0f / ratio;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-sx, sx, -sy, sy, 0, 1);
    glViewport(0, 0, width, hight);
}
void Circle(float r, float k, float h, float color[4])// to draw a circle( i took the code from the drive file)
{
    float x, y;
    glColor4fv(color);
    glBegin(GL_TRIANGLE_FAN);
    float PI = 3.14159;
    for (int i = 0; i <= 300; i++) {
        double angle = 2 * PI * i / 300;
        double x = cos(angle) * r;
        double y = sin(angle) * r;
        glVertex2d(k + x, h + y);
    }
    glEnd();
}

static void play() {
    glutPostRedisplay();
}

void cir(double x, double y) {

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(x, y, 0.0f); // move the circle to spsfic position
    glScalef(.5, .5, 1.0f); // the size of the circle

    glBegin(GL_TRIANGLE_FAN);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glColor3f(.6f, .6f, .6f); // set the color 
    glVertex2f(0.0f, 0.0f);
    for (int ii = 0; ii <= 100; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(100);//get the current angle 
        float x = .5 * cosf(theta);//calculate the x component 
        float y = .5 * sinf(theta);//calculate the y component 
        glColor3f(.6f, .6f, .6f); //to make the circle look like cloude
        glVertex2f(x, y);//output vertex 
    }
    glDisable(GL_BLEND);
    glEnd();
    glPopMatrix();
}

void Ellipse(float x_c, float y_c, float r_x, float r_y, float color[4]) {
    float i, x, y;
    glColor4fv(color);
    glBegin(GL_POLYGON);//right shado
    for (i = 0; i <= 2 * M_PI; i += 0.001) {
        x = r_x * cos(i) + x_c;
        y = r_y * sin(i) + y_c;
        glVertex2d(x, y);
    }
    glEnd();

}

void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius) {
    int i;
    int triangleAmount = 20; //# of triangles used to draw circle
    float PI = 3.14159;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            x + (radius * cos(i * twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void cloud() {
    cir(0.0, 1);
    cir(0.3, 0.95);
    cir(0.6, 0.6);
    cir(0.75, 0.95);
    cir(0.8, 0.6);

    cir((-0.5), 0.95);
    cir((-0.8), 0.6);
    cir((-0.95), 0.95);
    cir((-1), 0.6);
    cir((-0.4), 0.8);
    cir((-1.3), 0.8);

    cir(-1.6, 0.95);
    cir(-1.7, 0.6);
    cir(-1.95, 0.95);
    cir(-1.8, 0.6);

}

void drawTree(double x, double y, double z, double f, float color[4]) {//åäÇ ÑÓã áÔÌÑÉ æÍÏÉ äÓÊÚÏíåÇ ÈãíËæÏ ËÇäí ÚÔÇä äÓÊÚãá ÇáÇÍÏÇËíÇÊ Çáí åäÇ ãÑÉ æÍÏÉ ÈÏá ãÇ äßÑÑ ÇáßæÏ áßá ÔÌÑÉ

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glScalef(z, f, 1.0f);//áÊÍÏíÏ ÍÌã ÇáÔÌÑÉ
    glTranslatef(x, y, 0.0f);//áÊÍÏíÏ ãßÇäåÇ 
    glBegin(GL_TRIANGLES);
    // Draw the trunk
    //glColor3f(0.5, 0.2, 0.0);
    glColor3f(0.3, .2, 0.1);
    //glColor3f(0.5, 0.3, 0.1);
    glVertex3f(-0.1, -0, 0);
    glVertex3f(0.1, 0, 0);
    glVertex3f(0, 1, 0);

    // Draw the branches
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);

    glColor4fv(color);
    glVertex3f(-0.3, 0.5, 0);
    glVertex3f(0.3, 0.5, 0);
    glColor4f(0.0f, 0.4f, 0.0f, 1.0f); // green
    glVertex3f(0, 1, 0);

    glDisable(GL_BLEND);

    glColor4fv(color);
    glVertex3f(-0.2, 0.75, 0);
    glVertex3f(0.2, 0.75, 0);
    glVertex3f(0, 1, 0);

    glEnd();
    glPopMatrix();
}

void tree(float color[4]) {//call function to draw the tree

    drawTree(0.8, -1, .5, .5, color);
    drawTree(2, -2, .5, .5, color);
    drawTree(2.1, -1, .5, .5, color);
    drawTree(-1.9, -0.2, .25, .25, color);
    drawTree(-1.9, -0.3, .5, .5, color);
    drawTree(-2.1, -1, .5, .5, color);
    drawTree(-1.5, -2, .5, .5, color);
}

void bushes(double x, double y, double z, double f) {
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glScalef(z, f, 1.0f);//áÊÍÏíÏ ÍÌã ÇáÔÌÑÉ
    glTranslatef(x, y, 0.0f);//áÊÍÏíÏ ãßÇäåÇ 
    float b1[] = { 0.1, 0.3, 0.0, 1 };
    float b2[] = { 0.1, 0.2, 0.0, 1 };
    Circle(0.1, 0.1, 0.1, b1);
    Circle(0.1, -0.1, 0.2, b1);
    Circle(0.1, 0.0, 0.1, b2);
    Circle(0.1, 0.0, 0.2, b2);
    Circle(0.1, -0.15, 0.05, b1);

    glEnd();
    glPopMatrix();

}
float  translation = 0;

void smock(float x, float y, float z, float f, float color[4]) {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(z, f, 1.0f);
    glTranslatef(x, y, 0.0f);
    glEnable(GL_BLEND);
    glColor4fv(color);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.47, 0.18);
    glVertex2f(0.51, 0.2);
    glVertex2f(0.52, 0.29);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.46, 0.32);
    glVertex2f(0.47, 0.18);
    glVertex2f(0.43, 0.16);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.44, 0.15);
    glVertex2f(0.49, 0.13);
    glVertex2f(0.65, 0.29);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.56, 0.18);
    glVertex2f(0.52, 0.13);
    glVertex2f(0.76, 0.2);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.53, 0.15);
    glVertex2f(0.49, 0.14);
    glVertex2f(0.56, 0.03);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.48, 0.15);
    glVertex2f(0.52, 0.15);
    glVertex2f(0.55, -0.06);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.46, 0.13);
    glVertex2f(0.48, 0.12);
    glVertex2f(0.38, 0);

    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.46, 0.18);
    glVertex2f(0.46, 0.16);
    glVertex2f(0.32, 0.18);

    glEnd();

    glDisable(GL_BLEND);

    glPopMatrix();
}

void drawHouse(double x, double y, double z, double f, float color[4])
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glScalef(z, f, 1.0f);
    glTranslatef(x, y, 0.0f);


    glColor4fv(color);
    glBegin(GL_POLYGON);
    glVertex3f(0.1, 0.1, 0.0);
    glVertex3f(0.4, 0.1, 0.0);
    glVertex3f(0.4, 0.5, 0.0);
    glVertex3f(0.1, 0.5, 0.0);
    glEnd();


    //glColor3f(0.3, .2, 0.0);
    glColor3f(0.2, 0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.10, 0.5, 0.0);
    glVertex3f(0.4, 0.5, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glEnd();

    color[2] = color[2] + 0.1;
    glColor4fv(color);
    glBegin(GL_POLYGON);
    glVertex3f(0.4, 0.1, 0.0);
    glVertex3f(0.8, 0.4, 0.0);
    glVertex3f(0.8, 0.75, 0.0);
    glVertex3f(0.4, 0.5, 0.0);
    glEnd();


    glColor3f(0.2, 0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.4, 0.5, 0.0);
    glVertex3f(0.8, 0.75, 0.0);
    glVertex3f(0.62, 0.93, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glEnd();

    //details
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);//Black
    glVertex3f(0.35, 0.7, 0.0);
    glVertex3f(0.45, 0.75, 0.0);

    glVertex3f(0.55, 0.79, 0.0);
    glVertex3f(0.65, 0.85, 0.0);

    glVertex3f(0.45, 0.65, 0.0);
    glVertex3f(0.65, 0.75, 0.0);

    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.1f, 0.1f);//brown
    glVertex3f(0.6, 0.25, 0.0);
    glVertex3f(0.7, 0.32, 0.0);
    glVertex3f(0.7, 0.5, 0.0);
    glVertex3f(0.6, 0.42, 0.0);
    glEnd();

    //windo
    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.9f, 0.9f);//
    glVertex3f(0.2, 0.3, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.3, 0.4, 0.0);
    glVertex3f(0.2, 0.4, 0.0);
    glEnd();

    glBegin(GL_LINES);

    //for the window
    //inside
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.25, 0.3, 0.0);
    glVertex3f(0.25, 0.4, 0.0);
    glVertex3f(0.2, 0.35, 0.0);
    glVertex3f(0.3, 0.35, 0.0);
    //outside
    glVertex3f(0.2, 0.3, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.3, 0.3, 0.0);
    glVertex3f(0.3, 0.4, 0.0);
    glVertex3f(0.3, 0.4, 0.0);
    glVertex3f(0.2, 0.4, 0.0);
    glVertex3f(0.2, 0.4, 0.0);
    glVertex3f(0.2, 0.3, 0.0);
    //front Black border
    glVertex3f(0.10, 0.5, 0.0);
    glVertex3f(0.4, 0.5, 0.0);
    glVertex3f(0.4, 0.5, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glVertex3f(0.25, 0.75, 0.0);
    glVertex3f(0.10, 0.5, 0.0);
    glVertex3f(0.4, 0.5, 0.0);//side
    glVertex3f(0.8, 0.75, 0.0);
    glVertex3f(0.8, 0.75, 0.0);
    glVertex3f(0.62, 0.93, 0.0);
    glVertex3f(0.62, 0.93, 0.0);
    glVertex3f(0.25, 0.75, 0.0);

    glEnd();
    glPopMatrix();
}
void sky() {
    glBegin(GL_QUADS);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glColor3f(0.1f, 0.1f, 0.2f);
    glVertex2f(-1.0f, -1.0f); // bottom left corner	
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0f, 1.0f); // top left corner	
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(1.0f, 1.0f); // top right corner
    glColor3f(0.1f, 0.1f, 0.2f);
    glVertex2f(1.0f, -1.0f); // bottom right corner
    glEnd();
    glDisable(GL_BLEND);
}

void star() {
    glPointSize(2);
    glBegin(GL_POINTS);
    glColor3f(1, 1, 1);
    glVertex2f(-0.0f, 0.79f);
    glVertex2f(-0.0f, 0.9f);
    glVertex2f(-0.07f, 0.9f);
    glVertex2f(-0.07f, 0.7f);
    glVertex2f(-0.03f, 0.75f);
    glVertex2f(-0.03f, 0.85f);
    glVertex2f(-0.03f, 0.95f);
    glVertex2f(-0.13f, 0.79f);
    glVertex2f(-0.13f, 0.9f);
    glVertex2f(-0.23f, 0.75f);
    glVertex2f(-0.23f, 0.85f);
    glVertex2f(-0.33f, 0.65f);
    glVertex2f(-0.33f, 0.785f);
    glVertex2f(-0.33f, 0.958f);
    glVertex2f(-0.43f, 0.55f);
    glVertex2f(-0.43f, 0.75f);
    glVertex2f(-0.43f, 0.89f);
    glVertex2f(-0.55f, 0.47f);
    glVertex2f(-0.55f, 0.67f);
    glVertex2f(-0.55f, 0.87f);
    glVertex2f(-0.5f, 0.42f);
    glVertex2f(-0.58f, 0.45f);
    glVertex2f(-0.58f, 0.65f);
    glVertex2f(-0.58f, 0.95f);
    glVertex2f(-0.49f, 0.51f);
    glVertex2f(-0.63f, 0.525f);
    glVertex2f(-0.63f, 0.725f);
    glVertex2f(-0.63f, 0.925f);
    glVertex2f(-0.73f, 0.425f);
    glVertex2f(-0.73f, 0.525f);
    glVertex2f(-0.73f, 0.725f);
    glVertex2f(-0.83f, 0.35f);
    glVertex2f(-0.83f, 0.46f);
    glVertex2f(-0.83f, 0.56f);
    glVertex2f(-0.83f, 0.76f);
    glVertex2f(-0.83f, 0.96f);
    glVertex2f(-0.93f, 0.485f);
    glVertex2f(-0.93f, 0.585f);
    glVertex2f(-0.93f, 0.785f);
    glVertex2f(-0.98f, 0.885f);
    glVertex2f(-0.98f, 0.285f);
    glVertex2f(0.0f, 0.79f);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(0.07f, 0.9f);
    glVertex2f(0.07f, 0.7f);
    glVertex2f(0.03f, 0.75f);
    glVertex2f(0.03f, 0.85f);
    glVertex2f(0.03f, 0.95f);
    glVertex2f(0.13f, 0.79f);
    glVertex2f(0.13f, 0.9f);
    glVertex2f(0.23f, 0.75f);
    glVertex2f(0.23f, 0.85f);
    glVertex2f(0.33f, 0.65f);
    glVertex2f(0.33f, 0.785f);
    glVertex2f(0.33f, 0.958f);
    glVertex2f(0.43f, 0.55f);
    glVertex2f(0.43f, 0.75f);
    glVertex2f(0.43f, 0.89f);
    glVertex2f(0.55f, 0.47f);
    glVertex2f(0.55f, 0.67f);
    glVertex2f(0.55f, 0.87f);
    glVertex2f(0.5f, 0.42f);
    glVertex2f(0.58f, 0.45f);
    glVertex2f(0.58f, 0.65f);
    glVertex2f(0.58f, 0.95f);
    glVertex2f(0.49f, 0.51f);
    glVertex2f(0.63f, 0.525f);
    glVertex2f(0.63f, 0.725f);
    glVertex2f(0.63f, 0.925f);
    glVertex2f(0.73f, 0.425f);
    glVertex2f(0.73f, 0.525f);
    glVertex2f(0.73f, 0.725f);
    glVertex2f(0.83f, 0.35f);
    glVertex2f(0.83f, 0.46f);
    glVertex2f(0.83f, 0.56f);
    glVertex2f(0.83f, 0.76f);
    glVertex2f(0.83f, 0.96f);
    glVertex2f(0.93f, 0.485f);
    glVertex2f(0.93f, 0.585f);
    glVertex2f(0.93f, 0.785f);
    glVertex2f(0.98f, 0.885f);
    glVertex2f(0.98f, 0.285f);

    glEnd();
}
void botEys(double x, double y, double z, double f) {

    glLoadIdentity();
    glPushMatrix();
    glScalef(z, f, 1.0f);
    glTranslatef(x, y, 0.0f);
    float innerC[] = { 0.7,0.7,1.,1 };
    //float couterC[] = { 0.3,0.3,0.3,1 };
    float couterC[] = { 0.1, 1, 0.21 ,1 };
    float outerC[] = { 1,0,0,0.1 };
    Circle(0.2, 0.57, 0.1, couterC);
    Circle(0.2, -0.57, 0.1, couterC);
    Circle(0.19, 0.57, 0.1, outerC);
    Circle(0.19, -0.57, 0.1, outerC);
    Circle(0.14, 0.57, 0.1, innerC);
    Circle(0.14, -0.57, 0.1, innerC);
    //to add depth in the eyes
    float lighterinner[] = { 0,1,0,0.2 };
    Circle(0.13, 0.57, 0.1, lighterinner);
    Circle(0.13, -0.57, 0.1, lighterinner);
    float light[4] = { 0,1,0,0.2 };
    Circle(0.12, -0.57, 0.1, light);
    Circle(0.12, 0.57, 0.1, light);
    glPopMatrix();

}

void robotFace(double x, double y, double z, double f) {

    glLoadIdentity();
    glPushMatrix();
    glScalef(z, f, 1.0f);
    glTranslatef(x, y, 0.0f);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glColor3f(0.32, 0.38, 0.5);
    glBegin(GL_POLYGON); // head
    glVertex2f(0.6, 0.5);//1
    glVertex2f(0.6, -0.5);//2
    glVertex2f(-0.6, -0.5);//3
    glVertex2f(-0.6, 0.5);//4
    glEnd();

    //to cover the cyrcles////////////////
    glBegin(GL_POLYGON);
    glVertex2f(0.825, 0.34);//1
    glVertex2f(0.825, -0.34);//2
    glVertex2f(-0.825, -0.34);//3
    glVertex2f(-0.825, 0.34);//4
    glEnd();

    //the base
    glBegin(GL_POLYGON);
    glVertex2f(0.6, -0.5);//1
    glVertex2f(0.4, -0.6);//2
    glVertex2f(-0.4, -0.6);//3
    glVertex2f(-0.6, -0.5);//4
    glEnd();
    //as a border
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f, 0.3f);//grey
    glVertex2f(-0.6, -0.5);
    glVertex2f(0.6, -0.5);

    glVertex2f(0.09, -0.5);//in the middle
    glVertex2f(0.09, -0.6);

    glVertex2f(-0.09, -0.5);
    glVertex2f(-0.09, -0.6);

    glVertex2f(0.3, -0.5);
    glVertex2f(0.25, -0.6);
    glVertex2f(0.4, -0.5);
    glVertex2f(0.35, -0.6);

    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.25, -0.6);
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.35, -0.6);
    glEnd();
    //////////////////depth////////////////
    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 0.1);
    glVertex2f(0.08, -0.5);//in the middle
    glVertex2f(0.08, -0.6);
    glVertex2f(-0.08, -0.6);
    glVertex2f(-0.08, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.3, -0.5);
    glVertex2f(0.25, -0.6);
    glVertex2f(0.35, -0.6);
    glVertex2f(0.4, -0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.3, -0.5);
    glVertex2f(-0.25, -0.6);
    glVertex2f(-0.35, -0.6);
    glVertex2f(-0.4, -0.5);
    glEnd();
    ///////////////////////////

    //glColor3f(0.4f, 0.4f, 0.4f);//grey
    glColor3f(0.32, 0.38, 0.5);
    drawFilledCircle(0.61, 0.28, 0.22);
    drawFilledCircle(0.61, -0.28, 0.22);
    drawFilledCircle(-0.61, 0.28, 0.22);
    drawFilledCircle(-0.61, -0.28, 0.22);

    ////////////////////////depth//////////////////////////
    glBegin(GL_POLYGON); // head
    glColor4f(1, 1, 1, 0.15);//white
    glVertex2f(-0.7, 0.47);//
    glVertex2f(-0.8, 0.4);//1
    glVertex2f(-0.8, -0.4);//2
    glVertex2f(-0.7, -0.47);//
    glColor4f(0.204, 0.204, 0.204, 0.15);//darker shade of grey
    glVertex2f(0.7, -0.47);//
    glVertex2f(0.8, -0.4);//3
    glVertex2f(0.8, 0.4);//4
    glVertex2f(0.7, 0.47);//
    glEnd();
    //////////////////////////////////////////////////////////////
    //lines in between the eyes
    glBegin(GL_POLYGON);
    glColor4f(0.06, 0.15, 0.16, 0.5);
    glVertex2f(0.3, 0.47);//1
    glVertex2f(0.3, -0.47);//2
    glVertex2f(0.25, -0.47);//3
    glVertex2f(0.25, 0.47);//4
    glEnd();
    glBegin(GL_POLYGON); // body 
    glVertex2f(-0.25, 0.47);//1
    glVertex2f(-0.25, -0.46);//2
    glVertex2f(-0.3, -0.47);//3
    glVertex2f(-0.3, 0.47);//4
    glEnd();
    //circles in the lines
    float gg[] = { 0.0,0.0,0.0,1 };//black
    glColor3f(0.6, 0.6, 0.6);
    for (float y = 0.45f; y > -0.48; y -= 0.2) {
        drawFilledCircle(0.275, y, 0.02);
        drawFilledCircle(-0.275, y, 0.02);
    }
    //eyes
    float innerC[] = { 0.7,0.7,0.7,1 };
    //float couterC[] = { 0.3,0.3,0.3,1 };
    float couterC[] = { 0.14, 0.16, 0.21 ,1 };
    float outerC[] = { 0,0,0,0.1 };
    Circle(0.2, 0.57, 0.1, couterC);
    Circle(0.2, -0.57, 0.1, couterC);
    Circle(0.19, 0.57, 0.1, outerC);
    Circle(0.19, -0.57, 0.1, outerC);
    Circle(0.14, 0.57, 0.1, innerC);
    Circle(0.14, -0.57, 0.1, innerC);
    //to add depth in the eyes
    float lighterinner[] = { 1,1,1,0.2 };
    Circle(0.13, 0.57, 0.1, lighterinner);
    Circle(0.13, -0.57, 0.1, lighterinner);
    float light[4] = { 1,1,1,0.2 };
    Circle(0.12, -0.57, 0.1, light);
    Circle(0.12, 0.57, 0.1, light);

    //the mouth
    float g[] = { 0.17, 0.2, 0.25,1 };//black
    Circle(0.05, 0.19, -0.25, g);
    Circle(0.05, -0.19, -0.25, g);
    glBegin(GL_POLYGON); // body 
    glColor3f(0.17, 0.2, 0.25);
    glVertex2f(0.19, -0.2);
    glVertex2f(0.19, -0.3);
    glVertex2f(-0.19, -0.3);
    glVertex2f(-0.19, -0.2);
    glEnd();

    //headphones
    glBegin(GL_LINES); // lines -->
    glVertex2f(0.85, 0.2);//1
    glVertex2f(0.85, 0.6);//2
    glEnd();
    glBegin(GL_LINES); //  <--
    glVertex2f(-0.85, 0.2);//1
    glVertex2f(-0.85, 0.6);//2
    glEnd();

    glBegin(GL_POLYGON); // right 
    //glColor4f(0.3f, 0.3f, 0.3f, 1);
    glColor3f(0.14, 0.16, 0.21);
    glVertex2f(0.9, 0.28);//1
    glVertex2f(0.9, -0.28);//2
    glVertex2f(0.82, -0.28);//3
    glVertex2f(0.82, 0.28);//4
    glEnd();


    glBegin(GL_POLYGON); //  left
    glVertex2f(-0.9, 0.28);//1
    glVertex2f(-0.9, -0.28);//2
    glVertex2f(-0.82, -0.28);//3
    glVertex2f(-0.82, 0.28);//4
    glEnd();

    //circles in that line
    float ff[] = { 0.28, 0.32, 0.4,1 };
    Circle(0.07, 0.85, 0.6, ff);
    Circle(0.07, -0.85, 0.6, ff);
    float fff[] = { 255, 204, 153,0.2 };//black
    Circle(0.07, 0.85, 0.6, fff);
    Circle(0.07, -0.85, 0.6, fff);
    float ffff[] = { 1, 1, 1,0.1 };//black
    Circle(0.06, 0.85, 0.6, ffff);
    Circle(0.06, -0.85, 0.6, ffff);

    glDisable(GL_BLEND);

    glPopMatrix();
}
void robotSide(double x, double y, double z, double f) {
    glLoadIdentity();
    glPushMatrix();
    glScalef(z, f, 1.0f);
    glTranslatef(x, y, 0.0f);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    //side
    glColor3f(0.38, 0.44, 0.56);
    glBegin(GL_POLYGON);
    glVertex2f(0.23, 0.40);//1
    glVertex2f(0.62, 0.30);//2
    glVertex2f(0.62, -0.24);//3
    glVertex2f(0.237, -0.28);//4
    glEnd();


    glBegin(GL_POLYGON); // head
    glVertex2f(0.70, 0.22);//1
    glVertex2f(0.70, -0.15);//2
    glVertex2f(0.50, -0.19);//3
    glVertex2f(0.50, 0.22);//4
    glEnd();

    drawFilledCircle(0.60, 0.20, 0.10);
    drawFilledCircle(0.60, -0.14, 0.10);

    glColor3f(0.32, 0.38, 0.5);//////////////////////////////////////////////
    glBegin(GL_POLYGON); // head
    glVertex2f(0.23, 0.40);//1
    glVertex2f(0.237, -0.28);//2
    glVertex2f(-0.55, -0.28);//3
    glVertex2f(-0.584, 0.40);//4
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.32, 0.38, 0.5);
    glVertex2f(0.36, 0.27);//1
    glVertex2f(0.36, -0.15);//2
    glVertex2f(-0.71, -0.15);//3
    glVertex2f(-0.71, 0.25);//4
    glEnd();

    glColor3f(0.32, 0.38, 0.5);///////////////
    drawFilledCircle(0.23, 0.27, 0.13);
    drawFilledCircle(0.23, -0.152, 0.13);
    drawFilledCircle(-0.58, -0.152, 0.13);
    drawFilledCircle(-0.584, 0.27, 0.13);

    //the base
    glColor4f(0.38, 0.44, 0.56, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.36, -0.265);//1
    glVertex2f(0.26, -0.35);//2
    glVertex2f(-0.33, -0.35);//3
    glVertex2f(-0.45, -0.27);//4
    glEnd();

    //as a border
    glBegin(GL_LINES);
    glColor3f(0.3f, 0.3f, 0.3f);//grey
    glVertex2f(0.215, -0.26);
    glVertex2f(0.16, -0.35);

    glVertex2f(0.16, -0.26);
    glVertex2f(0.12, -0.35);


    glVertex2f(-0.03, -0.27);
    glVertex2f(-0.04, -0.35);

    glVertex2f(-0.09, -0.27);
    glVertex2f(-0.084, -0.35);

    glVertex2f(-0.26, -0.27);
    glVertex2f(-0.23, -0.35);

    glVertex2f(-0.33, -0.27);
    glVertex2f(-0.27, -0.35);
    glEnd();

    /////////////////////depth/////////////////////////
    glBegin(GL_POLYGON);
    glColor4f(1, 1, 1, 0.1);
    glVertex2f(0.215, -0.26);
    glVertex2f(0.16, -0.35);
    glVertex2f(0.12, -0.35);
    glVertex2f(0.16, -0.26);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.03, -0.27);
    glVertex2f(-0.04, -0.35);
    glVertex2f(-0.084, -0.35);
    glVertex2f(-0.09, -0.27);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.26, -0.27);
    glVertex2f(-0.23, -0.35);
    glVertex2f(-0.27, -0.35);
    glVertex2f(-0.33, -0.27);
    glEnd();

    //eyes
    float gsh[] = { 0.24, 0.27, 0.34,1 };
    float innerC[] = { 0.7,0.7,0.7,1 };
    float couterC[] = { 0.14, 0.16, 0.21 ,1 };
    float couter[] = { 0.14, 0.16, 0.21 ,0.7 };
    Ellipse(0.156, 0.12, 0.14, 0.14, gsh);//right
    Ellipse(0.126, 0.12, 0.14, 0.14, couterC);
    Ellipse(0.126, 0.12, 0.105, 0.10, couter);
    Ellipse(0.136, 0.12, 0.09, 0.10, innerC);//inner
    Ellipse(-0.57, 0.12, 0.11, 0.14, gsh);//lift
    Ellipse(-0.60, 0.12, 0.11, 0.14, couterC);
    Ellipse(-0.60, 0.12, 0.08, 0.10, couter);
    Ellipse(-0.59, 0.12, 0.07, 0.10, innerC);//inner
    //lines in between the eyes
    glBegin(GL_POLYGON);
    glColor4f(0.06, 0.15, 0.16, 0.5);
    glVertex2f(-0.02, 0.40);//1
    glVertex2f(-0.02, -0.256);//2
    glVertex2f(-0.04, -0.256);//3
    glVertex2f(-0.04, 0.40);//4
    glEnd();
    glBegin(GL_POLYGON); // body 
    glVertex2f(-0.43, 0.40);//1
    glVertex2f(-0.41, 0.40);//2
    glVertex2f(-0.41, -0.28);//3
    glVertex2f(-0.43, -0.28);//4
    glEnd();
    //the shadow of the mouth
    float gs[] = { 0.24, 0.27, 0.34,1 };//black
    Circle(0.04, -0.11, -0.124, gs);
    Circle(0.04, -0.34, -0.124, gs);
    glBegin(GL_POLYGON); // body 
    glVertex2f(-0.11, -0.084);
    glVertex2f(-0.11, -0.164);
    glVertex2f(-0.34, -0.164);
    glVertex2f(-0.34, -0.084);
    glEnd();
    //the mouth
    float g[] = { 0.14, 0.16, 0.21 ,1 };
    Circle(0.04, -0.13, -0.12, g);
    Circle(0.04, -0.36, -0.12, g);
    glBegin(GL_POLYGON); // body 
    glVertex2f(-0.13, -0.08);
    glVertex2f(-0.13, -0.16);
    glVertex2f(-0.36, -0.16);
    glVertex2f(-0.36, -0.08);
    glEnd();


    //shadow of headphones or whatever

    float h[] = { 0.24, 0.27, 0.34,1 };
    Ellipse(0.53, 0.03, 0.10, 0.15, h);
    glBegin(GL_POLYGON); // body 
    glColor3f(0.24, 0.27, 0.34);
    glVertex2f(0.53, 0.18);
    glVertex2f(0.53, -0.12);
    glVertex2f(0.58, -0.12);
    glVertex2f(0.58, 0.18);
    glEnd();
    //headphones or whatever
    float hph[] = { 0.14, 0.16, 0.21 ,1 };
    Ellipse(0.58, 0.03, 0.10, 0.15, hph);
    //above the headphones
    glBegin(GL_LINES); // body 
    glVertex2f(0.56, 0.45);//1
    glVertex2f(0.56, 0.18);//2
    glEnd();
    glBegin(GL_LINES); // body 
    glVertex2f(-0.52, 0.40);//1
    glVertex2f(-0.52, 0.50);//2
    glEnd();
    //circles in that line
    float ff[] = { 0.28, 0.32, 0.4,1 };
    Circle(0.06, 0.56, 0.51, ff);
    Circle(0.06, -0.52, 0.56, ff);

    glDisable(GL_BLEND);

    glPopMatrix();
}
float translation2 = 0;
float translationx = 0;
float Sclae = 0;
float R_counter = 1;
float xx = 4, yy = -1.5, x_face1 = -0.1, y_face1 = -1.75, y_face2 = -5, y_side2 = -5, y_face3 = -4, x_face2 = -5.5, x_face3 = 5;
float smokecolor[4] = { 0.24,0.02,0.03,1 };
float smokecolor2[4] = { 0.56,0.4,0.16,0.7 };
float smokecolor3[4] = { 0.87, 0.17, 0.17,0.7 };

void drawRobot() {
    R_counter = R_counter - 0.002;
    //walking robot
    robotSide(xx, yy, 0.30, 0.30);
    if (R_counter <= -0.91) {
        if (xx <= -4) {
            xx = 4;
        }
        else { xx -= 0.1; }
    }


    //the main robot
    robotFace(x_face1, y_face1, 0.4, 0.40);
    if (R_counter <= -0.91) {
        y_face1 -= 0.001;
        x_face1 -= 0.001;
        if (y_face1 >= -1) {
            y_face1 = -1;

        }

        glPushMatrix();
        //  glScalef(Sclae, Sclae, 0);
        glTranslatef(translationx, translation, 0);
        smock(0, -1, 0.7, 0.7, smokecolor);
        smock(0.2, -1.4, 0.5, 0.5, smokecolor2);
        smock(-0.01, -0.9, 0.75, 0.75, smokecolor3);

        glPopMatrix();
        botEys(x_face1, y_face1, 0.4, 0.40);
    }

    // side robot on the left
    robotFace(x_face2, y_face2, 0.15, 0.15);
    if (R_counter <= -0.91) {
        if (y_face2 >= 6.3 || x_face2 >= 6.3) {
            y_face2 = -6;
            x_face2 = -6;
        }
        y_face2 += 0.1;
        x_face2 += 0.1;
    }
    //side robot on the right
    robotSide(x_face3, y_side2, 0.15, 0.15);
    if (R_counter <= -0.91) {
        if (y_side2 >= 6.3 || x_face3 <= -6.3) {
            y_side2 = -6;
            x_face3 = 6;
        }
        y_side2 += 0.1;
        x_face3 -= 0.1;
    }
}

float  angle;
void Butterfly() {
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPushMatrix();
    glTranslatef(.9, -.75, 0);
    glRotatef(90, 0, 0, 1);
    glScalef(0, 0, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    glColor4f(0.5, 0.2, 0.3, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.60);
    glVertex2f(0.05, 0.65);
    glVertex2f(0.10, 0.70);
    glVertex2f(0.15, 0.74);
    glVertex2f(0.25, 0.79);
    glVertex2f(0.29, 0.80);
    glVertex2f(0.32, 0.81);
    glVertex2f(0.28, 0.80);
    glVertex2f(0.30, 0.76);
    glVertex2f(0.29, 0.73);
    glVertex2f(0.28, 0.70);
    glColor4f(0.9, 0.6, 0.6, 1);
    glVertex2f(0.27, 0.65);
    glVertex2f(0.26, 0.62);
    glVertex2f(0.25, 0.60);
    glVertex2f(0.21, 0.55);
    glVertex2f(0.17, 0.54);
    glVertex2f(0.16, 0.53);
    glVertex2f(0.10, 0.54);
    glVertex2f(0.05, 0.55);
    glVertex2f(0.03, 0.56);
    glVertex2f(0.0, 0.57);

    // glColor4f(0.1, 0.23, 0.22,0.5);
    glVertex2f(0.16, 0.53);
    glVertex2f(0.20, 0.51);
    glVertex2f(0.22, 0.50);
    glVertex2f(0.23, 0.47);
    glVertex2f(0.23, 0.45);
    glVertex2f(0.22, 0.43);
    glVertex2f(0.21, 0.40);
    glVertex2f(0.20, 0.37);
    glVertex2f(0.19, 0.35);
    glVertex2f(0.18, 0.31);
    glColor4f(0.5, 0.2, 0.3, 1);
    glVertex2f(0.15, 0.32);
    glVertex2f(0.13, 0.33);
    glVertex2f(0.10, 0.34);
    glVertex2f(0.07, 0.37);
    glVertex2f(0.05, 0.40);
    glVertex2f(0.04, 0.45);
    glVertex2f(0.03, 0.50);
    glVertex2f(0.02, 0.55);
    glVertex2f(0.0, 0.57);

    //----------------------------------------
    glColor4f(0.5, 0.2, 0.3, 1);
    glVertex2f(0.0, 0.60);
    glVertex2f(-0.05, 0.65);
    glVertex2f(-0.10, 0.70);
    glVertex2f(-0.15, 0.74);
    glVertex2f(-0.25, 0.79);
    glVertex2f(-0.29, 0.80);
    glVertex2f(-0.32, 0.81);
    glVertex2f(-0.28, 0.80);
    glVertex2f(-0.30, 0.76);
    glVertex2f(-0.29, 0.73);
    glVertex2f(-0.28, 0.70);
    glColor4f(0.9, 0.6, 0.6, 1);
    glVertex2f(-0.27, 0.65);
    glVertex2f(-0.26, 0.62);
    glVertex2f(-0.25, 0.60);
    glVertex2f(-0.21, 0.55);
    glVertex2f(-0.17, 0.54);
    glVertex2f(-0.16, 0.53);
    glVertex2f(-0.10, 0.54);
    glVertex2f(-0.05, 0.55);
    glVertex2f(-0.03, 0.56);
    glVertex2f(0.0, 0.57);
    //------------------------------------
    glVertex2f(-0.16, 0.53);
    glVertex2f(-0.20, 0.51);
    glVertex2f(-0.22, 0.50);
    glVertex2f(-0.23, 0.47);
    glVertex2f(-0.23, 0.45);
    glVertex2f(-0.22, 0.43);
    glVertex2f(-0.21, 0.40);
    glVertex2f(-0.20, 0.37);
    glVertex2f(-0.19, 0.35);
    glColor4f(0.5, 0.2, 0.3, 1);
    glVertex2f(-0.18, 0.31);
    glVertex2f(-0.15, 0.32);
    glVertex2f(-0.13, 0.33);
    glVertex2f(-0.10, 0.34);
    glVertex2f(-0.07, 0.37);
    glVertex2f(-0.05, 0.40);
    glVertex2f(-0.04, 0.45);
    glVertex2f(-0.03, 0.50);
    glVertex2f(-0.02, 0.55);
    glVertex2f(0.0, 0.57);

    glEnd();
    glPopMatrix();
    glDisable(GL_BLEND);

}
void Clock() {

    glLoadIdentity();
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);
    float pi = 3.14159265;

    float sine2, cosine2;
    for (int i = 0; i < 100; i++) {
        cosine2 = (0.55 * cos(i * 2 * pi / 100));
        sine2 = (0.55 * sin(i * 2 * pi / 100));
        glBegin(GL_POLYGON);
        glColor4f(0.35, 0.36, 0.44, 0.5);
        glVertex2f(cosine2, sine2);
        glVertex2f((0.55 * cos((i + 1) * 2 * pi / 100)), (0.55 * sin((i + 1) * 2 * pi / 100)));
    }
    glEnd();

    float sine, cosine;
    glColor4f(1.0f, 1.0f, 1.f, 0.5);
    for (int i = 0; i < 100; i++) {
        cosine = (0.5 * cos(i * 2 * pi / 100));
        sine = (0.5 * sin(i * 2 * pi / 100));
        glBegin(GL_POLYGON);
        glVertex2f(cosine, sine);
        glVertex2f((0.5 * cos((i + 1) * 2 * pi / 100)), (0.5 * sin((i + 1) * 2 * pi / 100)));
    }
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor4f(0.0f, 0.0f, 0.0f, 0.5);
    glVertex2f(0.0, 0.44);
    glVertex2f(0.0, 0.3);
    //--------
    glVertex2f(0.27, 0.38);
    glVertex2f(0.16, 0.25);
    //--------
    glVertex2f(0.42, 0.2);
    glVertex2f(0.26, 0.14);
    //--------
    glVertex2f(0.46, 0.0);
    glVertex2f(0.29, 0.0);
    //------------------------
    glVertex2f(0.41, -0.21);
    glVertex2f(0.27, -0.11);
    //--------
    glVertex2f(0.24, -0.4);
    glVertex2f(0.16, -0.25);
    //--------
    glVertex2f(0.0, -0.46);
    glVertex2f(0.0, -0.29);


    //-------------------------
    glVertex2f(-0.27, -0.38);
    glVertex2f(-0.16, -0.24);
    //--------
    glVertex2f(-0.42, -0.2);
    glVertex2f(-0.27, -0.11);
    //--------

    glVertex2f(-0.46, 0);
    glVertex2f(-0.29, 0);
    //-------------------------
    glVertex2f(-0.42, 0.22);
    glVertex2f(-0.26, 0.14);
    //--------
    glVertex2f(-0.29, 0.36);
    glVertex2f(-0.17, 0.25);
    //--------
    glEnd();

    glPointSize(6);
    glBegin(GL_POINTS);
    glVertex2f(0, 0);
    glDisable(GL_BLEND);
    //glEnd();
    glEnd();
    glPopMatrix();

}
void clockWise() {

    glColor4f(0.0f, 0.0f, 0.0f, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.05, 0.17);
    glVertex2f(0.05, 0.17);
    glVertex2f(0, 0.25);
    //---------------
    glVertex2f(-0.17, -0.11);
    glVertex2f(-0.09, -0.18);
    glVertex2f(-0.18, -0.2);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);

    glVertex2f(0, 0.17);
    glVertex2f(0, 0);
    //---------------
    glVertex2f(0, 0);
    glVertex2f(-0.15, -0.18);
    glEnd();


    glPopMatrix();
}
void R_Butterfly() {
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPushMatrix();
    glTranslatef(1, -1, 0);
    glRotatef(90, 0, 0, 1);
    glScalef(0.40, 0.40, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.5, 0.2, 0.3, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.60);
    glVertex2f(0.05, 0.65);
    glVertex2f(0.10, 0.70);
    glVertex2f(0.15, 0.74);
    glVertex2f(0.25, 0.79);
    glVertex2f(0.29, 0.80);
    glVertex2f(0.32, 0.81);
    glVertex2f(0.28, 0.80);
    glVertex2f(0.30, 0.76);
    glVertex2f(0.29, 0.73);
    glVertex2f(0.28, 0.70);
    glColor4f(0.9, 0.6, 0.6, 0.5);
    glVertex2f(0.27, 0.65);
    glVertex2f(0.26, 0.62);
    glVertex2f(0.25, 0.60);
    glVertex2f(0.21, 0.55);
    glVertex2f(0.17, 0.54);
    glVertex2f(0.16, 0.53);
    glVertex2f(0.10, 0.54);
    glVertex2f(0.05, 0.55);
    glVertex2f(0.03, 0.56);
    glVertex2f(0.0, 0.57);

    // glColor4f(0.1, 0.23, 0.22,0.5);
    glVertex2f(0.16, 0.53);
    glVertex2f(0.20, 0.51);
    glVertex2f(0.22, 0.50);
    glVertex2f(0.23, 0.47);
    glVertex2f(0.23, 0.45);
    glVertex2f(0.22, 0.43);
    glVertex2f(0.21, 0.40);
    glVertex2f(0.20, 0.37);
    glVertex2f(0.19, 0.35);
    glVertex2f(0.18, 0.31);
    glColor4f(0.5, 0.2, 0.3, 0.5);
    glVertex2f(0.15, 0.32);
    glVertex2f(0.13, 0.33);
    glVertex2f(0.10, 0.34);
    glVertex2f(0.07, 0.37);
    glVertex2f(0.05, 0.40);
    glVertex2f(0.04, 0.45);
    glVertex2f(0.03, 0.50);
    glVertex2f(0.02, 0.55);
    glVertex2f(0.0, 0.57);

    //----------------------------------------

    glEnd();
    glPopMatrix();

}
void L_Butterfly() {
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glPushMatrix();
    glTranslatef(1, -1, 0);
    glRotatef(90, 0, 0, 1);
    glScalef(0.40, 0.40, 0);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4f(0.5, 0.2, 0.3, 0.5);
    glBegin(GL_POLYGON);

    //----------------------------------------
    glColor4f(0.5, 0.2, 0.3, 0.5);
    glVertex2f(0.0, 0.60);
    glVertex2f(-0.05, 0.65);
    glVertex2f(-0.10, 0.70);
    glVertex2f(-0.15, 0.74);
    glVertex2f(-0.25, 0.79);
    glVertex2f(-0.29, 0.80);
    glVertex2f(-0.32, 0.81);
    glVertex2f(-0.28, 0.80);
    glVertex2f(-0.30, 0.76);
    glVertex2f(-0.29, 0.73);
    glVertex2f(-0.28, 0.70);
    glColor4f(0.9, 0.6, 0.6, 0.5);
    glVertex2f(-0.27, 0.65);
    glVertex2f(-0.26, 0.62);
    glVertex2f(-0.25, 0.60);
    glVertex2f(-0.21, 0.55);
    glVertex2f(-0.17, 0.54);
    glVertex2f(-0.16, 0.53);
    glVertex2f(-0.10, 0.54);
    glVertex2f(-0.05, 0.55);
    glVertex2f(-0.03, 0.56);
    glVertex2f(0.0, 0.57);
    //------------------------------------
    glVertex2f(-0.16, 0.53);
    glVertex2f(-0.20, 0.51);
    glVertex2f(-0.22, 0.50);
    glVertex2f(-0.23, 0.47);
    glVertex2f(-0.23, 0.45);
    glVertex2f(-0.22, 0.43);
    glVertex2f(-0.21, 0.40);
    glVertex2f(-0.20, 0.37);
    glVertex2f(-0.19, 0.35);
    glColor4f(0.5, 0.2, 0.3, 0.5);
    glVertex2f(-0.18, 0.31);
    glVertex2f(-0.15, 0.32);
    glVertex2f(-0.13, 0.33);
    glVertex2f(-0.10, 0.34);
    glVertex2f(-0.07, 0.37);
    glVertex2f(-0.05, 0.40);
    glVertex2f(-0.04, 0.45);
    glVertex2f(-0.03, 0.50);
    glVertex2f(-0.02, 0.55);
    glVertex2f(0.0, 0.57);

    glEnd();
    glPopMatrix();


}
float L_ButterFlyAngle, R_ButterFlyAngle, ButterFlyAngle = 0;
float s1, s2 = 0;
float B_counter = 1;
void drawButterFly() {

    B_counter = B_counter - 0.002;
    if (B_counter >= -0.70) {
        glPushMatrix();

        glRotatef(-L_ButterFlyAngle, 0.0, 0.0, 1.0);
        glTranslatef(B_counter, 0.0, 0.0);
        s1 = s1 + 0.001;
        if (s1 >= 3)
            s1 = 0;
        glScalef(1.0, s1, 1.0);
        L_Butterfly();
        glPopMatrix();
    }
    if (B_counter >= -0.70) {
        glPushMatrix();

        glRotatef(-R_ButterFlyAngle, 0.0, 0.0, 1.0);
        glTranslatef(B_counter, 0.0, 0.0);
        s2 = s2 + 0.001;
        if (s2 >= 3)
            s2 = 0;
        glScalef(1.0, s2, 1.0);
        R_Butterfly();

        glPopMatrix();
    }
}
float clockAngle = 0;

void drawClock() {
    Clock();
    glPushMatrix();
    glRotatef(clockAngle, 0, 0, 1);

    clockWise();
    glEnd();
    glPopMatrix();
}
void displayACT1(float skycolor[4], float groundColor[3], float groundColor2[3], float treeColor[4]) { //المدينة البدائية
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer
    //the ground
    glBegin(GL_QUADS);
    //glColor3f(0.1f, 0.4f, 0.2f);   // green
    glColor4fv(groundColor);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glColor4fv(groundColor2);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
    //the sky
    glBegin(GL_QUADS);
    glEnable(GL_BLEND);
    glColor3f(0.4f, 0.7f, 0.9f);   // blue
    //glColor4fv(skycolor);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    //glColor3f(0.4f, 0.7f, 0.9f); // blue
    //glColor3f(0.9f, 0.9f, 0.9f);
    glColor4fv(skycolor);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glDisable(GL_BLEND);
    glEnd();


    //the sun
    float c[] = { 1.0,0.6,0.0,1 };
    Circle(0.17, 0.3, 0.8, c);

    ////the cloud
    //cloud();

    //road
    glBegin(GL_QUADS);
    glColor3f(0.15, 0.1, 0.05);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glColor3f(0.38, 0.31, 0.15);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(-0.5f, -1.0f);
    glEnd();
    //the houses
    //float houseC[] = { 0.5,0.4,0.4,1 };  
    float houseC[] = { 0.66, 0.49, 0.32,1 };
    float houseC2[] = { 0.65, 0.44, 0.22,1 };
    float houseC3[] = { 0.39, 0.22, 0.05,1 };
    float houseC4[] = { 0.47, 0.29, 0.11,1 };
    float houseC5[] = { 0.48, 0.32, 0.17,1 };
    float houseC6[] = { 0.35, 0.27, 0.19,1 };
    /// on the right side
    drawHouse(0.9, -0.8, 0.25, 0.25, houseC5);
    drawHouse(1.8, -0.8, 0.25, 0.25, houseC4);
    drawHouse(2.9, -0.9, 0.25, 0.25, houseC2);
    drawHouse(0.6, -1, 0.5, 0.5, houseC);
    drawHouse(0.65, -1.3, 0.7, 0.7, houseC3);

    /*/// on the left side
    drawHouse(-2, -0.8, 0.25, 0.25 ,houseC);
    drawHouse(-3, -0.9, 0.25, 0.25, houseC5);
    drawHouse(-2, -1.5, 0.25, 0.25, houseC3);
    drawHouse(-2, -1, 0.5, 0.5, houseC2);
    drawHouse(-1.5, -1.3, 0.7, 0.7, houseC6);*/

    /// on the left side
    drawHouse(-2, -0.8, 0.25, 0.25, houseC);
    drawHouse(-3, -0.9, 0.25, 0.25, houseC5);
    //drawHouse(-3, -2, 0.25, 0.25, houseC3);/////
    drawHouse(-1.5, -1, 0.5, 0.5, houseC2);
    drawHouse(-1.5, -1.3, 0.7, 0.7, houseC6);

    //tree
    tree(treeColor);
}
void displayACT2(float skycolor[4], float groundColor[3], float treeColor[4]) {//المدينة الشوية متطورة////////////////////////////////////////////////
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer
    //----------the ground------------
    glBegin(GL_QUADS);
    //glColor3f(0.1f, 0.4f, 0.2f);   // green
    glColor4fv(groundColor);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(-1.0f, -1.0f);
    glEnd();
    //-----------the sky------------
    glBegin(GL_QUADS);
    glEnable(GL_BLEND);
    glColor3f(0.4f, 0.7f, 0.9f);   // blue
    //glColor4fv(skycolor);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    //glColor3f(0.4f, 0.7f, 0.9f); // blue
    //glColor3f(0.9f, 0.9f, 0.9f);
    glColor4fv(skycolor);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glDisable(GL_BLEND);
    glEnd();


    //-----------the sun--------
    float c[] = { 1.0,0.6,0.0,1 };
    Circle(0.17, 0.3, 0.8, c);

    ////the cloud
    //cloud();

    //-------road------
    glBegin(GL_QUADS);
    glColor3f(.4, 0.4, 0.5);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.2f, 0.0f);
    glColor3f(.1, 0.1, 0.);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(-0.5f, -1.0f);
    glEnd();

    //----------line----------
    glColor3f(1.0, 1.0, 1.0);
    glLineWidth(2);
    glLineStipple(5, 0x0C0F);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3f(1.f, 1.f, 1.f);
    glVertex2f(-0, -1);
    glVertex2f(0, 0);
    glDisable(GL_LINE_STIPPLE);
    glEnd();


    bulding();
    //tree

    tree(treeColor);

}
void displyACT3() {
    star();
    bulding2();
    bulding2effect2();
    bulding3();
    bulding3DepthEffect();
    //drawRobot();
    glEnd();
}
void displayTexture() {

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    //glTexEnvf( GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE, GL_REPLACE);

    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    glEnable(GL_TEXTURE_2D);



    glBindTexture(GL_TEXTURE_2D, myTexture2);



    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0); glVertex2f(-1.1, -1.35);
    glTexCoord2f(1.0, 0.0); glVertex2f(1.2, -1.35);
    glTexCoord2f(1.0, 1.0); glVertex2f(1.2, 1.35);

    glTexCoord2f(0.0, 1.0); glVertex2f(-1.1, 1.35);

    glEnd();

    glDisable(GL_TEXTURE_2D);


}
void spin() {
    clockAngle += 0.05;
    if (clockAngle >= 360)
        clockAngle = 0;
    ButterFlyAngle += 0.1;

    if (ButterFlyAngle >= 1.0)
        ButterFlyAngle = 0;
    if (translation <= -10) {
        translation = 0;
        translationx = 0;
    }
    else {
        translation -= 0.01;
        translationx += 0.01;
    }

    glutPostRedisplay();

}
float R_angle;
void animation() {
    R_angle += 0.005;

    float summerground[] = { 0.05, 0.13, 0.08,1 };
    float sg2[] = { 0.11f, 0.36f, 0.16f,1 };
    float summerTree[] = { 0.3,0.4,0.1,1 };
    float summersky[] = { 0.22, 0.46, 0.90, 1.0 };
    /////////////////////////////////////////
    //0.31, 0.22, 0.13
    //float fallground[] = { 0.8f, 0.5f, 0.3f,1 };
    //float fg[] = { 0.8f, 0.5f, 0.3f,1 };
    float fallground[] = { 0.31, 0.22, 0.13,1 };
    float fg[] = { 0.8f, 0.5f, 0.3f,1 };
    float fallTree[] = { 0.8,0.5,0.1,.2 };
    float fallsky[] = { 1,0.90,0.86,1 };
    //////////////////////////////////////////
    float winter[] = { 1.67, 1.71, 1.69,1 };
    float wintersky[] = { 0.06, 0.10, 0.16,1 };
    float winter2[] = { 1.75, 1.84, 1.77, 1.0 };

    if (R_angle >= 0 && R_angle <= 10) {
        glClear(GL_COLOR_BUFFER_BIT);
        displyACT3();
        drawButterFly();
        drawRobot();

        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);


    }
    else if (R_angle >= 10 && R_angle <= 41) {
        glClear(GL_COLOR_BUFFER_BIT);
        displayACT2(wintersky, winter, winter);
        drawClock();
        cloud();
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);


    }
    else if (R_angle >= 41 && R_angle <= 72) {
        glClear(GL_COLOR_BUFFER_BIT);
        float wintersky[] = { 0.8,0.8,0.8,1 };
        displayACT2(fallsky, fallground, fallTree);
        drawClock();
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    }
    else if (R_angle >= 72 && R_angle <= 103) {
        glClear(GL_COLOR_BUFFER_BIT);
        displayACT2(summersky, summerground, summerTree);
        drawClock();
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);//////////////////////

    }
    else if (R_angle >= 103 && R_angle <= 134) {
        glClear(GL_COLOR_BUFFER_BIT);
        displayACT1(wintersky, winter2, winter, winter);
        drawClock();
        cloud();

        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);


    }
    else if (R_angle >= 134 && R_angle <= 165) {
        glClear(GL_COLOR_BUFFER_BIT);
        displayACT1(fallsky, fallground, fg, fallTree);
        drawClock();
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    }
    else if (R_angle >= 165 && R_angle <= 196) {
        glClear(GL_COLOR_BUFFER_BIT);
        displayACT1(summersky, summerground, sg2, summerTree);
        drawClock();

        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    }
    else if (R_angle >= 196 && R_angle <= 350) {
        glClear(GL_COLOR_BUFFER_BIT);
        displayTexture();
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    }
    glutPostRedisplay();
}
float translate_Value = 0;
float translate_Value2 = 0;
void keyInteraction(unsigned char button, int x, int y) {
    switch (button)
    {
    case '0':
        if (translate_Value <= -2) {
            translate_Value = -2;
        }
        else {
            translate_Value -= 0.04;

        }
        cout << "Translate on x axis :" << translate_Value << endl;
        break;
    case '1':
        if (translate_Value2 <= -1) {
            translate_Value2 = -1;
        }
        else {
            translate_Value2 -= 0.04;

        }
        cout << "Translate on y axis :" << translate_Value << endl;
        break;

    default:
        break;
    }
}
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

    gluLookAt(0, 0, 1, 0, 0, 0, 0, 1, 0);
    Butterfly();

    glPushMatrix();
    animation();

    glPushMatrix();
    glTranslatef(0.4, 0.8, 0.0);
    glPushMatrix();
    glTranslatef(translate_Value, translate_Value2, 0.0);
    glRotatef(-ButterFlyAngle, 0.0, 0.0, 1.0);
    R_Butterfly();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4, 0.8, 0.0);
    glPushMatrix();
    glTranslatef(translate_Value, translate_Value2, 0.0);
    glRotatef(-ButterFlyAngle, 0.0, 0.0, 1.0);
    L_Butterfly();
    glPopMatrix();

    glPopMatrix();
    glFlush();
    glutSwapBuffers();


}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500, 500); // Set width & height
    glutInitWindowPosition(150, 150); // Position 
    glutCreateWindow("Computer first bug"); // title
    setup();
    glutReshapeFunc(reshape);
    glutIdleFunc(play);
    glutIdleFunc(spin);
    glutKeyboardFunc(keyInteraction);
    glutDisplayFunc(display); //disply the painting
    glutMainLoop();
    return 0;
}


