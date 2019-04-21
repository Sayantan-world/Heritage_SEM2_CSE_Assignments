/*
   AUTHOR : Sayantan Pal
   DATE : 21.04.2019

   QUESTION :
   Write a program by using structure that describes the set of books in a library. For each
   book the members are name of author, publisher, price and branch information. The
   program should,
    print the list of books supplied by a publisher
    print the list of books in a particular branch
   in a file say “lib.txt”

 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
struct books
{
        char name[50],publisher[50],branch[50];
        int num;
        float price;

};
int main()
{
        int i,n;
        char b[50],p[50];
        FILE *hand;
        hand=fopen("O_P.txt","a+");
        printf("\nEnter number of books: ");
        scanf("%d",&n);
        struct books s[n];
        // storing information
        printf("\nDO NOT USE SPACE INSTEAD USE '-' FOR SEPARATION\n");
        for(i=0; i<n; ++i)
        {
                s[i].num = i+1;

                printf("\nBOOK NUMBER %d \n\n",s[i].num);

                printf("Enter name: ");
                scanf("%s",s[i].name);
                printf("Enter publisher: ");
                scanf("%s",s[i].publisher);
                printf("Enter branch: ");
                scanf("%s",s[i].branch);

                printf("Enter Price: ");
                scanf("%f",&s[i].price);
                printf("\n");
        }

        printf("Enter branch: ");
        scanf("%s",b);
        fprintf(hand,"\nBranch - %s has: \n",b);
        for(i=0; i<n; ++i)
        {
                if(strcmp(b,s[i].branch)==0)
                {
                        fprintf(hand,"%s ",s[i].name);
                }
        }

        printf("Enter publisher: ");
        scanf("%s",p);
        fprintf(hand,"\n\nPublisher - %s has: \n",p);
        for(i=0; i<n; ++i)
        {
                if(strcmp(p,s[i].publisher)==0)
                {
                        fprintf(hand,"%s ",s[i].name);
                }
        }
        fclose(hand);
        return 0;
}
