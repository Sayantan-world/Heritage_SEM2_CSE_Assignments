/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Fibonacci sequence is represented by 0, 1, 1, 2, 3, 5, 8, 13, 21...Construct a formula to
   represent the i-th term in the series and use it to write a program to print the first n terms
   of the Fibonacci sequence, where n is taken as input. NB: f(0) = 0, f(1) = 1.
 */

 #include <stdio.h>
int main()
{
        int i, n, a = 0, b = 1, c,term,temp;
        printf("\nEnter the i th term: ");
        scanf("%d", &term);
        printf("\n\nEnter the number of terms (n): ");
        scanf("%d", &n);

        printf("\nFibonacci Series: ");

        for (i = 0; i < n; i++)
        {
                if(term == i)
                        temp = a;
                printf("%d  ", a);
                c = a + b;
                a = b;
                b = c;
        }
        printf("\n\nf(%d) = %d \n",term,temp);

        printf("\n\n");
        return 0;
}
