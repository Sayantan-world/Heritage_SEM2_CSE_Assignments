/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Find the maximum and minimum of a list of numbers using a recursive function
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the array

/* Function prototypes */
int maximum(int array[], int index, int len);
int minimum(int array[], int index, int len);


int main()
{
        int array[MAX_SIZE], N, max, min;
        int i;

        printf("\nEnter size of the array: ");
        scanf("%d", &N);
        printf("\nEnter %d elements in array: ", N);
        for(i=0; i<N; i++)
        {
                scanf("%d", &array[i]);
        }

        max = maximum(array, 0, N);
        min = minimum(array, 0, N);

        printf("\nMinimum element in array = %d\n", min);
        printf("\nMaximum element in array = %d\n", max);

        return 0;
}


int maximum(int array[], int index, int len)
{
        int max;

        if(index >= len-2)
        {
                if(array[index] > array[index + 1])
                        return array[index];
                else
                        return array[index + 1];
        }

        max = maximum(array, index + 1, len);

        if(array[index] > max)
                return array[index];
        else
                return max;
}

int minimum(int array[], int index, int len)
{
        int min;

        if(index >= len-2)
        {
                if(array[index] < array[index + 1])
                        return array[index];
                else
                        return array[index + 1];
        }

        min = minimum(array, index + 1, len);

        if(array[index] < min)
                return array[index];
        else
                return min;
}
