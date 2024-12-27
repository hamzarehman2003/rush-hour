//============================================================================
// Name        : 	.cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================


/*
HAMZA REHMAN
I21-0478
RUSH HOUR
*/

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


int xI = 20, yI = 600;
int x2 = 60, y2 = 450;
int x3 = 520, y3=520;
int f;
void drawCarT() {
	DrawCircle(xI,yI-8,5,colors[BLACK]);
	DrawCircle(xI+18,yI-8,5,colors[BLACK]);
	DrawSquare(xI,yI,20,colors[RED]);
	
	
	glutPostRedisplay();
}



void drawpassenger4(){
			
			
       int x10=700,y10=900;
	DrawCircle(x10, y10, 7,colors[RED]);
	DrawRoundRect(x10-2, y10-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x10-10, y10-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x10+2, y10-10, 9, 3,colors[BLACK],3);	






	int x6=520,y6=290;
	DrawCircle(x6, y6, 7,colors[RED]);
	DrawRoundRect(x6-2, y6-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x6-10, y6-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x6+2, y6-10, 9, 3,colors[BLACK],3);
	
	
	 int x7=180,y7=390;
	DrawCircle(x7, y7, 7,colors[RED]);
	DrawRoundRect(x7-2, y7-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x7-10, y7-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x7+2, y7-10, 9, 3,colors[BLACK],3);
	
	
	 int x8=60,y8=90;
	DrawCircle(x8, y8, 7,colors[RED]);
	DrawRoundRect(x8-2, y8-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x8-10, y8-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x8+2, y8-10, 9, 3,colors[BLACK],3);
	
	
	 int x9=570,y9=640;
	DrawCircle(x9, y9, 7,colors[RED]);
	DrawRoundRect(x9-2, y9-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x9-10, y9-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x9+2, y9-10, 9, 3,colors[BLACK],3);
	
	glutPostRedisplay();

}
void drawpassenger3(){
          DrawCircle (910, 470, 30,colors[GREEN]);
	






	int x6=520,y6=290;
	DrawCircle(x6, y6, 7,colors[RED]);
	DrawRoundRect(x6-2, y6-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x6-10, y6-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x6+2, y6-10, 9, 3,colors[BLACK],3);
	
	
	 int x7=180,y7=390;
	DrawCircle(x7, y7, 7,colors[RED]);
	DrawRoundRect(x7-2, y7-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x7-10, y7-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x7+2, y7-10, 9, 3,colors[BLACK],3);
	
	
	 int x8=60,y8=90;
	DrawCircle(x8, y8, 7,colors[RED]);
	DrawRoundRect(x8-2, y8-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x8-10, y8-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x8+2, y8-10, 9, 3,colors[BLACK],3);
	
	
	 int x9=570,y9=640;
	DrawCircle(x9, y9, 7,colors[RED]);
	DrawRoundRect(x9-2, y9-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x9-10, y9-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x9+2, y9-10, 9, 3,colors[BLACK],3);
	
	glutPostRedisplay();
}  

void darwpassenger2(){

	 int x5=300,y5=580;
	DrawCircle(x5, y5, 7,colors[RED]);
	DrawRoundRect(x5-2, y5-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x5-10, y5-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x5+2, y5-10, 9, 3,colors[BLACK],3);
	






	int x6=520,y6=290;
	DrawCircle(x6, y6, 7,colors[RED]);
	DrawRoundRect(x6-2, y6-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x6-10, y6-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x6+2, y6-10, 9, 3,colors[BLACK],3);
	
	
	 int x7=180,y7=390;
	DrawCircle(x7, y7, 7,colors[RED]);
	DrawRoundRect(x7-2, y7-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x7-10, y7-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x7+2, y7-10, 9, 3,colors[BLACK],3);
	
	
	 int x8=60,y8=90;
	DrawCircle(x8, y8, 7,colors[RED]);
	DrawRoundRect(x8-2, y8-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x8-10, y8-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x8+2, y8-10, 9, 3,colors[BLACK],3);
	
	
	 int x9=570,y9=640;
	DrawCircle(x9, y9, 7,colors[RED]);
	DrawRoundRect(x9-2, y9-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x9-10, y9-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x9+2, y9-10, 9, 3,colors[BLACK],3);
	
	glutPostRedisplay();
}



