/*
   AUTHOR : Sayantan Pal
   DATE : 010.03.2019

   QUESTION :
   Write a recursive function to print the first n Fibonacci numbers.

 */

 #include <stdio.h>

/* A tail recursive function to calculate n th fibnacci number */

void fib(int x, int a, int b)
{
        int c;
        if (x == 0)
                return;
        else
        {
                c=a+b;
                printf(" %d ",c );
                fib(x- 1, b,c);
        }

}

int main()
{
        int n,i;
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if(n>0)
                fib(n,-1,1);
        else
                printf("\nINVALID\n\n");
        return 0;
}
