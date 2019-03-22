/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Write five user defined functions which perform the tasks of strlen( ), strcmp( ), strcpy( ),
   strrev( ), strcat( ). Write a program to test these functions
 */

 #include <stdio.h>

int strleng(char s[])
{
        int c=0;

        while (s[c] != '\0')
                c++;
        return c;

}
int my_strcmp(char s1[], char s2[])
{
        int c=0;
        while( ( s1[c] != '\0' && s2[c] != '\0' ) && s1[c] == s2[c] )
        {
                c++;
        }

        if(s1[c] == s2[c])
        {
                return 0; // strings are identical
        }

        else
        {
                return (s1[c]- s2[c]);
        }
}
void my_strcpy(char s1[])
{
        int i; char s3[100];
        for(i = 0; s1[i] != '\0'; ++i)
        {
                s3[i] = s1[i];
        }

        s3[i] = '\0';
        printf("\nCopy of string s1 in s3: %s\n", s3);
}
void my_strrev(char s[])
{
        char r[100];
        int begin, end, count = 0;

        while (s[count] != '\0')
                count++;

        end = count - 1;

        for (begin = 0; begin < count; begin++)
        {
                r[begin] = s[end];
                end--;
        }

        r[begin] = '\0';

        printf("\nReversed string : %s", r);

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
        printf("\n\nConcatinated String: %s\n",str1);

}
int main( )
{
        int len;
        char s1[100],s2[100];

        printf ( "\nEnter string 1: ");
        scanf("%[^\n]", s1);
        printf ( "\nEnter string 2: ");
        scanf(" %[^\n]", s2);

        printf("\nLength of string 1: %d",strleng(s1));
        printf("\nLength of string 2: %d\n",strleng(s2));

        printf("\nstrcmp(s1,s2): %d\n",my_strcmp(s1,s2));

        my_strcpy(s1);

        my_strrev(s1);
        my_strrev(s2);

        my_strcat(s1,s2);
        return 0;
}
