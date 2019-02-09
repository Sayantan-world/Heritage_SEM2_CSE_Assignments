/*
AUTHOR : Sayantan Pal
DATE : 04.02.2019

QUESTION :
Write a program to calculate the total interest income on amount P in a period of t years.
Show the results for simple interest, compounded interest when the compounding is done
annually, semi-annually, quarterly, monthly and daily. Assume that the interest rate is r%
per year

*/
#include <stdio.h> //standard input output
#include <math.h>//math lib
int main()
{
  float p,r,t,si,ci,rf;//initialization
  printf("\nEnter Principal Amount, Rate of Interest and Time separated by spaces: ");
  scanf("%f%f%f",&p,&r,&t);//input
  rf=r;
  si=p*r*t/100;
  ci=p*(pow((1+(r/100)),t)-1);
  printf("\n\n Simple Interest is %.2f and Compound Interest (annually) is %.2f \n",si,ci);
  r=(pow((1+(rf/200)),2))-1;
  ci=(p*(pow(1+r,t)))-p;
  printf("\n Compound Interest (semi-annually) is %.2f \n",ci);
  r=(pow((1+(rf/400)),4))-1;
  ci=(p*(pow(1+r,t)))-p;
  printf("\n Compound Interest (quarterly) is %.2f \n",ci);
  r=(pow((1+(rf/1200)),12))-1;
  ci=(p*(pow(1+r,t)))-p;
  printf("\n Compound Interest (monthly) is %.2f \n",ci);
  r=(pow((1+(rf/36500)),365))-1;
  ci=(p*(pow(1+r,t)))-p;
  printf("\n Compound Interest (daily) is %.2f \n",ci);
  return 0;
}
