/*
   AUTHOR : Sayantan Pal
   DATE : 06.04.2019

   QUESTION :
   Write a program to add two matrices. NB: Check proper conditions for matrix addition
 */

 #include <stdio.h>

int main()
{
        int m1, n1,m2,n2, c, d, first[10][10], second[10][10], sum[10][10];

        printf("\nEnter the number of rows and columns of first matrix: ");
        scanf("%d%d", &m1, &n1);
        printf("\nEnter the number of rows and columns of second matrix: ");
        scanf("%d%d", &m2, &n2);

        if(m1==m2 && n1==n2)
        {
                printf("\nEnter the elements of first matrix: ");

                for (c = 0; c < m1; c++)
                        for (d = 0; d < n1; d++)
                                scanf("%d", &first[c][d]);

                printf("\nEnter the elements of second matrix: ");

                for (c = 0; c < m2; c++)
                        for (d = 0; d < n2; d++)
                                scanf("%d", &second[c][d]);

                printf("\nSum of entered matrices:-\n");

                for (c = 0; c < m1; c++) {
                        for (d = 0; d < n1; d++) {
                                sum[c][d] = first[c][d] + second[c][d];
                                printf(" %d ", sum[c][d]);
                        }
                        printf("\n");
                }
        }
        else
                printf("\nOrder INVALID\n");

        return 0;
}
