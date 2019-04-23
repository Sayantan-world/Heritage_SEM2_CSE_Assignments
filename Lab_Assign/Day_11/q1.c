/*
   AUTHOR : Sayantan Pal
   DATE : 21.04.2019

   QUESTION :
   Define a structure named student to store information of a student (roll, name,
   marksInPhysics, marksInChemistry, marksInMathematics). Write a program, which will
   take as input the roll, name and numbers obtained by several students in different
   subjects. The program will calculate the total marks obtained by each student and display
   the list of students in descending order according to the total marks

 */
 #include <stdio.h>
struct student
{
        char name[50];
        int roll;
        float marksinPhysics,marksinChem,marksInMathematics;
        float tot;

};
struct student swap;
int main()
{
        int i,n;

        printf("\nEnter number of students: ");
        scanf("%d",&n);
        struct student s[n];
        // storing information
        for(i=0; i<n; ++i)
        {
                s[i].roll = i+1;

                printf("\nFor roll number %d, ",s[i].roll);

                printf("Enter name: ");
                scanf("%s",s[i].name);

                printf("Enter marks in Physics Chemistry and Maths: ");
                scanf("%f%f%f",&s[i].marksinPhysics,&s[i].marksinChem,&s[i].marksInMathematics);
                s[i].tot=s[i].marksinPhysics+s[i].marksinChem+s[i].marksInMathematics;
                printf("\n");
        }

        // SORTING
        int c,d;
        for (c = 0; c < n; c++)
        {
                for (d = 0; d < n- c - 1; d++)
                {
                        if (s[d].tot < s[d+1].tot)
                        {
                                swap = s[d];
                                s[d] = s[d+1];
                                s[d+1] = swap;
                        }
                }
        }

        printf("\nDisplaying Information:\n\n");
        // displaying information
        for(i=0; i<n; ++i)
        {
                printf("\n%s has scored a total of %.2f/300\n",s[i].name,s[i].tot);
        }
        return 0;
}
