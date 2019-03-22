/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Write functions to add, subtract and multiply two complex numbers (a + ib) and
   (x + iy). Write a program to test the functions.
 */

 #include <stdio.h>

void sum(float x1,float y1,float x2,float y2)
{

        if ((y1+y2) >= 0)
                printf("\nSum of the complex numbers = %.2f + %.2fi\n",(x1+x2),(y1+y2));
        else
                printf("\nSum of the complex numbers = %.2f %.2fi\n", (x1+x2),(y1+y2));
}
void sub(float x1,float y1,float x2,float y2)
{
        if ((y1-y2) >= 0)
                printf("\nDifference of the complex numbers = %.2f + %.2fi\n",(x1-x2),(y1-y2));
        else
                printf("\nDifference of the complex numbers = %.2f %.2fi\n", (x1-x2),(y1-y2));
}
void mul(float x1,float y1,float x2,float y2)
{
        if (((x1*y2)+(y1*x2)) >= 0)
                printf("\nProduct of the complex numbers = %.2f + %.2fi\n",((x1*x2)-(y1*y2)),((x1*y2)+(y1*x2)));
        else
                printf("\nProduct of the complex numbers = %.2f %.2fi\n", ((x1*x2)-(y1*y2)),((x1*y2)+(y1*x2)));
}
int main()
{
        float x1,y1,x2,y2;
        printf("\nEnter real and imaginary part of First Complex Number : ");
        scanf("%f %f",&x1, &y1);
        printf("\nEnter real and imaginary part of Second Complex Number : ");
        scanf("%f%f",&x2,&y2);

        printf("\nFirst number <<operator>> Second number = Result\n");

        sum(x1,y1,x2,y2);
        sub(x1,y1,x2,y2);
        mul(x1,y1,x2,y2);

        return 0;
}
