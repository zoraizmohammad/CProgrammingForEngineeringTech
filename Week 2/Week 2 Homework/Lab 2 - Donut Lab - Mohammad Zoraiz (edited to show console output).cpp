//CPET 1120
//Donut_Lab_Mohammad_Zoraiz_Lab_2.cpp
//Mohammad Zoraz
//24-June-2022

// Note: Rad is the radius of the ring (R)
// Note: rad in the radius of the cross-sectional area of the donut (r) 
#include "stdio.h"
#define PI 3.141593

float calc_vol (float Rad, float rad);
float display (float Rad, float rad, float vol);

////////////////////////////////////////////////////////////////////////////////////////
//Function -- void main
//Formal Parameters -- void 
//Return Type -- none (asks question to user, then stores value of Rad and rad)
//Description -- Requests value of the size of the radius and cross-sectional radius of the donut from the user, which the program scans and stores
////////////////////////////////////////////////////////////////////////////////////////
int main (void)
{
    float  Rad, rad, vol, volf;
    char disf;
    
    printf("What is the radius of the ring (R)?");
    scanf("%f", &Rad);
    printf("What is the radius of cross-sectional area (r)?");
    scanf("%f", &rad);
    
    volf = calc_vol(Rad, rad);
    
    disf = display(Rad, rad, volf);
    
    return(disf);
    
}

////////////////////////////////////////////////////////////////////////////////////////
//Function -- calc_vol
//Formal Parameters -- float rad, float Rad
//Return Type -- float vol
//Description -- calculates the volume of a donut using user inputs r and R and then returns the volume to the function on the basis of a formula for a taurus
////////////////////////////////////////////////////////////////////////////////////////
float calc_vol(float Rad, float rad)
{
    float vol = 2 * PI * PI * Rad * rad * rad;
    return vol;
}

////////////////////////////////////////////////////////////////////////////////////////
//Function -- void_display
//Formal Parameters -- float Rad, float , float vol
//Return Type -- printf(...)
//Description -- displays inputted information and volume information as given by user and calculated by function
////////////////////////////////////////////////////////////////////////////////////////

float display(float Rad ,float rad ,float vol)
{
    printf("R = %.0f \nr = %.0f \nVolume = %.1f", Rad, rad, vol);
}

/*
Message from Console:

What is the radius of the ring (R)? 10
What is the radius of cross-sectional area (r)? 2
R = 10 
r = 2 
Volume = 789.6

*\