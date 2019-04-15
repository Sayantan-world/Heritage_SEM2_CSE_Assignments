/*
   AUTHOR : Sayantan Pal
   DATE : 15.04.2019

   QUESTION :
   Write a program to read in a line of text and count the number of blank spaces, tabs and
   new lines in that line. Also rewrite the line of text with tabs and new lines replaced by the
   visible sequences ‘\t’ ‘\n’
 */

 #include <stdio.h>

void count(char s[])
{
        int c=0;
        char new[1000];
        int sp=0,t=0,n=0;
        printf("\nNEW STRING: ");
        while ( s[c] != '\0')
        {
                if(s[c] == ' ')
                {
                        sp++;
                        printf("%c",s[c]);
                }
                if(s[c] == '\t')
                {
                        t++;
                        printf(" \\t ");
                }
                if(s[c] == '\n')
                {
                        n++;
                        printf(" \\n ");
                }
                if(s[c]!= ' ' || s[c]!= '\t' || s[c]!= '\n')
                {
                        printf("%c",s[c]);
                }
                c++;

        }

        printf("\n\n");

        printf("\nTOTAL NUMBER OF SPACE IS %d\n",sp);
        printf("\nTOTAL NUMBER OF TABS IS %d\n",t);
        printf("\nTOTAL NUMBER OF NEW LINE IS %d\n",n);

}

int main( )
{
        char s[1000];
        printf ( "\nEnter string and at the end please use (?) to end the string : ");
        scanf("%[^\?]", s);

        count(s);

        return 0;
}
