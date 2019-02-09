/*
AUTHOR : Sayantan Pal
DATE : 09.02.2019

QUESTION :
Write a program to find the roots (real and imaginary) of the quadratic equation of the
form ax 2 + bx + c = 0

*/
#include <stdio.h>//standard input output
#include <math.h>//math libs
#include <stdlib.h>

int main()
{
    float a, b, c, discriminant, root1, root2, real, imaginary;

    printf("\nEnter coefficients a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);
    if(a==0)
    {
      printf("\ncoefficient of x^2 cant be zero\n");
      exit(0);
    }
    discriminant = b*b-4*a*c;

    //real and different roots
    if (discriminant > 0)
    {
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);

        printf("\nroot_1 = %.2f and root_2 = %.2f\n",root1 , root2);
    }

    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);

        printf("\nroot_1 = root_2 = %.2f\n", root1);
    }

    // if roots are not real
    else
    {
        real = -b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);
        printf("\nroot_1 = %.2f + %.2fi and root_2 = %.2f - %.2fi\n", real, imaginary, real, imaginary);
    }

    return 0;
}
