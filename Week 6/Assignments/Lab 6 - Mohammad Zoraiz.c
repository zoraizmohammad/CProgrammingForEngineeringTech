/*
Name: Mohammad Zoraiz
Class: CPET 1120
Professor: Professor White
Assignment: Lab 6 - Number Sort/Max/Min. Finder Lab
*/


#define MAX 100
#include<stdio.h>
#include<conio.h>
#include<ctype.h>



void get_num(int *iAr[MAX], int *iN_ptr);
void max_num(int *iAr[], int *iN_ptr);
void min_num(int *iAr[], int *iN_ptr);
void sort_num(int *iAr[], int *iN_ptr);


//////////////////////////////////////////////////////////////////////
/*

Function -- void main
Formal Parameters -- void
Return Type -- none
Description -- Asks user question regarding type of number sorting (ie. find max, find min, sort by assending order) requested through a if/else if/else case. 
This calls on the proper function for the sorting/finding and sends the appropriate data to the display function after calling on it.

*/
//////////////////////////////////////////////////////////////////////

int main(void)
{
    int numbers[100], size;
    int iAr[MAX], iN; 
    float maxnum;
    char cChoice, Choicery;
    int intSelect;
    char *selection_ptr;

do
{

    printf("A - Enter numbers\n");
    printf("B - Determine the maximum number\n");
    printf("C - Determine the minimum number\n");
    printf("D - Sort the number list from lowest to highest\n");
    printf("Q - Quit");
    printf("\nSelect A, B, C, D or Q => ");
    cChoice = getch();
    printf("%c",cChoice);
    cChoice = toupper(cChoice);

    if (cChoice == 'A')
        {
        get_num(&numbers[100], &size);
        }
    else if (cChoice == 'B')
        {
        max_num(&numbers[100], &size);
        }
    else if (cChoice == 'C') 
    {
        min_num(&numbers[100], &size);
    }
    else if (cChoice == 'D')
        sort_num(&numbers[100], &size);
    else if (cChoice == 'Q')
    {
        
    }
    else
    {
        printf("\n\nYou did not enter A, B, C, D or Q \n");
    }
}
while (cChoice != 'Q');

}
//////////////////////////////////////////////////////////////////////
/*

Function -- void get_num(int *iAr[MAX], int *iN_ptr)
Formal Parameters -- int *iAr[MAX], int *iN_ptr
Return Type -- none
Description -- The operator enters up to 100 numbers that are stored in an array back in main using the iAr array pointer. The actual
number of array elements entered is stored in main as well using the iN_ptr pointer.

*/
//////////////////////////////////////////////////////////////////////
void get_num(int *iAr[MAX], int *iN_ptr)
{
    int iElement = 0;
    float fTemp;


    printf("\nEnter up to %d elements.\n"
            "To terminate entry, enter a letter.\n", MAX);
    while ((iElement< MAX) && (scanf("%f",&fTemp) == 1))
        iAr[iElement++] = (int)fTemp;
    
    *iN_ptr = iElement;
    
} 

//////////////////////////////////////////////////////////////////////
/*

Function -- void max_num(int *iAr[], int *iN_ptr)
Formal Parameters -- int *iAr[], int *iN_ptr
Return Type -- none
Description -- Determines and displays the maximum number from the stored list and saves it into the max variavle, the number of elements in
the list is displayed by calling on the iAr pointer, and the entire list of numbers that were entered is displayed by calling on the *in_ptr pointer.

*/
//////////////////////////////////////////////////////////////////////
void max_num(int *iAr[], int *iN_ptr)
{
    int iElement;
    int max = iAr[0];

    for (iElement = 0; iElement < *iN_ptr; iElement++)
        if (iAr[iElement] > max)
            max = iAr[iElement];
    
    printf("\nThe array elements are:\n");
    for (iElement = 0; iElement < *iN_ptr; iElement++)
        printf("%-6d\n", iAr[iElement]);
    
    printf("\nThe number of array elements are:%d \n",*iN_ptr);
 
    printf("\nThe maximum value from the array is:%d \n", max);
}

