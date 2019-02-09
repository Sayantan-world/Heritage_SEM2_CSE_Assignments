/*
AUTHOR : Sayantan Pal
DATE : 04.02.2019

QUESTION :
Write a program to assign the number 34.5678 to a variable named number. First display
number rounded to the nearest integer value and then display number rounded to two
decimal places

*/
#include <stdio.h>
int main()
{
  float number=34.5678;
  printf("\nNearest integer value =  %.0f \nTwo decimal place = %.2f\n",number,number);
  return 0;
}
