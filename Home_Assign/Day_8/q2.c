/*
   AUTHOR : Sayantan Pal
   DATE : 07.04.2019

   QUESTION :
   Write a program to find whether a given matrix is upper triangular or lower triangular
 */
 #include <stdio.h>

int main()
{
        int array[100][100],r,c;
        int row, col, isUpper,isLower;

        printf("\nEnter number of rows and coloumn in matrix : ");
        scanf("%d%d",&r,&c);

        /* Input elements in matrix from user */
        printf("Enter elements in matrix : ");
        for(row=0; row<r; row++)
        {
                for(col=0; col<c; col++)
                {
                        scanf("%d", &array[row][col]);
                }
        }

        /* Check Upper triangular matrix condition */
        isUpper = 1;
        for(row=0; row<r; row++)
        {
                for(col=0; col<c; col++)
                {
                        if(col<row && array[row][col]!=0)
                        {
                                isUpper = 0; break;
                        }
                }
        }

        /* Check Lower triangular matrix condition */
        isLower = 1;
        for(row=0; row<r; row++)
        {
                for(col=0; col<c; col++)
                {
                        if(row<col && array[row][col]!=0)
                        {
                                isLower = 0; break;
                        }
                }
        }

        /* Print elements of upper triangular matrix  */
        if(isUpper == 1)
        {
                printf("\nThe matrix is Upper triangular\n");

                for(row=0; row<r; row++)
                {
                        for(col=0; col<c; col++)
                        {
                                printf("%d ", array[row][col]);
                        }

                        printf("\n");
                }
        }
        else if(isLower == 1)
        {
                printf("\nThe matrix is Lower triangular\n");

                for(row=0; row<r; row++)
                {
                        for(col=0; col<c; col++)
                        {
                                printf("%d ", array[row][col]);
                        }

                        printf("\n");
                }
        }
        else
        {
                printf("\nThe matrix is not Upper or Lower triangular\n");
        }

        return 0;
}
