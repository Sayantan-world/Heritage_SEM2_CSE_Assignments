/*
   AUTHOR : Sayantan Pal
   DATE : 010.03.2019

   QUESTION :
   Write a program to obtain the reverse of a given integer using recursion
 */

 #include <stdio.h>

int reverse(int);

int main()
{
        int n, r;
        printf("\nEnter a number : ");
        scanf("%d", &n);

        if(n>=0)
        {
                r = reverse(n);
                printf("Answer : %d\n", r);
        }
        else
                printf("INVALID");

        return 0;
}

int reverse(int n)
{
        static int r = 0;

        if (n == 0)
                return 0;

        r = r * 10;
        r = r + n % 10;
        reverse(n/10);
        return r;
}