//////////////////////////////////////////////////////////////////////
/*

Function -- void min_num(int *iAr[], int *iN_ptr)
Formal Parameters -- int *iAr[], int *iN_ptr
Return Type -- none
Description -- Determines and displays the minimum number from the stored list and saves it into the min variavle, the number of elements in
the list is displayed by calling on the iAr pointer, and the entire list of numbers that were entered is displayed by calling on the *in_ptr pointer.

*/
//////////////////////////////////////////////////////////////////////
void min_num(int *iAr[], int *iN_ptr)
{
    int iElement;
    int min = iAr[0];

    for (iElement = 0; iElement < *iN_ptr; iElement++)
        if (iAr[iElement] < min)
            min = iAr[iElement];
            
    
    printf("\nThe array elements are:\n");
    for (iElement = 0; iElement < *iN_ptr; iElement++)
        printf("%-6d\n", iAr[iElement]);
    
    printf("\nThe number of array elements are:%d \n",*iN_ptr);
    
    printf("\nThe maximum value from the array is:%d \n", min);
}

//////////////////////////////////////////////////////////////////////
/*

Function -- void sort_num(int *iAr[], int *iN_ptr)
Formal Parameters -- int *iAr[], int *iN_ptr
Return Type -- none
Description -- Determines and displays a sorted number list, from lowest to highest, as well as the original
number list.

*/
//////////////////////////////////////////////////////////////////////

void sort_num(int *iAr[], int *iN_ptr) 
{
    int iElement;
    int localsort, maxfinder;

    printf("\nThe unsorted array elements are:\n");
    for (iElement = 0; iElement < *iN_ptr; iElement++)
        printf("%-6d\n", iAr[iElement]);
    
    for (iElement = 0; iElement < *iN_ptr; ++iElement){
      for (maxfinder = iElement + 1; maxfinder < *iN_ptr; ++maxfinder){
         if (iAr[iElement] > iAr[maxfinder]){
            localsort = iAr[iElement];
            iAr[iElement] = iAr[maxfinder];
            iAr[maxfinder] = localsort;
         }
      }
   }

    printf("\nThe array sorted assending order :\n"); 
      for (iElement = 0; iElement < *iN_ptr; ++iElement){
        printf("%d\n", iAr[iElement]);
   }
    
}

