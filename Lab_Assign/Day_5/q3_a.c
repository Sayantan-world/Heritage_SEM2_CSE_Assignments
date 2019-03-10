/*
   AUTHOR : Sayantan Pal
   DATE : 010.03.2019

   QUESTION :
   Write a C program to take two non-negative integers (a and b) from the user and count
   the number of bits needed to be flipped to convert a to b. [Do it by using bitwise operator
   and without using bitwise operator]

   THIS SOLUTION HAS BEEN WRITTEN USING BITWISE OPERATOR

 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
        int n, m, i, count = 0, a, b;

        printf("Enter 2 numbers : ");
        scanf("%d%d", &n,&m);
        if(n>=0 && m>=0)
        {
                for (i = 31; i >= 0; i--)
                {
                        a = (n >> i)& 1;
                        b = (m >> i)& 1;
                        if (a != b)
                                count++;
                }
                printf("\nBits flipped = %d\n", count);
        }
}
