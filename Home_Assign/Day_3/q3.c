/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   Write a program to find the number of digits in a number entered through the keyboard.
   Also find the sum of the digits of that number and check whether that number is a
   palindrome or not
 */

 #include <stdio.h>
 #include <stdlib.h>
int main()
{
        int n, rev = 0, rem, original,sum=0,c=0;

        printf("\nEnter an integer: ");
        scanf("%d", &n);

        original = n;

        while( n!=0 )
        {
                rem= n%10;
                rev = rev*10 + rem;
                n /= 10;
                c++;
                sum+=rem;
        }

        printf("\nNumber of digits is : %d\n", c);
        printf("\nSum of digits is : %d\n", abs(sum));

        if (original == rev)
                printf("\n%d is a palindrome\n", original);
        else
                printf("\n%d is not a palindrome\n", original);

        return 0;
}
