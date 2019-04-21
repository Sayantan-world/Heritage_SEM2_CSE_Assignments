/*
   AUTHOR : Akashdeep Das
   DATE : 21.04.2019

   QUESTION :
   Define a structure named employee to store information of an employee (empNo, name,
   department, basicPay, DA, HRA and grossSalary). Write a program, which will take as
   input the empNo, name, department, basicPay for several employees from a file named
   I_P.txt. The program will calculate the DA, HRA and total for each employee and
   display the details of the employee having the highest gross salary in a file O_P.txt
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
                        fp=fopen("Directory.txt","a");
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
