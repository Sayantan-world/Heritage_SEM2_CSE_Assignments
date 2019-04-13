/*
   AUTHOR : Sayantan Pal
   DATE : 07.04.2019

   QUESTION :
   Write a program to find the largest and second largest from a set of numbers

 */
 #include <stdio.h>

void largest(int a[],int n)
{
        int c,d,swap=0;

        //SORTING
        for (c = 0; c < n-1; c++)
        {
                for (d = 0; d < n - c - 1; d++)
                {
                        if (a[d] < a[d+1])
                        {
                                swap   = a[d];
                                a[d]   = a[d+1];
                                a[d+1] = swap;

                        }
                }
        }
        printf("\nLargest is %d and Second Largest is %d\n",a[0],a[1]);
}
int main()
{
        int array[100], c, n;

        printf("Enter number of elements in array: ");
        scanf("%d", &n);

        printf("Enter the  elements: ");

        for (c = 0; c < n; c++)
                scanf("%d", &array[c]);

        largest(array,n);

        return 0;
}