void drawpassenger1(){
		   
		   DrawCircle(470 , 120 , 30, colors[GREEN]);
	
	 int x6=520,y6=290;
	DrawCircle(x6, y6, 7,colors[RED]);
	DrawRoundRect(x6-2, y6-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x6-10, y6-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x6+2, y6-10, 9, 3,colors[BLACK],3);
	
	
	 int x7=180,y7=390;
	DrawCircle(x7, y7, 7,colors[RED]);
	DrawRoundRect(x7-2, y7-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x7-10, y7-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x7+2, y7-10, 9, 3,colors[BLACK],3);
	
	
	 int x8=60,y8=90;
	DrawCircle(x8, y8, 7,colors[RED]);
	DrawRoundRect(x8-2, y8-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x8-10, y8-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x8+2, y8-10, 9, 3,colors[BLACK],3);
	
	
	 int x9=570,y9=640;
	DrawCircle(x9, y9, 7,colors[RED]);
	DrawRoundRect(x9-2, y9-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x9-10, y9-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x9+2, y9-10, 9, 3,colors[BLACK],3);
	
	glutPostRedisplay();
}

void drawpassenger()
{
          int x5=900,y5=535;
	DrawCircle(x5, y5, 7,colors[RED]);
	DrawRoundRect(x5-2, y5-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x5-10, y5-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x5+2, y5-10, 9, 3,colors[BLACK],3);
	
	
	 int x6=520,y6=290;
	DrawCircle(x6, y6, 7,colors[RED]);
	DrawRoundRect(x6-2, y6-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x6-10, y6-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x6+2, y6-10, 9, 3,colors[BLACK],3);
	
	
	 int x7=180,y7=390;
	DrawCircle(x7, y7, 7,colors[RED]);
	DrawRoundRect(x7-2, y7-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x7-10, y7-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x7+2, y7-10, 9, 3,colors[BLACK],3);
	
	
	 int x8=60,y8=90;
	DrawCircle(x8, y8, 7,colors[RED]);
	DrawRoundRect(x8-2, y8-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x8-10, y8-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x8+2, y8-10, 9, 3,colors[BLACK],3);
	
	
	 int x9=570,y9=640;
	DrawCircle(x9, y9, 7,colors[RED]);
	DrawRoundRect(x9-2, y9-25, 4, 22,colors[BLACK],3);
	DrawRoundRect(x9-10, y9-10, 9, 3,colors[BLACK],3);
	DrawRoundRect(x9+2, y9-10, 9, 3,colors[BLACK],3);
	
	glutPostRedisplay();
}

void drawCar() {



//DrawSquare(xI, yI, 30, colors[RED]);
	//drawing the wheelchair
	DrawRoundRect(xI, yI, 15, 30, colors[RED]);	//top
	DrawRoundRect(xI, yI, 30, 15, colors[RED]);	//side
	DrawCircle(xI+15, yI, 11.5, colors[BLACK]);	//wheel
	DrawCircle(xI+15, yI, 10.5, colors[WHITE]);	//inner wheel
	DrawCircle(xI+15, yI, 9.5, colors[BLACK]);	//inner inner wheel


	//DrawCircle(xI,yI-8,5,colors[BLACK]);
	//DrawCircle(xI+18,yI-8,5,colors[BLACK]);
	//DrawSquare(xI,yI,20,colors[OLIVE]);
	
	
	glutPostRedisplay();
}
void drawCar1() {
	DrawCircle(x2,y2-8,5,colors[BLACK]);
	DrawCircle(x2+18,y2-8,5,colors[BLACK]);
	DrawSquare(x2,y2,20,colors[GREEN]);
	
	
	glutPostRedisplay();
}

void drawCar2() {
	DrawCircle(x3,y3-8,5,colors[BLACK]);
	DrawCircle(x3+18,y3-8,5,colors[BLACK]);
	DrawSquare(x3,y3,20,colors[GREEN]);
	
	
	glutPostRedisplay();
}

