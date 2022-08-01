/*
Name: Mohammad Zoraiz
Class: CPET 1120
Professor: Professor White
Assignment: Lab 4 - Temprature Conversion Table
*/


#include<stdio.h>
#include<conio.h>
#include<ctype.h>

#pragma warning(disable:4996)

float calc_FtoC(float fFar);
void display_FtoC(float low, float high, float resolution);
float calc_CtoF(float fCel);
void display_CtoF(float low, float high, float resolution);
//////////////////////////////////////////////////////////////////////
/*

Function -- float main
Formal Parameters -- void
Return Type -- float (returns value of switch case)
Description -- Asks user question regarding type of conversion requested, then the maximum, minimum, and resolution of the conversion.
This enables a switch case the calls on the proper display function for the conversion table. 

*/
//////////////////////////////////////////////////////////////////////

float main(void)

{
float iSelect, low, high, resolution;
int cChoice;



do
{

    printf("A - Convert from Farenheit to Celcius\n");
    printf("B - Convert from Celcius to Farenheit\n");
    printf("Q - quit");
    printf("\nSelect A, B, or Q => ");
    cChoice =(toupper (getchar()));
    puts("\n");
    
    
    switch(cChoice)
    {
    case 'A': 
        printf("\nEnter lowest temperature Farenhite to covert from => ");
        scanf("%f",&low);
        while (getchar() != '\n');
        printf("Enter highest temprature Farenhite to convert to => ");
        scanf("%f",&high);
        while (getchar() != '\n');
        printf("Enter temprature Farenhite resolution => ");
        scanf("%f",&resolution);
        while (getchar() != '\n');
        
        display_FtoC(low, high, resolution);
        break;
    case 'B': 
        printf("\nEnter lowest temperature Celcius to covert from => ");
        scanf("%f",&low);
        while (getchar() != '\n');
        printf("Enter highest temprature Celcius to convert to => ");
        scanf("%f",&high);
        while (getchar() != '\n');
        printf("Enter temprature Celcius resolution => ");
        scanf("%f",&resolution);
        while (getchar() != '\n');
        
        display_CtoF(low, high, resolution);
        break;
    case 'Q': 
        break;
    default : 
        printf("\n\nYou did not enter A, B, or Q \n");
    }
}

while (iSelect == 'Q');
return 0;

}

//////////////////////////////////////////////////////////////////////
/*

Function -- float calc_FtoC
Formal Parameters -- float fFar
Return Type -- float (returns value of new Celius converted value on basis of Farenhite value)
Description -- Converts farenhite to celcius value  using conversion formula.

*/
//////////////////////////////////////////////////////////////////////

float calc_FtoC(float fFar)
{

float newCelcius;
return newCelcius = (fFar * 5.0/9.0) - 17.78;

}
//////////////////////////////////////////////////////////////////////
/*

Function -- void display_FtoC
Formal Parameters -- float low, float high, float resolution
Return Type -- none
Description -- Calls on calc_FtoC for conversion of Celcius values from farenhite values. 
Creates local variables to set range of conversion and prints table of values from low to high range set by user with the interval resolution set by the user.

*/
//////////////////////////////////////////////////////////////////////


void display_FtoC(float low, float high, float resolution)
{

float iCount1;
printf("\n  Farenheit           Celcius\n \n");

for (iCount1 = low; iCount1 <= high; iCount1+=resolution)
    {
        float newCelcius = calc_FtoC(iCount1);
        printf("%8.2f°F           %8.2f°C \n", iCount1, newCelcius);
    }

}

//////////////////////////////////////////////////////////////////////
/*

Function -- float calc_CtoF
Formal Parameters -- float fCel
Return Type -- float (returns value of new Farenhite converted value on basis of Celcius value)
Description -- Converts celcius to farenhite value using conversion formula.

*/
//////////////////////////////////////////////////////////////////////

