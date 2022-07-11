// vs19 test program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Copy and paste the below code into your open Visual Studio project or into 
// the online compiler located here: https://www.onlinegdb.com/online_c_compiler

#include <stdio.h>
#pragma warning(disable:4996)        // Needed to compile when using VS19 scanf()

void main(void)
{
	int numerouno, numerodos;

	printf("This program performs various math functions on two user entered numbers.\n");
	printf("Please enter your first number -> ");
	scanf("%d", &numerouno);
	while (getchar() != '\n');
	printf("Now enter your second number -> ");
	scanf("%d", &numerodos);
	while (getchar() != '\n');

	printf("\nThe math functions are:");
	printf("\n%d + %d = %d\n", numerouno, numerodos, numerouno + numerodos);
	printf("\n%d - %d = %d\n", numerouno, numerodos, numerouno - numerodos);
	printf("\n%d * %d = %d\n", numerouno, numerodos, numerouno * numerodos);
	printf("\n%d/%d = %d and %d/%d\n", numerouno, numerodos, numerouno / numerodos, numerouno % numerodos, numerodos);
}

