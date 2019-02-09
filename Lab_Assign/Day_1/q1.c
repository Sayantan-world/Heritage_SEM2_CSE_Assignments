/*
AUTHOR : Sayantan Pal
DATE : 03.02.2019

QUESTION :
Write a program to input temperatures in Celsius and Fahrenheit scale and convert the
temperatures to the other scale. Display the results
formula --> C/5=(F-32)/9

*/
#include <stdio.h> //standard input output
int main()
{
  float tc,tf,ntf,ntc;

  printf("\nEnter the temperature in Celsius and Fahrenheit separated by space: ");
  scanf("%f%f", &tc,&tf);

  ntf=(9*tc/5)+32;
  ntc=(5*(tf-32))/9;
  printf("\nTemperature in Fahrenheit is : %.2f F  and Celsius is : %.2f C \n", ntf,ntc);

  return (0);
}
