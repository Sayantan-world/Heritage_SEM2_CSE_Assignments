/*
   AUTHOR : Sayantan Pal
   DATE : 01.03.2019

   QUESTION :
   Write a menu-driven program to,
   Calculate the factorial of a given number,
   Check whether the number is prime or not,
   Check whether the number is a palindrome or not.
   Use different functions for each of the above tasks and call the functions from main() using switch statement.

 */

 #include <stdio.h>
int fact(int n)
{
        int x=1,i;
        for(i=1; i<=n; i++)
                x*=i;
        return x;
}
int prime(int n)
{
        int i,flag=0;
        for(i=2; i<n/2; i++)
        {
                if(n%i==0)
                        flag=1; break;
        }
        if(flag==0 && n>1)
                return 1;
        else
                return 0;
}
int palindrome(int n)
{
        int i,p=n,rev=0;
        while(n!=0)
        {
                rev=(rev*10)+(n%10);
                n/=10;
        }
        if(rev == p && p>=0)
        {
                return 1;
        }
        else
                return 0;
}
int main()
{
        int choice,n,res;
        char flag;

        while(1)
        {
                printf("\nMENU :\n\n1. Factorial calculation\n\n2. Prime check\n\n3. Palindrome check\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                printf("\nEnter a number : ");
                scanf("%d",&n);
                switch(choice)
                {

                case 1:
                {
                        if(n>=0)
                        {
                                res=fact(n);
                                printf("\nAns : %d\n",res);
                        }
                        else
                                printf("\nINVALID\n");
                        break;
                }

                case 2:
                {
                        res=prime(n);
                        if(res==1)
                                printf("\nPRIME\n");
                        else
                                printf("\nNOT PRIME\n");
                        break;
                }

                case 3:
                {
                        res=palindrome(n);
                        if(res==1)
                                printf("\nPALINDROME\n");
                        else
                                printf("\nNOT PALINDROME\n");
                        break;
                }

                default:
                {
                        printf("\nINVALID CHOICE\n");
                        break;
                }

                }

                printf("\nEnter q to QUIT or Any other key to show the menu : ");
                scanf(" %c",&flag);
                if(flag=='q' || flag=='Q')
                        break;

        }

}
