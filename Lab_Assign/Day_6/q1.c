/*
   AUTHOR : Sayantan Pal
   DATE : 010.03.2019

   QUESTION :
   Write a recursive function to calculate the GCD (greatest common divisor) / HCF
   (Highest common factor) of two numbers

 */

 #include <stdio.h>

/*________________Function Prototype___________________*/
int gcd(int n1, int n2);

int main()
{
        int n1, n2;
        printf("Enter two positive integers: ");
        scanf("%d %d", &n1, &n2);

        if(n1>0 && n2>0)
                printf("\nG.C.D of %d and %d is %d\n", n1, n2, gcd(n1,n2));
        else
                printf("\nINVALID\n");
        return 0;
}

int gcd(int n1, int n2)
{
        if (n2 != 0)
                return gcd(n2, n1%n2);
        else
                return n1;
}