void drawtree() // trees.....
{
     DrawCircle( 160, 285, 20, colors[GREEN]);
     DrawRectangle(159,250,5, 20, colors[BROWN]);
     
     DrawCircle( 268, 285, 20, colors[GREEN]);
     DrawRectangle(267,250,5, 20, colors[BROWN]);
     
     DrawCircle( 214, 285, 20, colors[GREEN]);
     DrawRectangle(213,250,5, 20, colors[BROWN]);
     
     
     
     
     DrawCircle( 660, 430, 20, colors[GREEN]);
     DrawRectangle(659,395,5, 20, colors[BROWN]);
     
     DrawCircle( 706, 430, 20, colors[GREEN]);
     DrawRectangle(705,395,5, 20, colors[BROWN]);
     
     DrawCircle( 769, 430, 20, colors[GREEN]);
     DrawRectangle(768,395,5, 20, colors[BROWN]);
     
     
     
     
     DrawCircle( 450, 300, 20, colors[GREEN]);
     DrawRectangle(449,250,5, 30, colors[BROWN]);
     
     
     
     DrawCircle( 860, 320, 20, colors[GREEN]);
     DrawRectangle(829,320,15, 5, colors[BROWN]);
     
     
     
     
     glutPostRedisplay();
     }
     
 void stringg()
 {
 
       DrawCircle( 950, 750, 30,colors[GREEN]); 
 }
     
void drawrectangle() { // buildings/obstacles
	
	DrawRectangle(401, 10,403, 50, colors[BLACK]);
	DrawRectangle(500, 550, 150, 50, colors[BLACK]);
	DrawRectangle(120, 450, 100, 50, colors[BLACK]);
	DrawRectangle(100, 200, 450, 50, colors[BLACK]);
	DrawRectangle(350, 100, 50, 250, colors[BLACK]);
	DrawRectangle(450, 400, 50, 250, colors[BLACK]);
	DrawRectangle(650, 50, 30, 250, colors[BLACK]);
	DrawRectangle(650, 350, 170, 50, colors[BLACK]);
	DrawRectangle(800, 250, 30, 150, colors[BLACK]);
	DrawRectangle(900, 50, 30, 150, colors[BLACK]);
	DrawRectangle(300, 350, 30, 150, colors[BLACK]);
	DrawRectangle(800, 450, 30, 100, colors[BLACK]);
	DrawRectangle(0, 0, 15, 655, colors[BLACK]);
	DrawRectangle(0, 650, 1050, 20, colors[BLACK]);
	DrawRectangle(1000, 0, 30, 655, colors[BLACK]);
	DrawRectangle(0, 0, 1050, 30, colors[BLACK]);
	
	glutPostRedisplay();
}
	


bool flag = true;
 void moveCar() {
	
	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}
void moveCarT() {
	
	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}

 void moveCar1() {	
	if (y2 > 60 && flag) {
		y2 -= 10;
		cout << "going down";
		if(y2 < 100)
			
			flag = false;

	}
	else if (y2 < 1010 && !flag) {
		cout << "go up";
		y2 += 10;
		if (y2 > 450)
			flag = true;
	}
}

 void moveCar2() {
	if (x3 > 10 && flag) {
		x3 -= 10;
		cout << "going left";
		if(x3 < 520)
			
			flag = false;

	}
	else if (x3 < 1010 && !flag) {
		cout << "go right";
		x3 += 10;
		if (x3 > 750)
			flag = true;
	}
}

