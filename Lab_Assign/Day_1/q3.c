/*
AUTHOR : Sayantan Pal
DATE : 25.01.2019

QUESTION :
Write a program that reads two values from the keyboard, swaps their values using a third
variable and prints out the result

*/
#include <stdio.h> //standard input output
int main()
{
  int a,b;

  printf("\nEnter the 1st and 2nd number separated by space: ");
  scanf("%d%d", &a, &b);

  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n\n Swaped 1st and 2nd number is %d and %d \n",a,b);

  return (0);
}
