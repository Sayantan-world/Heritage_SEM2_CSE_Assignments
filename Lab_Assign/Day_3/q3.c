/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Write a program to evaluate the summation of the following series, where the number of
   terms N and independent variable X are taken as input from the user:
   1-X/1! +X^2/2! -X^3/3! +...........
 */

#include <stdio.h>
#include <math.h>
int main()
{

        int n,x;
        int i,j,fact=1;
        float sum=1;
        printf("\nEnter the number of terms and value of x : ");
        scanf("%d%d",&n,&x);
        if(n==0)
        {
                printf("\nSUM = 0\n");
        }
        else if(n>0)
        {
                for(i=1; i<n; i++)
                {
                        fact=1;
                        for(j=1; j<=i; j++)
                        {
                                fact=fact*j;
                        }
                        if(i%2==1)
                                sum-=pow(x,i)/fact;
                        else
                                sum+=pow(x,i)/fact;
                }
                printf("\nSUM = %.2f\n",sum);

        }
        else
                printf("\nINVALID NUMBER\n");
        return 0;
}