//////////////////////////////////////////////////////////////////////
/*
Test 1 --------------------------------------------------------------

A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => A
Enter up to 100 elements.
To terminate entry, enter a letter.
 874
 337
 296
 539
  11
 764
 982
 520
 244
 714
 629
 679
 522
 657
 204
 734
 409
 816
 290
 109
 625
 929
 107
 570
 743
 822
  23
 806
 152
 497
 511
  26
 151
 647
 560
  35
 463
 218
 950
 740
 782
 820
   3
 102
Z
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => B
The array elements are:
874
337
296
539
11
764
982
520
244
714
629
679
522
657
204
734
409
816
290
109
625
929
107
570
743
822
23
806
152
497
511
26
151
647
560
35
463
218
950
740
782
820
3
102

The number of array elements are:44

The maximum value from the array is:982
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => C
The array elements are:
874
337
296
539
11
764
982
520
244
714
629
679
522
657
204
734
409
816
290
109
625
929
107
570
743
822
23
806
152
497
511
26
151
647
560
35
463
218
950
740
782
820
3
102

The number of array elements are:44

The maximum value from the array is:3
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => D
The unsorted array elements are:
874
337
296
539
11
764
982
520
244
714
629
679
522
657
204
734
409
816
290
109
625
929
107
570
743
822
23
806
152
497
511
26
151
647
560
35
463
218
950
740
782
820
3
102

The array sorted assending order :
3
11
23
26
35
102
107
109
151
152
204
218
244
290
296
337
409
463
497
511
520
522
539
560
570
625
629
647
657
679
714
734
740
743
764
782
806
816
820
822
874
929
950
982
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => Q 

Test 2 --------------------------------------------------------------
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => a
Enter up to 100 elements.
To terminate entry, enter a letter.
 711
 444
 395
 369
 951
 499
1010
 676
 368
 749
 610
 829
1002
 872
 618
 538
 574
 561
 898
 790
 733
 774
1006
 657
1014
 359
 634
 669
 900
 817
 760
 897
 554
b
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => d
The unsorted array elements are:
711
444
395
369
951
499
1010
676
368
749
610
829
1002
872
618
538
574
561
898
790
733
774
1006
657
1014
359
634
669
900
817
760
897
554

The array sorted assending order :
359
368
369
395
444
499
538
554
561
574
610
618
634
657
669
676
711
733
749
760
774
790
817
829
872
897
898
900
951
1002
1006
1010
1014
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => b
The array elements are:
359
368
369
395
444
499
538
554
561
574
610
618
634
657
669
676
711
733
749
760
774
790
817
829
872
897
898
900
951
1002
1006
1010
1014

The number of array elements are:33

The maximum value from the array is:1014
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => c
The array elements are:
359
368
369
395
444
499
538
554
561
574
610
618
634
657
669
676
711
733
749
760
774
790
817
829
872
897
898
900
951
1002
1006
1010
1014

The number of array elements are:33

The maximum value from the array is:359
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => Q

Test 3 -------------------------------------------------------------

A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => A
Enter up to 100 elements.
To terminate entry, enter a letter.
 769
1759
1505
1342
2026
2007
1647
 487
1362
1017
 959
  21
 149
 860
 123
1164
 958
 582
1391
1663
 571
2137
 235
1910
1536
2179
 771
 851
1050
  76
1558
  43
1566
 147
  53
1923
x
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => C
The array elements are:
769
1759
1505
1342
2026
2007
1647
487
1362
1017
959
21
149
860
123
1164
958
582
1391
1663
571
2137
235
1910
1536
2179
771
851
1050
76
1558
43
1566
147
53
1923

The number of array elements are:36

The maximum value from the array is:21
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => B
The array elements are:
769
1759
1505
1342
2026
2007
1647
487
1362
1017
959
21
149
860
123
1164
958
582
1391
1663
571
2137
235
1910
1536
2179
771
851
1050
76
1558
43
1566
147
53
1923

The number of array elements are:36

The maximum value from the array is:2179
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => D
The unsorted array elements are:
769
1759
1505
1342
2026
2007
1647
487
1362
1017
959
21
149
860
123
1164
958
582
1391
1663
571
2137
235
1910
1536
2179
771
851
1050
76
1558
43
1566
147
53
1923

The array sorted assending order :
21
43
53
76
123
147
149
235
487
571
582
769
771
851
860
958
959
1017
1050
1164
1342
1362
1391
1505
1536
1558
1566
1647
1663
1759
1910
1923
2007
2026
2137
2179
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => Q

Test 4 -------------------------------------------------
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => a
Enter up to 100 elements.
To terminate entry, enter a letter.
2649
8527
8475
2074
6217
3098
2315
6507
 738
6635
2557
2551
8797
5349
6753
1662
5144
5830
9422
2275
6232
3705
1796
4036
9469
6205
5824
5896
1856
5077
5495
3226
5879
X
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => B
The array elements are:
2649
8527
8475
2074
6217
3098
2315
6507
738
6635
2557
2551
8797
5349
6753
1662
5144
5830
9422
2275
6232
3705
1796
4036
9469
6205
5824
5896
1856
5077
5495
3226
5879

The number of array elements are:33

The maximum value from the array is:9469
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => C
The array elements are:
2649
8527
8475
2074
6217
3098
2315
6507
738
6635
2557
2551
8797
5349
6753
1662
5144
5830
9422
2275
6232
3705
1796
4036
9469
6205
5824
5896
1856
5077
5495
3226
5879

The number of array elements are:33

The maximum value from the array is:738
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => D
The unsorted array elements are:
2649
8527
8475
2074
6217
3098
2315
6507
738
6635
2557
2551
8797
5349
6753
1662
5144
5830
9422
2275
6232
3705
1796
4036
9469
6205
5824
5896
1856
5077
5495
3226
5879

The array sorted assending order :
738
1662
1796
1856
2074
2275
2315
2551
2557
2649
3098
3226
3705
4036
5077
5144
5349
5495
5824
5830
5879
5896
6205
6217
6232
6507
6635
6753
8475
8527
8797
9422
9469
A - Enter numbers
B - Determine the maximum number
C - Determine the minimum number
D - Sort the number list from lowest to highest
Q - Quit
Select A, B, C, D or Q => Q


*/




