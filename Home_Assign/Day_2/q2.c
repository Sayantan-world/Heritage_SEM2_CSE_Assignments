/*
AUTHOR : Sayantan Pal
DATE : 09.02.2019

QUESTION :
Write a program to input a student's score in a subject (out of hundred) and print
a grade output. Use ternary operator and no other control statement. Also for grading
purpose please use the MAKAUT grading system

*/
#include <stdio.h>//standard input output
#include <stdlib.h>
int main()
{
  float marks;
  printf("\nEnter marks out of 100 : ");
  scanf("%f",&marks);
  (marks>100)?printf("\nINVALID\n"):(marks>=90)?printf("\nGRADE : O\n"):(marks>=80)?printf("\nGRADE : E\n"):(marks>=70)?printf("\nGRADE : A\n"):(marks>=60)?printf("\nGRADE : B\n"):(marks>=50)?printf("\nGRADE : C\n"):(marks>=40)?printf("\nGRADE : D\n"):(marks>=0)?printf("\nGRADE : F\n"):printf("\nINVALID\n");
  return 0;
}
