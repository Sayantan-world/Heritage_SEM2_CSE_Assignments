/*
   AUTHOR : Sayantan Pal
   DATE : 21.04.2019

   QUESTION :
   Define a structure named employee to store information of an employee (empNo, name,
   department, basicPay, DA, HRA and grossSalary). Write a program, which will take as
   input the empNo, name, department, basicPay for several employees from a file named
   I_P.txt. The program will calculate the DA, HRA and total for each employee and
   display the details of the employee having the highest gross salary in a file O_P.txt

 */
 #include <stdio.h>
struct employee
{
        char name[50],dept[50];
        int empNo;
        float basic,da,hra,gr;

};
struct employee swap;
int main()
{
        FILE *handler;
        FILE *hand;
        handler=fopen("I_P.txt","r");
        hand=fopen("O_P.txt","w+");
        int i,n,p;
        float max=0;

        printf("\nEnter number of employees: ");
        scanf("%d",&n);
        struct employee s[n];

        //Fetching information
        if(handler == NULL)
        {
                printf("\nUNABLE TO OPEN FILE\n");
        }
        else
        {

                i=0;
                while(i<n)
                {
                        //This line scans the words according to format specified and assigns them to the variables
                        fscanf(handler,"%d %s %s %f",&s[i].empNo,s[i].name,s[i].dept,&s[i].basic);

                        s[i].da = s[i].basic;
                        s[i].hra = 0.12*s[i].basic;
                        s[i].gr = s[i].basic + s[i].da + s[i].hra;
                        if(s[i].gr>max)
                        {
                                p=i;
                                max=s[i].gr;
                        }
                        //fgetc(handler);// To skip next line character
                        i++;
                }
                printf("\n");
        }

        fprintf(hand,"%s has highest gross salary of %.2f who is from %s\n",s[p].name,s[p].gr,s[p].dept);
        fclose(handler);
        fclose(hand);
        return 0;
}