/*
 * Main Canvas drawing function.
 * */
 
 
 
 
 void gamepass2(){
 
        glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	

	
	drawtree();
	DrawString( 300,800,"x= "+to_string(xI), colors[BLACK]);
	DrawString( 500,800,"y= "+to_string(yI), colors[BLACK]);
	
	
	
	//Display Score
	DrawString( 50, 800, "Score="+to_string(f), colors[BLACK]);
	
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	for(int i=0; i<=600 ; i+=50)
	DrawLine(0,650-i,1000,650-i,1,colors[BLACK]);	
		
	
	drawpassenger4();
	drawrectangle();
	drawCarT();
	drawCar1();
	drawCar2();
	
	glutSwapBuffers(); // do not modify this line..

 
 
 
 }
 
 
 void gamepass1(){
 
  glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	

	
	drawtree();
	DrawString( 300,800,"x= "+to_string(xI), colors[BLACK]);
	DrawString( 500,800,"y= "+to_string(yI), colors[BLACK]);
	
	
	
	//Display Score
	DrawString( 50, 800, "Score="+to_string(f), colors[BLACK]);
	
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	for(int i=0; i<=600 ; i+=50)
	DrawLine(0,650-i,1000,650-i,1,colors[BLACK]);	
		
	
	drawpassenger3();
	drawrectangle();
	drawCarT();
	drawCar1();
	drawCar2();
	
	glutSwapBuffers(); // do not modify this line..

 
 
 
 }
 void gamepass()
 {
 glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	

	
	drawtree();
	DrawString( 300,800,"x= "+to_string(xI), colors[BLACK]);
	DrawString( 500,800,"y= "+to_string(yI), colors[BLACK]);
	
	
	
	//Display Score
	DrawString( 50, 800, "Score="+to_string(f), colors[BLACK]);
	
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	for(int i=0; i<=600 ; i+=50)
	DrawLine(0,650-i,1000,650-i,1,colors[BLACK]);	
		
	
	darwpassenger2();
	drawrectangle();
	drawCarT();
	drawCar1();
	drawCar2();
	
	glutSwapBuffers(); // do not modify this line..

 
 
 }
 
 
 
 
 
 
void GameDisplay()
{

       

glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	

	
	drawtree();
	DrawString( 300,800,"x= "+to_string(xI), colors[BLACK]);
	DrawString( 500,800,"y= "+to_string(yI), colors[BLACK]);
	
	
	
	//Display Score
	DrawString( 50, 800, "Score="+to_string(f), colors[BLACK]);
	
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	for(int i=0; i<=600 ; i+=50)
	DrawLine(0,650-i,1000,650-i,1,colors[BLACK]);	
		
	
	drawpassenger();
	drawrectangle();
	drawCarT();
	drawCar1();
	drawCar2();
	
	glutSwapBuffers(); // do not modify this line..

}


void Gamepassenger()  {
glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	

	
	drawtree();
	DrawString( 300,800,"x= "+to_string(xI), colors[BLACK]);
	DrawString( 500,800,"y= "+to_string(yI), colors[BLACK]);
	
	
	stringg();
	//Display Score
	DrawString( 50, 800, "Score"+to_string(f), colors[BLACK]);
	DrawString( 750, 750, "DESTINATION:", colors[BLACK]);
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	for(int i=0; i<=600 ; i+=50)
	DrawLine(0,650-i,1000,650-i,1,colors[BLACK]);	
		
	
	drawpassenger1();
	drawrectangle();
	drawCar();
	drawCar1();
	drawCar2();
	
	glutSwapBuffers(); // do not modify this line..
	}


