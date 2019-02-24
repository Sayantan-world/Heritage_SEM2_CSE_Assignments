/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Write a program to print a Pascal's triangle for an input N


              1
            1   1
          1   2   1
        1   3   3    1
      1  4    6   4   1
    1  5   10   10  5   1

 */

 #include <stdio.h>
int main()
{
        int rows, coef = 1, space, i, j;

        printf("Enter number of rows: ");
        scanf("%d",&rows);

        for(i=0; i<rows; i++)
        {
                for(space=1; space <= rows-i; space++)
                        printf("  ");

                for(j=0; j <= i; j++)
                {
                        if (j==0)
                                coef = 1;
                        else
                                coef = coef*(i-j+1)/j;

                        printf("%4d", coef);
                }
                printf("\n");
        }

        return 0;
}
