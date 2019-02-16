/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   A perfect number is a positive number in which sum of all positive divisors excluding
   that number is equal to that number. Write a C program that accepts a positive integer
   from the keyboard and checks whether the entered number is a perfect number?

 */

#include <stdio.h>
int main()
{

        int n; int i,sum=0;
        printf("\nEnter the number : ");
        scanf("%d",&n);
        if(n>0)
        {
                for(i=1; i<n; i++)
                {
                        if(n%i==0)
                                sum+=i;
                }
                if(n==sum)
                        printf("\nPerfect\n");
                else
                        printf("\nNot Perfect\n");
        }
        else
                printf("\nINVALID NUMBER\n");
        return 0;
}
