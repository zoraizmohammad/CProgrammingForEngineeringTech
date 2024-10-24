/*
Name: Mohammad Zoraiz
Class: CPET 1120
Professor: Professor White
Assignment: Lab 5 - Area calculation with pointers
*/


#include<stdio.h>
#include<conio.h>
#include<ctype.h>

#define PI 3.14

#pragma warning(disable:4996)

void a_rect(float *fS1_ptr, float *fS2_ptr, float *fAR_ptr);
void a_square(float *fS_ptr, float *fAS_ptr);
void a_circle(float *fR_ptr, float *fAC_ptr);
void a_triangle(float *fB_ptr, float *fH_ptr, float *fAT_ptr);
void display(char csel, float fs1, float fs2, float fA_rec, float fs, float fA_sq, float fr,  float fA_cir, float fb, float fh, float fA_tri);


//////////////////////////////////////////////////////////////////////
/*

Function -- void main
Formal Parameters -- void
Return Type -- none
Description -- Asks user question regarding type of area calculation requested through a switch case.
This calls on the proper function for the calculation and sends the appropriate data to the display function after calling on it.

*/
//////////////////////////////////////////////////////////////////////
void main(void)

{

float iSelect, fS1, fS2, fa_rec, fS, fa_sq, fR, fa_cir, fB, fH, fa_tri;
char cSel;




    printf("A - Calculate and display the area of a rectangle.\n");
    printf("B - Calculate and display the area of a square.\n");
    printf("C - Calculate and display the area of a circle.\n");
    printf("D - Calculate and display the area of a triangle.\n");
    printf("Q - quit");
    printf("\nSelect A, B, C, D, or Q => ");
    cSel =(toupper (getchar()));
    puts("\n");
    
    
    switch(cSel)
    {
    case 'A': 
        a_rect(&fS1, &fS2, &fa_rec);
        display(cSel, fS1, fS2, fa_rec, fS, fa_sq, fR, fa_cir, fB, fH, fa_tri);
        break;
    case 'B': 
        a_square(&fS, &fa_sq);
        display(cSel, fS1, fS2, fa_rec, fS, fa_sq, fR, fa_cir, fB, fH, fa_tri);;
        break;
    case 'C': 
        a_circle(&fR, &fa_cir);
        display(cSel, fS1, fS2, fa_rec, fS, fa_sq, fR, fa_cir, fB, fH, fa_tri);
        break;
    case 'D':
        a_triangle(&fB, &fH, &fa_tri);
        display(cSel, fS1, fS2, fa_rec, fS, fa_sq, fR, fa_cir, fB, fH, fa_tri);
        break;
    case 'Q': 
        break;
    default : 
        printf("\n\nYou did not enter A, B, C, D or Q \n");
    }

}

//////////////////////////////////////////////////////////////////////
/*

Function -- void a_rect
Formal Parameters -- float *fS1_ptr, float *fS2_ptr, float *fAR_ptr
Return Type -- none
Description -- User inputs the two sides of rectangles and program calculates the area using derefrenced pointers.

*/
//////////////////////////////////////////////////////////////////////

void a_rect(float *fS1_ptr, float *fS2_ptr, float *fAR_ptr) 
{
    float side1, side2, arearectangle;
    
    printf("Enter side 1 lenght => ");
    scanf("%f", &side1);
    printf("Enter side 2 lenght => ");
    scanf("%f", &side2);
    
    *fS1_ptr = side1;
    *fS2_ptr = side2;
    
    arearectangle = side1 * side2;
    
    *fAR_ptr = arearectangle;
    
    
}

//////////////////////////////////////////////////////////////////////
/*

Function -- void a_square
Formal Parameters -- float *fS_ptr, float *fAS_pt
Return Type -- none
Description -- User inputs the lenght of the sides of the square and program calculates the area using derefrenced pointers.

*/
//////////////////////////////////////////////////////////////////////

void a_square(float *fS_ptr, float *fAS_ptr)
{
    float fS, areasqr;
    
    printf("Enter side lenght of the square => ");
    scanf("%f", &fS);
    
    *fS_ptr = fS;
    areasqr = fS *fS;
    
    *fAS_ptr = areasqr;
}

//////////////////////////////////////////////////////////////////////
/*

Function -- void a_circle
Formal Parameters -- float *fR_ptr, float *fAC_ptr
Return Type -- none
Description -- User inputs the radius of the circle and program calculates the area using derefrenced pointers.

*/
//////////////////////////////////////////////////////////////////////


void a_circle(float *fR_ptr, float *fAC_ptr)
{
    float fR, areacircle;
    
    printf("Enter the radius of the circle => ");
    scanf("%f", &fR);
    
    *fR_ptr = fR ;
    areacircle = fR * fR* PI;
    
    *fAC_ptr = areacircle;
}