void GameDisplay1()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	
	
	

	
	drawtree();
	DrawString( 300,800,"x= "+to_string(xI), colors[BLACK]);
	DrawString( 500,800,"y= "+to_string(yI), colors[BLACK]);
	
	
	
	//Display Score
	DrawString( 50, 800, "Score"+to_string(f), colors[BLACK]);
	
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	for(int i=0; i<=600 ; i+=50)
	DrawLine(0,650-i,1000,650-i,1,colors[BLACK]);	
		
	
	drawpassenger();
	drawrectangle();
	drawCar();
	drawCar1();
	drawCar2();
	
	glutSwapBuffers(); // do not modify this line..

}
void mainmenu(){ // function to display main menu page
	glClearColor(1/*Red Component*/ ,	1/*Green Component*/,
			1/*Blue Component*/, 3 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	unsigned char key;
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	DrawString (250, 500,"WELCOME TO RUSH HOUR",colors[BLACK]);
	
	DrawString (200, 450,"PRESS ENTER TO START THE GAME WITH YELLOW",colors[BLACK]);
	
	DrawString (100, 400,"PRESS R TO START THE GAME WITH RED TAXI",colors[BLACK]);
	
	glutSwapBuffers();
	glutPostRedisplay();
	
	}
	
	


/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * //*/

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) { 
			 if (xI==230)
			{
		
		          if ( yI<=510 && yI >=430)
		      {
		      
		      }
		      else{
		xI -= 10;
		
		}
		}
		else if (xI==340)
		{
		if( yI<=510 && yI >=340)
		{
		 
		}
		else{
		xI -= 10;
		
		}
		}
		
		else if (xI==510)
		{
		if( yI<=630 && yI>= 390)
		{
		}
		else
		{
		xI-=10;
		}
		}
		else if (xI==400)
		{
		if(yI<=350 && yI>=80)
		{
		}
		else
		{
		xI-=10;
		}
		}
		else if (xI==660)
		    {
		      if( yI<=610 && yI>=530)
		      {
		      }
		      else
		      {
		      xI-=10;
		      }
		      }
		else if (xI== 690)
		{
		  if(yI <=  310 && yI >=70)
		  {
		  }
		  else 
		  {
		  xI-=10;
		  }
		  }
		 else if (xI== 840)
		      {
		        if((yI<=560 && yI>=430) || (yI<= 410 && yI>=230))
		        {
		        }
		        else
		        {
		        xI-=10;
		        }
		        }
		        
		  else if (xI==930)
		  {
		  if ( yI<=210 && yI>=40)
		  {
		  
		  }
		  else{
		  xI-=10;
		  }
		  }    
		     
		
		else{
		xI -= 10;
		
		}
		}
	 
	else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		if ( xI==90)
		      {
		      if ( yI<=510 && yI >=430)
		      {
		      
		      }	
		       else{
		xI += 10;
		}
		      }
		      
		
		else if ( xI==70)
		    {
		       if ( yI<=260 && yI >=180)
		       {
		       
		       }
		       else
		       {
		       xI+=10;
		       }
		    }
		   
		   else if(xI==320)
		        {
		           if(yI<=330 && yI>=80)
		           {
		           
		           }
		           else{
		xI += 10;
		}
		}
		
		else if( xI== 270)
		{
		if ( yI<=510 && yI >=340)
		{
		 
		}
		else{
		xI += 10;
		}
		}
		else if (xI== 420)
		{
		if ( yI<= 630 && yI >=380)
		{
		
		}
		else{
		xI += 10;
		}
		}
		
		else if ( xI == 620)
		{
		if ((yI<=380 && yI>=340) || (yI<=300 && yI >=70))
		
		       {
		       }
		       
		       
		       
		       else{
		xI += 10;
		}
		}
		
		else if (xI==770)
		{
		if( yI<=560 && yI>=230)
		{
		}
		else{
		xI += 10;
		}
		}
		else if ( xI==870)
		{
		if(yI<=210 && yI >=40)
		{
		
		}
		else{
		xI += 10;
		}
		}
		else{
		xI += 10;
		}
		}
		
		 
		
	
	 else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
			 
			if (yI==420)
			{
			 if ( xI<=230 && xI>=100)
			 {
			 
			 }
			 else{
			
		yI += 10;
	}
	}
	else if (yI==330)
	{
	if(xI<=320 && xI>=280)
	{
	
	}
	else{
			
		yI += 10;
	}
	}
		else if (yI==180)
		{
		if (xI<= 560   &&  xI >= 80   )
		{
		
		}
		else{
			
		yI += 10;
	}
	}
	else if (yI==70)
	{
		if(xI<= 410 && xI>=330)
		{
		}
		else{
			
		yI += 10;
	}
	}
	 else if ( yI== 520 )
	 {
	   if ( xI<= 660  &&   xI>= 510   )
	   {
	   
	   }
	   else{
			
		yI += 10;
	}
	}
	else if ( yI== 370  )
	{
	if ( xI <=  500  &&   xI>= 430  )
	{
	}
	else{
			
		yI += 10;
	}
	}
	
	else if ( yI>= 320 && yI<=340 )
	{
	       if ( xI <=  770  &&   xI>= 640  )
	{
	
	}
	else{
			
		yI += 10;
	}
	}
	else if ( yI>=230 && yI<= 240)
	{
	   if (xI <=830 && xI >= 780)
	   {
	   
	   }
	   else
	   {
	   yI+=10;
	   }
	   }
	
	
	else if ( yI== 430   )
	{
	if ( xI <= 800   &&   xI>= 830   )
	{
	}
	else{
			
		yI += 10;
	}
	}
	
	
	
	
				 
			    
			
			
			
			
			else{
			
		yI += 10;
	}
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		if(yI == 510)
		{
			if(xI >=110 && xI<=220)
			{
			
			}
			else if (xI >=280 && xI<=330)
			{
			
			}
			else
			{
				yI -= 10;
			}
			
		}
		else if (yI == 360)
		{
			if (xI>= 340 && xI<= 400)
			{
			
			}
			else
			{
			   yI-=10;
			}
		}
		else if(yI ==270)
		{
			if (xI>= 110 && xI <= 340)
			{
			
			}
			else if (xI >= 410 && xI <= 550)
			{
			
			}
			else 
			{
				yI-=10;
			}
		}
		else if (yI ==320)
			{
				if (xI>=630 && xI<= 680)
				{
				
				}
				else
				{
				yI-=10;
				}
			}
		else if (yI==70)
		{
		  	if (xI >= 380 && xI <=620)
		  	{
		  	}
		  	else if ( xI >= 690 && xI<= 800)
		  	{
		  	}
		  	else
		  	{
		  	yI-=10;
		  	}
		}
		else if ( yI== 620)
		{
			if(xI>= 500 && xI <= 650)
			{
			}
			else
			{
			yI-=10;
			}
		}
		else if (yI== 560)
			{
			if(xI>=770 && xI <=840)
			{
			}
			else
			{
			yI-=10;
			}
			}
		else if (yI== 460)
			{
			if (xI>=620 && xI<=770)
			{
			      f-=1;
			     
			}
			else 
			{
			yI-=10;
			}
			}
		else if (yI== 220)
		{
			if (xI>880 && xI < 930)
			{
			}
			else
			{
			yI-=10;
			}
			}	
		else
		{
			yI -= 10;
		}			
	}
	/*if(xI ==110 || xI == 120 || xI == 130 || xI == 140 || xI == 150 || xI 			== 160 || xI == 170 || xI == 180 || xI == 190 || xI == 200 || xI == 210 || xI==280 || xI==290 || xI==300|| xI==310|| xI==320|| xI==330)*/
