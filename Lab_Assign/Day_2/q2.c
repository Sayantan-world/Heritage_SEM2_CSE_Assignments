/*
AUTHOR : Sayantan Pal
DATE : 04.02.2019

QUESTION :
Consider a currency system in which there are notes of six denominations, namely,
Re.1, Rs. 2, Rs.5, Rs.10, Rs. 50 and Rs. 100. If a sum of Rs. N is entered through the
keyboard, write a program to compute the smallest number of notes that will combine to
give Rs. N

*/
#include<stdio.h>
int main()
{
	int n100, n50, n10, n5, n2, n1, num;

	printf("\nEnter the amount : ");
	scanf("%d", &num);

	n100 = num / 100;
	num = num % 100;

	n50 = num / 50;
	num = num % 50;

	n10 = num / 10;
	num = num % 10;

	n5 = num / 5;
	num = num % 5;

	n2 = num / 2;
	num = num % 2;

	n1 = num / 1;

	printf("\nRequired notes : \n");
	printf("%d note of hundred.\n", n100);
	printf("%d note of fifty.\n", n50);
	printf("%d note of ten.\n", n10);
	printf("%d note of five.\n", n5);
	printf("%d note of two.\n", n2);
	printf("%d note of one.\n", n1);

	return 0;
}
