/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Write a recursive function to convert a decimal integer, taken as input, to its hexadecimal
   equivalent.
 */

 #include <stdio.h>

void Dec2Hex(int no)
{
        int hex=0;
        if(!no)
                return;
        else
        {
                hex=no%16;
                Dec2Hex(no/16);
        }
        if(hex>9)
                printf("%c",'A'+(hex-10));
        else
                printf("%d",hex);
}

int main()
{
        int k=0;
        printf("\nEnter a number(decimal): ");
        scanf("%d",&k);
        printf("\nHexadecimal : " );
        Dec2Hex(k);
        printf("\n");
        return 0;
}
