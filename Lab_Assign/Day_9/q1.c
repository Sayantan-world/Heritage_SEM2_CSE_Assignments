/*
   AUTHOR : Sayantan Pal
   DATE : 15.04.2019

   QUESTION :
   Write a program to implement the following tasks,
    Compare two given strings,
    Concatenate two given strings, without using standard library functions.
    Whether a given string is palindrome or not
 */

 #include <stdio.h>

void my_strcmp(char s1[], char s2[])
{
        int c=0;
        while( ( s1[c] != '\0' && s2[c] != '\0' ) && s1[c] == s2[c] )
        {
                c++;
        }

        if(s1[c] == s2[c])
        {
                printf("\nBoth the strings are same\n"); // strings are identical
        }

        else if((s1[c]- s2[c])>0)
        {
                printf("\nString 2 comes first in dictionary\n");
        }
        else
        {
                printf("\nString 1 comes first in dictionary\n");
        }
}

void my_strrev(char s[])
{
        char r[100];
        int begin, end, count = 0,flag=1,i;

        while (s[count] != '\0')
                count++;

        end = count - 1;

        for (begin = 0; begin < count; begin++)
        {
                r[begin] = s[end];
                end--;
        }

        r[begin] = '\0';

        for(i=0; r[i]!='\0'; i++)
        {
                if(r[i]!=s[i])
                {
                        flag=0;
                        break;
                }
        }
        if(flag==0)
        {
                printf("\nNOT PALINDROME\n");
        }
        else
                printf("\nPALINDROME\n");

}

void my_strcat(char str1[],char str2[])
{
        int i,j;
        for(i=0; str1[i]!='\0'; ++i);


        for(j=0; str2[j]!='\0'; ++j, ++i)
        {
                str1[i]=str2[j];
        }

        str1[i]='\0';
        printf("\nConcatinated String: %s\n\n",str1);

}
int main( )
{

        char s1[100],s2[100];

        printf ( "\nEnter string 1: ");
        scanf("%[^\n]", s1);
        printf ( "\nEnter string 2: ");
        scanf(" %[^\n]", s2);

        my_strcmp(s1,s2);

        my_strrev(s1);
        my_strrev(s2);

        my_strcat(s1,s2);

        return 0;
}
