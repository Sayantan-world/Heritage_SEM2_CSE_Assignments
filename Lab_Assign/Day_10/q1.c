/*
   AUTHOR : Sayantan Pal
   DATE : 15.04.2019

   QUESTION :
   Write a program to sort a list of elements, using pointers and dynamic memory allocation
 */

 #include <stdio.h>
#include <stdlib.h>
void sort(int *a,int n)
{
        int i,j,t;
        for(i=0; i<n; i++)
        {
                for(j=0; j<=i; j++)
                {
                        if(*(a+i)<*(a+j))
                        {
                                t=*(a+i);
                                *(a+i)=*(a+j);
                                *(a+j)=t;
                        }
                }
        }
        printf("\nAfter Sorting in Ascending Order: ");
        for(i=0; i<n; i++)
                printf(" %d ",*(a+i));
        printf("\n\n");
}
int main()
{
        int *a,n,i;
        printf("\nEnter length of array: ");
        scanf("%d",&n);
        a=(int *)malloc(n *sizeof(int));
        printf("\nEnter %d Numbers: ",n);
        for(i=0; i<=n-1; i++)
        {
                scanf("%d", (a+i));
        }
        sort(a,n);
        return 0;
}
