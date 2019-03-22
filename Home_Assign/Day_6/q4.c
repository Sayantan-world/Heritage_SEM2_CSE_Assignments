/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Write a recursive function to calculate the sum of all digits of a number entered by the
   user
 */

/*
 * C Program to find Sum of Digits of a Number using Recursion
 */
 #include <stdio.h>
 #include <stdlib.h>

int sum (int a);

int main()
{
        int num, result;

        printf("\nEnter the number: ");
        scanf("%d", &num);
        result = sum(num);
        printf("\nSum of digits in %d is %d\n", num, abs(result));
        return 0;
}

int sum (int num)
{
        if (num != 0)
        {
                return (num % 10 + sum (num / 10));
        }
        else
        {
                return 0;
        }
}