//////////////////////////////////////////////////////////////////////
/*

Function -- void a_triangle
Formal Parameters -- float *fB_ptr, float *fH_ptr, float *fAT_ptr
Return Type -- none
Description -- User inputs the lenght of the base and height of the triangle and program calculates the area using derefrenced pointers.

*/
//////////////////////////////////////////////////////////////////////

void a_triangle(float *fB_ptr, float *fH_ptr, float *fAT_ptr)
{
    float base, height, areatriangle;
    
    printf("Enter the lenght of the base of the triangle => ");
    scanf("%f", &base);
    printf("Enter the height of the triangle => ");
    scanf("%f", &height);
    
    *fB_ptr = base;
    *fH_ptr = height;
    
    areatriangle = height*base*0.5;
    
    *fAT_ptr = areatriangle;

}

//////////////////////////////////////////////////////////////////////
/*

Function -- void display
Formal Parameters -- char csel, float fs1, float fs2, float fA_rec, float fs, float fA_sq, float fr,  float fA_cir, float fb, float fh, float fA_tri
Return Type -- none
Description -- The correct statement describing user inputted parametrs and resultant area of desired is selected via an if, else if, else structure.
This is through using the switch case selection letters from the main function and printed out apporpriately with the pointers designated from functions to main. 

*/
//////////////////////////////////////////////////////////////////////

void display(char csel, float fs1, float fs2, float fA_rec, float fs, float fA_sq, float fr,  float fA_cir, float fb, float fh, float fA_tri)
{

    if (csel == 'A')
        {
        printf("\nThe inputted lenght of side one is: " "%.2f\n", fs1);
        printf("The inputted lenght of side two is: " "%.2f\n", fs2);
        printf("The area of the rectangle is: " "%.2f\n", fA_rec);
        }
    else if (csel == 'B')
        {
        printf("\nThe inputted lenght of every side of the square is: " "%.2f\n", fs);
        printf("The area of the square is: " "%.2f\n", fA_sq);
        }
    else if (csel == 'C')
        {
        printf("\nThe inputted radius of the circle is: " "%.2f\n", fr);
        printf("The area of the circle is: " "%.2f\n", fA_cir);
        }
    else if (csel == 'D')
        {
        printf("\nThe inputted base of the triangle is: " "%.2f\n", fb);
        printf("The inputted height of the triangle is: " "%.2f\n", fh);
        printf("The area of the triangle is: " "%.2f\n", fA_tri);
        }
    else if (csel == 'Q')
    {

    }
    else
    {
        printf("\n\nYou did not enter A, B, C, D or Q \n");
    }

}

/* 
TEST CASE FOR A ----------------------------------
A - Calculate and display the area of a rectangle.
B - Calculate and display the area of a square.
C - Calculate and display the area of a circle.
D - Calculate and display the area of a triangle.
Q - quit
Select A, B, C, D, or Q => A


Enter side 1 lenght => 12
Enter side 2 lenght => 13

The inputted lenght of side one is: 12.00
The inputted lenght of side two is: 13.00
The area of the rectangle is: 156.00

TEST CASE FOR B ----------------------------------
A - Calculate and display the area of a rectangle.
B - Calculate and display the area of a square.
C - Calculate and display the area of a circle.
D - Calculate and display the area of a triangle.
Q - quit
Select A, B, C, D, or Q => B


Enter side lenght of the square => 223

The inputted lenght of every side of the square is: 223.00
The area of the square is: 49729.00

TEST CASE FOR C ----------------------------------
A - Calculate and display the area of a rectangle.
B - Calculate and display the area of a square.
C - Calculate and display the area of a circle.
D - Calculate and display the area of a triangle.
Q - quit
Select A, B, C, D, or Q => C


Enter the radius of the circle => 29

The inputted radius of the circle is: 29.00
The area of the circle is: 2640.74

TEST CASE FOR D ----------------------------------
A - Calculate and display the area of a rectangle.
B - Calculate and display the area of a square.
C - Calculate and display the area of a circle.
D - Calculate and display the area of a triangle.
Q - quit
Select A, B, C, D, or Q => D


Enter the lenght of the base of the triangle => 32
Enter the height of the triangle => 43

The inputted base of the triangle is: 32.00
The inputted height of the triangle is: 43.00
The area of the triangle is: 688.00

TEST CASE FOR Q ----------------------------------
A - Calculate and display the area of a rectangle.
B - Calculate and display the area of a square.
C - Calculate and display the area of a circle.
D - Calculate and display the area of a triangle.
Q - quit
Select A, B, C, D, or Q => Q

*/