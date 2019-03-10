/*
   AUTHOR : Sayantan Pal
   DATE : 010.03.2019

   QUESTION :
   Write a C program to take two non-negative integers (a and b) from the user and count
   the number of bits needed to be flipped to convert a to b. [Do it by using bitwise operator
   and without using bitwise operator]

   THIS SOLUTION HAS BEEN WRITTEN WITHOUT USING BITWISE OPERATOR

 */

#include <stdio.h>
#include <math.h>

/*Prototypes----------------*/
int decitobin(int);
int count(int);
/*-------------------------*/
/*________________Decimal to Binary_________________*/
int dectobin(int n)
{
        int i=0,bin=0;
        while(n!=0)
        {
                bin+=(n%2)*pow(10,i);
                i++;
                n/=2;
        }
        return bin;
}

/*_________________Digit Counter___________________*/
int count(int num)
{
        int digitCount=0;

        while(num)
        {
                num/=10;
                digitCount++;
        }
        return digitCount;
}

int main()
{
        int n, m, c1,c2,flips=0,a,b;

        printf("Enter 2 numbers : ");
        scanf("%d%d", &n,&m);
        if(n>=0 && m>=0)
        {
                a=dectobin(n);
                b=dectobin(m);
                c1=count(a);
                c2=count(b);
                if(c1>=c2)
                {
                        while(a)
                        {
                                if(a%10 != b%10)
                                {
                                        flips++;
                                }
                                a/=10;
                                b/=10;
                        }
                }
                else
                {
                        while(b)
                        {
                                if((a%10) != (b%10))
                                {
                                        flips++;
                                }
                                a/=10;
                                b/=10;
                        }
                }
                printf("\nBits flipped = %d\n", flips);

        }
}
