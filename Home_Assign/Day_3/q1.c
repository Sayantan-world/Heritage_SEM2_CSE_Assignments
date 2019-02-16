/*
   AUTHOR : Sayantan Pal
   DATE : 16.02.2019

   QUESTION :
   The equation x^2 + y^2 = r^2 represents a circle which centre at origin and radius r.
   Write a program that reads r from the keyboard and prints the number of points with
   integer coordinates that lie on the circumference of the circle
 */

#include <stdio.h>
#include <math.h>
int main()
{

        int x,ySquare,y,result=0;
        float r;
        printf("\nEnter the radius of circle : ");
        scanf("%f",&r);
        r=(int)r;//explicit typecasting
        if (r < 0)
                printf("\nCircle not formed\n");
        else if(r==0)
                printf("\nNumber of integer coordinates found : 1\n");

        else
        {
                for (x=1; x<=r; x++)
                {
                        ySquare = r*r - x*x;
                        y = sqrt(ySquare);//implicit typecasting
                        if (y*y == ySquare)
                                result += 4;
                }
                printf("\nNumber of integer coordinates found : %d\n",result);
        }

        return 0;
}