float calc_CtoF(float fCel)
{

float newFarenhite;
return newFarenhite = fCel * (9.0/5.0) + 32.0;

}

//////////////////////////////////////////////////////////////////////
/*

Function -- void display_CtoF
Formal Parameters -- float low, float high, float resolution
Return Type -- none
Description -- Calls on calc_CtoF for conversion of Farenhite values from Celcius values. 
Creates local variables to set range of conversion and prints table of values from low to high range set by user with the interval resolution set by the user.

*/
//////////////////////////////////////////////////////////////////////

void display_CtoF(float low, float high, float resolution)
{

float iCount2;
printf("\n  Celcius             Farenhite\n \n");

for (iCount2 = low; iCount2 <= high; iCount2+=resolution)
    {
        float newFarenhite = calc_CtoF(iCount2);
        printf("%8.2f°C           %8.2f°F \n", iCount2, newFarenhite);
    }

}

/* Sample Responses:
//////////////////// A - Convert from Farenheit to Celcius
A - Convert from Farenheit to Celcius
B - Convert from Celcius to Farenheit
Q - quit
Select A, B, or Q => A



Enter lowest temperature to covert from => -10 
Enter highest temprature to convert to => 15
Enter temprature resolution => 2

  Farenheit               Celcius
 
  -10.00°F             -23.34°C 
   -8.00°F             -22.22°C 
   -6.00°F             -21.11°C 
   -4.00°F             -20.00°C 
   -2.00°F             -18.89°C 
    0.00°F             -17.78°C 
    2.00°F             -16.67°C 
    4.00°F             -15.56°C 
    6.00°F             -14.45°C 
    8.00°F             -13.34°C 
   10.00°F             -12.22°C 
   12.00°F             -11.11°C 
   14.00°F             -10.00°C 
   
//////////////////// B - Convert from Celcius to Farenhite
A - Convert from Farenheit to Celcius
B - Convert from Celcius to Farenheit
Q - quit
Select A, B, or Q => B



Enter lowest temperature to covert from => 186
Enter highest temprature to convert to => 199
Enter temprature resolution => 0.33

  Celcius             Farenhite
 
  186.00°C             366.80°F 
  186.33°C             367.39°F 
  186.66°C             367.99°F 
  186.99°C             368.58°F 
  187.32°C             369.18°F 
  187.65°C             369.77°F 
  187.98°C             370.36°F 
  188.31°C             370.96°F 
  188.64°C             371.55°F 
  188.97°C             372.15°F 
  189.30°C             372.74°F 
  189.63°C             373.33°F 
  189.96°C             373.93°F 
  190.29°C             374.52°F 
  190.62°C             375.12°F 
  190.95°C             375.71°F 
  191.28°C             376.30°F 
  191.61°C             376.90°F 
  191.94°C             377.49°F 
  192.27°C             378.09°F 
  192.60°C             378.68°F 
  192.93°C             379.27°F 
  193.26°C             379.87°F 
  193.59°C             380.46°F 
  193.92°C             381.06°F 
  194.25°C             381.65°F 
  194.58°C             382.24°F 
  194.91°C             382.84°F 
  195.24°C             383.43°F 
  195.57°C             384.03°F 
  195.90°C             384.62°F 
  196.23°C             385.21°F 
  196.56°C             385.81°F 
  196.89°C             386.40°F 
  197.22°C             387.00°F 
  197.55°C             387.59°F 
  197.88°C             388.18°F 
  198.21°C             388.78°F 
  198.54°C             389.37°F 
  198.87°C             389.97°F 

//////////////////// Q - Quit
A - Convert from Farenheit to Celcius
B - Convert from Celcius to Farenheit
Q - quit
Select A, B, or Q => Q

NOTE: I didn't find any test cases we had to try 
(I looked a lot for it, but couldn't find it, but if I missed it, please let me know and I can test them out if need be). Thanks Professor White!
*/
