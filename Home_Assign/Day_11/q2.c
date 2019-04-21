/*
   AUTHOR : Akashdeep Das
   DATE : 21.04.2019

   QUESTION :
   Develop a simple telephone directory which saves your friends contact information in a
   file named directory.txt. The program should have a menu similar to the following:
   Menu
   1 - Add new friend.
   2 - Display contact info.
   3 - Exit.
   Enter your preference:

   When you press 1 it should request you to enter the following data:
   New friend info
   Name: Saman
   Phone no.: 011-2123456
   e-mail: saman@cse.heritageit.edu
   After adding new contact information it should again display the menu.
   When you press 2 it should display all the contact information stored in the
   directory.txt file as follows:
   Contact Info
   Name              Phone No.                  E-mail
   Kamala           033-9876543          kamala@cse.heritageit.edu
   Avinash          022-8765432          avinash@cse.heritageit.edu
   Saman            011-2123456          saman@cse.heritageit.edu

 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
        char name[50],phone[20],email[50],str[1000];
        int choice,count=0;
        FILE *fp;

        do
        {
                printf("\n1. Add friend\n2. Display contact info\n3. Exit\nEnter your preference: ");
                scanf("%d",&choice);

                if(choice==1)
                {
                        fp=fopen("Directory.txt","a+");
                        if(fp == NULL)
                        {
                                printf("Error!");
                                exit(1);
                        }

                        printf("New friend info\n");

                        getchar();
                        printf("Name: ");
                        scanf("%[^\n]s",name);
                        getchar();

                        printf("Phone number: ");
                        scanf("%[^\n]s",phone);
                        getchar();

                        printf("E-mail: ");
                        scanf("%[^\n]s",email);
                        getchar();

                        if(count==0)
                        {
                                fprintf(fp,"Name\t\tPhone\t\tE-mail\n");
                                count++;
                        }
                        fprintf(fp,"%s\t%s\t%s\n",name,phone,email);

                        fclose(fp);
                }

                else if(choice==2)
                {
                        printf("\nContact Info\n\n");
                        fp=fopen("Directory.txt","r");
                        while(fgets(str,1000,fp) != NULL)
                        {
                                puts(str);
                        }
                }
        } while(choice!=3);
        fclose(fp);
        return 0;
}
