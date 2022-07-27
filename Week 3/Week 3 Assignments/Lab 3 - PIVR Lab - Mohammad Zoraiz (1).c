//////////////////////////////////////////////////////////////////////////////////////////
//File 				Voltage_Power_Lab_3
//Author			Mohammad Zoraiz
//Date				29 June 2022
//Function Name			main
//Formal Parameters		CurrentMain, OhmsMain
//Return Type			float
//Description			Compute the power dissapated in a resistor and the voltage measured accross a resistor. 
//                      Based on these results, determine whether the voltage or power ratings are okay or exceeded.
//////////////////////////////////////////////////////////////////////////////////////////

#include "stdio.h"
#pragma warning(disable:4996)

int volts(float Current, float Ohms);
int power(float Current, float Ohms);
int display(int V_test, int P_test);

float main(float CurrentMain, float OhmsMain)
{
	
float V_test, P_test, AmpsMain, VoltageMain, amps, voltage;
char disf;

	printf("What is the Current (I) through the resistor?");
    scanf("%f", &CurrentMain);
    printf("What is the Resistance (R) through the resistor?");
    scanf("%f", &OhmsMain);
    
    V_test=volts(CurrentMain, OhmsMain);
    P_test=power(CurrentMain, OhmsMain);
    AmpsMain=CurrentMain*CurrentMain*OhmsMain;
    VoltageMain=CurrentMain*OhmsMain;
    
    printf("R=""%.0f\n", OhmsMain);
    printf("I=""%.3e\n", CurrentMain);
    printf("P=""%.1f\n", AmpsMain);
    printf("V=""%.1f\n", VoltageMain);

    
    disf=display(V_test, P_test);
    
    return(disf);
    

	
	//Create variables for main
	
	//Describe what the program does to the user

	//Prompt the user for current and resistor variable data and then get and store
	
	//Call programmer defined (your) functions to display input variables and result variables based on test condition results
}


// PROGRAMMER FUNCTIONS

/////////////////////////////////////////////////////////////////////////////////////////
//Function:          volts
//Formal Parameters: float Current, float Ohms
//Return Type:       int 
//Description:       Calculates the power and resultingly tests and returns good/bad result
//////////////////////////////////////////////////////////////////////////////////////////
int volts(float Current, float Ohms)
{
float voltage=Current*Ohms;
  
    if (voltage <= 50)
        return 0;
    return 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
//Function:          power
//Formal Parameters: float current,float ohms
//Return Type:       int
//Description:       Calculates the power and resultingly tests and returns good/bad result
//////////////////////////////////////////////////////////////////////////////////////////
int power(float Current, float Ohms)
{
float amps=Current*Current*Ohms;
   
    if (amps<=1)
        return 0;
    return 1;
}

//////////////////////////////////////////////////////////////////////////////////////////
//Function:          display
//Formal Parameters: int V_test, int P_test
//Return Type:       void
//Description:       Displays the power and voltage test results, indicating wether the cirucit in question is safe or not
//////////////////////////////////////////////////////////////////////////////////////////
int display(int V_test, int P_test)
{
 
    if (P_test==1 && V_test==0)
        printf("The power in the Resistor is too high and the Resistor will be damaged\n");
    if (P_test==0)
        printf("The power dissipated in the Resistor is OK\n");
    if (V_test==0)
        printf("The voltage across the Resistor is OK\n");
    if (V_test==1 && P_test==0)
        printf("The voltage across the Resistor is too high and the Resistor will be damaged\n");
    if (V_test==1 && P_test==1)
        printf("Both resistor ratings for power and voltage have been exceeded and the Resistor failed\n");

return 0;
    
}

/* RESULTS 
________________________________________________________
Test Case 1:

What is the Current (I) through the resistor?0.040
What is the Resistance (R) through the resistor?2200
R=2200
I=0.04
P=3.52
V=88.0
Both resistor ratings for power and voltage have been exceeded and the Resistor failed
________________________________________________________
Test Case 2:

What is the Current (I) through the resistor?10e-3
What is the Resistance (R) through the resistor?1500
R=1500
I=1.00e-3
P=0.15
V=15.0
The power dissipated in the Resistor is OK
The voltage across the Resistor is OK

________________________________________________________
Test Case 3:

What is the Current (I) through the resistor?16.66e-3
What is the Resistance (R) through the resistor?3600
R=3600
I=1.67e-2
P=1.0
V=60.0
The power dissipated in the Resistor is OK
The voltage across the Resistor is too high and the Resistor will be damaged

________________________________________________________
Test Case 4:

What is the Current (I) through the resistor?40e-3
What is the Resistance (R) through the resistor?1250
R=1250
I=4.000e-2
P=2.0
V=50.0
The power in the Resistor is too high and the Resistor will be damaged
The voltage across the Resistor is OK


NOTE: Most Current Values added a few decimal zero values than e-2.
I tried to tinker around with it but couldn't figure it out, I hope that is fine. Thanks!
*/



