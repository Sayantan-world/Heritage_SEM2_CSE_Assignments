/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Write a program to ask the user to enter a positive integer n value of which must be less
   than 10. If the user enters an invalid input, the code repeats the statement of asking the
   user for a positive integer less than 10 until the input is correct. It then prints out the sum
   of the first n terms of the series: 1^4 + 2^4 + 4^4 + 7^4 + 11^4 + ..........

 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        while(1)
        {
                int n; int i,j,sum=0;
                printf("\nEnter number of terms : ");
                scanf("%d",&n);
                if(n>0 && n<10)
                {
                        for(i=1,j=0; j<n; j++,i=i+j)
                        {
                                sum+=pow(i,4);
                        }
                        printf("\nSum is %d\n",sum);
                        exit(0);
                }
                printf("\nINVALID CHOICE\n");
        }
        return 0;
}
