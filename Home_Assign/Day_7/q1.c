/*
   AUTHOR : Sayantan Pal
   DATE : 07.04.2019

   QUESTION :
   Write a program to find the non-repeated element in an array. The array contains n
   number of values where all the elements (except one) appear exactly twice

   Example:
   Input:   array[] = {1, 1, 3, 3, 4, 4, 5}
   Output:  5

 */
# include <stdio.h>
void search(int *arr, int low, int high)
{
        if (low > high)
                return;

        if (low==high)
        {
                printf("\nThe required element is %d \n", arr[low]);
                return;
        }

        // Find the middle point
        int mid = (low + high) / 2;

        if (mid%2 == 0)
        {
                if (arr[mid] == arr[mid+1])
                        search(arr, mid+2, high);
                else
                        search(arr, low, mid);
        }
        else
        {
                if (arr[mid] == arr[mid-1])
                        search(arr, mid+1, high);
                else
                        search(arr, low, mid-1);
        }
}


int main()
{
        int array[100], c, n,d,swap=0;

        printf("\nEnter number of elements in array: ");
        scanf("%d", &n);

        printf("\nEnter elements : ");

        for (c = 0; c < n; c++)
                scanf("%d", &array[c]);
        for (c = 0; c < n - 1; c++)
        {
                for (d = 0; d < n - c - 1; d++)
                {
                        if (array[d] > array[d+1]) /* For decreasing order use < */
                        {
                                swap       = array[d];
                                array[d]   = array[d+1];
                                array[d+1] = swap;
                        }
                }
        }
        search(array, 0, n-1);
        return 0;
}
