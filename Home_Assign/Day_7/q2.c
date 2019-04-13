/*
   AUTHOR : Sayantan Pal
   DATE : 07.04.2019

   QUESTION :
   Write a program to print a histogram of the frequencies of different characters present in
   a character array entered through keyboard

 */
 #include <stdio.h>
 #include <string.h>

void find_frequency(char [], int []);

int main()
{
        char string[100];
        int c, count[100] = {0};

        printf("\nInput a string: ");
        fgets(string,100,stdin);

        find_frequency(string, count);

        printf("Character Count\n");

        for (c = 0; c < 94; c++)
                printf("%c \t  %d\n", c + '!', count[c]);

        return 0;
}

void find_frequency(char s[], int count[])
{
        int c = 0;

        while (s[c] != '\0') {
                if (s[c] >= '!' && s[c] <= '~' )
                        count[s[c]-'!']++;
                c++;
        }
}
