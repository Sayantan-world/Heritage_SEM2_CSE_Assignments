/*
AUTHOR : Sayantan Pal
DATE : 04.02.2019

QUESTION :
Write a program that reads three coordinates (x1, y1), (x2, y2) & (x3, y3) as input and
checks whether these numbers can be considered as the three vertices of a triangle. If the
vertices can form a triangle then find the type (isosceles, equilateral or right-angled) of
the triangle and the area of the triangle

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  float x1,y1,x2,y2,x3,y3;int i;
  printf("\nEnter coordinate 1 : ");
  scanf("%f%f",&x1,&y1);
  printf("\nEnter coordinate 2 : ");
  scanf("%f%f",&x2,&y2);
  printf("\nEnter coordinate 3 : ");
  scanf("%f%f",&x3,&y3);

  float s1,s2,s3,s4,s5,s6;

  int flag=0;

  s1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  s2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  s3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
  s4=pow(s1,2);
  s5=pow(s2,2);
  s6=pow(s3,2);

  float sem=(s1+s2+s3)/2;

  if(((s1+s3)>s2)&&((s1+s2)>s3)&&((s2+s3)>s1))
  {
    if((fabs(s1-s2)<0.1)&&(fabs(s1-s3)<0.1)&&(fabs(s3-s2)<0.1))
    {
      printf("\nEquilateral triangle\n");flag=1;
    }
    if((fabs(s1-s2)<0.1)||(fabs(s1-s3)<0.1)||(fabs(s3-s2)<0.1))
    {
      printf("\nIsosceles triangle\n");
    }
    if((fabs(s4+s5-s6)<0.1)||(fabs(s5+s6-s4)<0.1)||(fabs(s4+s6-s5)<0.1))
    {
      printf("\nRight-Angled triangle\n");
    }
  }
  else
  {
    printf("\nTriangle not formed\n");exit(0);
  }
  float area;
  area=sqrt(sem*(sem-s1)*(sem-s2)*(sem-s3));
  printf("\nArea is %.2f\n",area);

  return 0;
}
