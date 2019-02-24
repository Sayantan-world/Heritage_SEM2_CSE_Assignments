/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Print the following pattern

 * * * * * * * * *
 * * * *   * * * *
 * * *       * * *
 * *           * *
 *               *
 * *           * *
 * * *       * * *
 * * * *   * * * *
 * * * * * * * * *


 */

#include <stdio.h>
int main()
{
        int i,j,k,l,n;
        printf("\nEnter the number of rows (must be odd): ");
        scanf("%d", &n);

        for(i=0; i<n/2+1; i++)
        {
                for(j=i; j<n/2+1; j++)
                {
                        printf("* ");
                }
                for(k=0; k<(2*i)-1; k++)
                {
                        printf("  ");
                }
                if(i==0)
                {
                        for(l=0; l<n/2; l++)
                        {
                                printf("* ");
                        }
                }
                else
                {
                        for(l=0; l<=(n/2)-i; l++)
                        {
                                printf("* ");
                        }
                }
                printf("\n");

        }

        for(i=1; i<n/2+1; i++)
        {
                for(j=0; j<=i; j++)
                {
                        printf("* ");
                }
                for(k=(2*(n/2-1))-(2*i-1); k>0; k--)
                {
                        printf("  ");
                }
                if(i==n/2)
                {
                        for(l=0; l<n/2; l++)
                        {
                                printf("* ");
                        }
                }
                else
                {
                        for(l=0; l<=i; l++)
                        {
                                printf("* ");
                        }
                }
                printf("\n");
        }
        return 0;
}
