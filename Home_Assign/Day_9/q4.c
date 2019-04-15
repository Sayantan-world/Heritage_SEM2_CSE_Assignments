/*
   AUTHOR : Sayantan Pal
   DATE : 15.04.2019

   QUESTION :
   Write a program to count the number of vowels and digits in a given sing
 */

 #include <stdio.h>

void count(char s[])
{
        int i=0;
        int vowels=0,digits=0;
        while ( s[i] != '\0')
        {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='A' ||s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U')
                {
                        vowels++;
                }
                if(s[i]>='0' && s[i]<='9')
                {
                        digits++;
                }
                i++;
        }

        printf("\n\n");

        printf("\nTOTAL NUMBER OF VOWELS : %d\n",vowels);
        printf("\nTOTAL NUMBER OF DIGITS : %d\n",digits);

}

int main( )
{
        char s[1000];
        printf ( "\nEnter String: ");
        scanf("%[^\n]", s);

        count(s);

        return 0;
}
