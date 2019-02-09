/*
AUTHOR : Sayantan Pal
DATE : 04.02.2019

QUESTION :
Develop a simple calculator to accept two floating point numbers from the key-board.
Then display a menu to the user and let him/her select a mathematical operation to be
performed on those two numbers. Then display the answer. A sample run of your
program should be similar to the following:
Enter number 1: 20
Enter number 2: 12
Mathematical Operations
1 - Add
2 - Subtract
3 - Multiply
4 - Divide
Enter your preference: 2
Answer: 8.00

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n1,n2;int i;
  printf("\nEnter two numbers separated by space : ");
  scanf("%f%f",&n1,&n2);
  printf("\n1 - Add\n2 - Substract\n3 - Multiply\n4 - Divide\n");
  printf("\nEnter your preference : ");
  scanf("%d",&i);
  switch(i)
  {
    case 1: {printf("\nAnswer : %.2f\n",(n1+n2)); break;}
    case 2: {printf("\nAnswer : %.2f\n",(n1-n2)); break;}
    case 3: {printf("\nAnswer : %.2f\n",(n1*n2)); break;}
    case 4:
    {
      if(n2==0)
      {
        printf("\nDivsion by zero error\n");exit(0);
      }
      printf("\nAnswer : %.2f\n",(n1/n2)); break;
    }
  }
  return 0;
}
