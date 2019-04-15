/*
   AUTHOR : Sayantan Pal
   DATE : 15.04.2019

   QUESTION :
   Write a program to read a line of text from the keyboard and convert it into a coded text
   by changing its characters by adding a code number to them. This code number must be
   taken as input
 */

 #include <stdio.h>

void encode(char s[],int n)
{
        int c=0;
        while ( s[c] != '\0')
        {
                if(s[c] == ' ')
                {
                        c++;
                        continue;
                }
                else
                {
                        s[c]+=n;
                        c++;
                }
        }
        printf("\nCODED STRING: %s\n\n",s);

}

int main( )
{
        int n;
        char s[1000];

        printf ( "\nEnter string : ");
        scanf("%[^\n]", s);

        printf ( "\nEnter code number : ");
        scanf("%d",&n);

        encode(s,n);

        return 0;
}
