/*
   AUTHOR : Sayantan Pal
   DATE : 24.02.2019

   QUESTION :
   Square of 12 is 144. 21, which is the reverse of 12 has a square 441, which is same as the
   reverse of 144. Write a program to find out all such numbers/pairs in the range of 10 to
   100

 */

 #include <stdio.h>

/* find reverse of the given number */
int reverse (int num)
{
        int rev = 0, mod;
        while (num > 0)
        {
                mod = num % 10;
                rev = (rev * 10) + mod;
                num = num / 10;
        }
        return rev;
}

int main()
{
        int n, i, num, rev, num_sq, rev_sq;
        printf("\nNumbers found within range 10-100 :\n\n");

        for (i = 10; i <= 100; i++)
        {
                num = i;
                rev = reverse(num);
                num_sq = num * num;
                rev_sq = rev * rev;

                if (num_sq == reverse(rev_sq))
                {
                        printf("%d  ",num);
                }
        }
        printf("\n\n");
        return 0;
}