//=====================================================================================	
	
	if (xI<=15  and key
			== GLUT_KEY_LEFT ) {
		
		xI += 10;
		

	} else if (xI>=980  and key
			== GLUT_KEY_RIGHT ) {
		xI -= 10;
		
	} else if (yI>=640 and key
			== GLUT_KEY_UP) {
		yI -= 10;
		
	}

	else if (yI<=30 and key
			== GLUT_KEY_DOWN) {
		yI += 10;
	}

//======================================================================================
	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
        
        
        
        
        
        
        if (key == 32)
        {
        	if (xI== 890 && yI== 530)
        	{
        		glutDisplayFunc(Gamepassenger);
        		
        		
        		
        		}
        	else if  (xI==460 && yI==120){
        	
			glutDisplayFunc( gamepass);      
			f+=10;  
        }
        	else if (xI==290 && yI==580){
        	        glutDisplayFunc(gamepass1);
        	}
        	else if( xI== 900 &&  yI== 470  ){
        	        glutDisplayFunc(gamepass2);
        	        f+=20;
        	}
        	}

	 else if (key==13 )
	{
				glutDisplayFunc( GameDisplay1);
				 
	}
	
       else 	if (key == 'r' || key == 'R'){
			
			glutDisplayFunc(GameDisplay);
			}
			
	/*if (key == 27/* Escape key ASCII*///) //{
		//exit(1); // exit the program when escape key is pressed.
	//}

	//if (key == 'b' || key == 'B') //Key for placing the bomb
			//{
		//do something if b is pressed
		//cout << "b pressed" << endl;

	//}
	glutPostRedisplay();
}






/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here
	//moveCar();
	//moveCar1(); 
	moveCar2();
	//glutDisplayFunc(mainmenu);

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by hamza rehman"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	mainmenu(); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
