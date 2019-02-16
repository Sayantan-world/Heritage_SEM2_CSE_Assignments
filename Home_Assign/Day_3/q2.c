/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Write a program to find factorial of a one digit number. What can be the potential?
   Problem in finding factorial of a number larger than, say, 50?

   NOTE:
   Problem in finding factorial of a number larger than, say, 50 :
   We cant store a huge number in integer data type.. even if we use long or long long
   we cant get a value beyond 20!
 */

#include <stdio.h>
int main()
{
        int i, n, fact = 1;

        printf("\nEnter a one digit number to calculate its factorial : ");
        scanf("%d", &n);
        if(n==0)
                printf("\nFactorial of 0 = 1\n");
        else if(n>0 && n<10)
        {
                for (i = 1; i <= n; i++)
                        fact = fact * i;

                printf("\nFactorial of %d = %d\n", n, fact);
        }
        else
                printf("\nINVALID NUMBER\n");
        return 0;
}
