/*
   AUTHOR : Sayantan Pal
   DATE : 15.14.2019

   QUESTION :
   Write a program to read in a line of text and count the number of lines, words and
   characters in that text.
 */

 #include <stdio.h>

void count(char s[])
{
        int c=0;
        int sp=0,t=0,n=0;
        while ( s[c] != '\0')
        {
                if(s[c] == ' ' || s[c] == '\n')
                {
                        sp++;
                }
                if(s[c] == '\n')
                {
                        n++;
                }
                t++;
                c++;

        }

        printf("\nTOTAL NUMBER OF WORDS IS %d\n",sp+1);
        printf("\nTOTAL NUMBER OF CHARACTERS IS %d\n",t);
        printf("\nTOTAL NUMBER OF LINE IS %d\n",n);

}

int main( )
{
        char s[1000];
        printf ( "\nEnter string and at the end please use (?) to end the string : ");
        scanf("%[^\?]", s);

        count(s);

        return 0;
}
