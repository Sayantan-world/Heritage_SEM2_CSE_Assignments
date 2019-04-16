/*
   NOTE : THIS QUESTION HAS SOME ERRORS

   AUTHOR : Akashdeep Das
   DATE : 15.04.2019

   QUESTION :
   Write an interactive C program, using pointers, which will encode a line of text. To
   encode a line of text, proceed as follows:
    Convert each character, including blank spaces, to its ASCII equivalent
    Generate a positive random integer. Add this integer to the ASCII equivalent of each
   character. The same random integer will be used for the entire line of text
    Suppose that N1 represents the lowest permissible value in the ASCII code, and N2
   represents the highest permissible value. If the number obtained in step 2 above (i.e.,
   the original ASCII equivalent plus the random integer) exceeds N2, then subtract the
   largest possible multiple of N2 from this number, and add the remainder to N1. Hence
   the encoded number will always fall between N1 and N2, and will therefore always
   represent some ASCII character.
    Display the characters that correspond to the encoded ASCII values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N2 127
#define N1 20

int main()
{
        char text[1000];
        char *ptr=text;
        int i=0,asc[1000],j=0,cal,rem,r;

        srand(time(NULL));
        r=rand();
        printf("Enter the text: ");
        scanf("%[^\n]s",ptr);

        while(*ptr!='\0')
        {
                asc[i]=(int)*ptr;
                asc[i]=asc[i]+r;
                if(asc[i]>N2)
                {
                        cal=asc[i]/N2;
                        asc[i]=asc[i]-(N2*cal);
                }

                ptr++;
                i++;
        }
        while(i)
        {
                printf("%c",(char)asc[j]);
                j++;
                i--;
        }

        return 0;
}
