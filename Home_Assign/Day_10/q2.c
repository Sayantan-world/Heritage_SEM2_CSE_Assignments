/*
   AUTHOR : Akashdeep Das
   DATE : 15.04.2019

   QUESTION :
   Write a program, using pointers, that accepts a string and converts all its characters to
   upper or lower case. Use the functions toupper( ) and tolower( ) defined in ctype.h.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void input(char *ptr)
{
        scanf("%[^\n]s",ptr);
}


void convert_u( char *ptr)
{
        printf("\nUppercase: \n");
        while(*ptr!='\0')
        {
                printf("%c",toupper(*ptr));
                ptr++;
        }

}
void convert_l( char *ptr)
{
        printf("\n\nLowercase:\n");
        while(*ptr!='\0')
        {
                printf("%c",tolower(*ptr));
                ptr++;
        }
        printf("\n");
}
int main()
{
        char str[50];


        printf("Enter a string: ");
        input(str);

        convert_u(str);
        convert_l(str);

        return 0;
}
