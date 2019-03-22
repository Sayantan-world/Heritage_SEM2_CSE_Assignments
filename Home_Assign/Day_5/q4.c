/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Write a program to find whether a matrix is symmetric or not using a function
   isSymmetric( )
 */

 #include <stdio.h>

void isSymmetric(int matrix[][100],int m,int n)
{
        int c, d, transpose[100][100];


        for (c = 0; c < m; c++)
                for (d = 0; d < n; d++)
                        transpose[d][c] = matrix[c][d];

        if (m == n) /* check if order is same */
        {
                for (c = 0; c < m; c++)
                {
                        for (d = 0; d < m; d++)
                        {
                                if (matrix[c][d] != transpose[c][d])
                                        break;
                        }
                        if (d != m)
                                break;
                }
                if (c == m)
                        printf("\nThe matrix is symmetric.\n");
                else
                        printf("\nThe matrix isn't symmetric.\n");
        }
        else
                printf("\nThe matrix isn't symmetric.\n");

}
int main()
{
        int matrix[100][100],c,d,m,n;
        printf("\nEnter the number of rows and columns of matrix: ");
        scanf("%d%d", &m, &n);
        printf("\nEnter elements of the matrix: ");

        for (c = 0; c < m; c++)
                for (d = 0; d < n; d++)
                        scanf("%d", &matrix[c][d]);
        isSymmetric(matrix,m,n);
}
