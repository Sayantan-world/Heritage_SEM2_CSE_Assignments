/*
   AUTHOR : Sayantan Pal
   DATE : 010.03.2019

   QUESTION :
   A number will be provided as input along with its base (excluding hexadecimal base) and
   ask from the user to which base he or she want to convert it (excluding hexadecimal
   base). Write 6 separate functions for each possible conversion (it should be menu driven).

 */

 #include <stdio.h>
#include <math.h>
/*_________________Other functions____________________*/

/*________________Decimal to Binary_________________*/
int dectobin(int n)
{
        int i=0,bin=0;
        while(n!=0)
        {
                bin+=(n%2)*pow(10,i);
                i++;
                n/=2;
        }
        return bin;
}

/*________________Binary to Decimal_________________*/
int bintodec(int n)
{
        int i=0,dec=0;
        while(n!=0)
        {
                dec+=(n%10)*pow(2,i);
                i++;
                n/=10;
        }
        return dec;
}

/*________________Decimal to Octal_________________*/
int dectooct(int n)
{
        int i=0,oct=0;
        while(n!=0)
        {
                oct+=(n%8)*pow(10,i);
                i++;
                n/=8;
        }
        return oct;
}

/*________________Octal to Decimal_________________*/
int octtodec(int n)
{
        int i=0,dec=0;
        while(n!=0)
        {
                dec+=(n%10)*pow(8,i);
                i++;
                n/=10;
        }
        return dec;
}

int main()
{
        int choice,n,res,b;
        char flag;

        while(1)
        {
                printf("\nMENU :\n\n1. Number to Binary\n\n2. Number to Decimal\n\n3. Number to Octal\n\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                printf("\nEnter a number and base: ");
                scanf("%d%d",&n,&b );
                switch(choice)
                {

                case 1:
                {
                        if(b==10)
                        {
                                printf("\nAnswer : %d",dectobin(n));
                        }
                        if(b==2)
                                printf("\nAnswer : %d",n);
                        if(b==8)
                        {
                                printf("\nAnswer : %d",dectobin(octtodec(n)));
                        }
                        break;
                }

                case 2:
                {
                        if(b==2)
                        {
                                printf("\nAnswer : %d",bintodec(n));
                        }
                        if(b==10)
                                printf("\nAnswer : %d",n);
                        if(b==8)
                        {
                                printf("\nAnswer : %d",octtodec(n));
                        }
                        break;
                }
                case 3:
                {
                        if(b==10)
                        {
                                printf("\nAnswer : %d",dectooct(n));
                        }
                        if(b==8)
                                printf("\nAnswer : %d",n);
                        if(b==2)
                        {
                                printf("\nAnswer : %d",dectooct(bintodec(n)));
                        }
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
