/*
   AUTHOR : Akashdeep Das
   DATE : 15.04.2019

   QUESTION :
   Write three functions, using pointers, to concatenate two strings, to compare two strings
   and to reverse a string, respectively. Test these functions in a complete program.
 */
#include <stdio.h>
#include <stdlib.h>

void concat(char *ptr1,char *ptr2)
{
        char str3[100];
        int i=0;

        while(*ptr1 != '\0')
        {
                str3[i]=*ptr1;
                i++;
                ptr1++;
        }

        while(*ptr2 != '\0')
        {
                str3[i]=*ptr2;
                i++;
                ptr2++;
        }
        str3[i]='\0';

        printf("Concatenated string is: ");
        puts(str3);

}

void compare(char *ptr1,char *ptr2)
{
        int flag=1;
        while(*ptr1 != '\0' && *ptr2 != '\0')
        {
                if(*ptr1 != *ptr2)
                {
                        printf("Not equal\n");
                        flag=0;
                        break;
                }
                ptr1++;
                ptr2++;

                if(*ptr1 != '\0' && *ptr2 == '\0')
                {
                        printf("Not equal\n");
                        flag=0;
                        break;
                }
                else if(*ptr1 == '\0' && *ptr2 != '\0')
                {
                        printf("Not equal\n");
                        flag=0;
                        break;
                }

        }
        if (flag==1)
                printf("Equal Strings\n");
}

void reverse(char *ptr)
{
        char *t;
        t=ptr;
        while(*ptr !='\0')
        {
                ptr++;
        }
        ptr--;
        printf("Reversed string is: ");
        while( ptr != t-1)
        {
                printf("%c",*ptr);
                ptr--;
        }
}
int main()
{
        char str1[50],str2[50];


        printf("Enter string 1: ");
        fgets(str1,100,stdin);

        printf("Enter string 2: ");
        fgets(str2,100,stdin);

        concat(str1,str2);
        compare(str1,str2);
        reverse(str1);
        return 0;
}
