/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   The first difference D1 of a sequence A of N elements is obtained by subtracting
   each element, except the last, from the next element in the array. The second
   difference D2 is defined as the first difference of D1, and so on. For example, if,
   A : 1, 2, 4, 7, 11, 16, 22 then
   D1 : 1, 2, 3, 4, 5, 6
   D2 : 1, 1, 1, 1, 1
   D3 : 0, 0, 0, 0
   Write a function findDifference( ) that takes as argument an array of n elements and
   finds its first, second and third differences. Write a program to call findDifference().
 */

 #include <stdio.h>

void findDifference(int a[], int size)
{
        int i,flag=1,count=1;
        size=size-1;
        while(flag && size!=0)
        {       flag=0;
                printf("D%d : ",count);
                for (i = 0; i < size; i++)
                {
                        a[i]=a[i+1]-a[i];
                        if(a[i]!=0)
                                flag+=1;
                        printf(" %d ",a[i]);
                }
                printf("\n");
                size--;
                count++;}

}
int main()
{
        int size, i;

        printf ("Enter size of array: ");
        scanf ("%d", &size);

        int arr[size];


        printf ("Enter elements in the array : ");
        for (i = 0; i < size; i++)
        {
                scanf ("%d", &arr[i]);
        }

        findDifference(arr,size);

        return 0;

}
