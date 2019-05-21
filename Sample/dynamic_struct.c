/*
# Structures using Dynamic mem allocation

Date : 20.05.2019

*/

#include <stdio.h>
#include <stdlib.h>
struct student
{
    int r,p,c;
};

void main()
{
    int n,k,i,agg,max=0;
    struct student *ptr;
    
    printf("\n Number of students = ");
    scanf("%d",&n);
    
    ptr = (struct student*) malloc (n * sizeof(struct student));
    
    for (i=0;i<n;i++)
    {
    	printf("\n_______________________\nSTUDENT %d\n_______________________\n",(i+1));
    	printf("\nEnter roll and marks in physics and cs (seperated by space) : ");
    	
    	// 	To access the students's members, we can use the -> notation    	
        scanf("%d%d%d",&(ptr+i)->r,&(ptr+i)->p,&(ptr+i)->c);
        
        agg=(ptr+i)->p+(ptr+i)->c;
        if(agg>max)
        {
            max=agg;
            k=i;
        }
    }
    
    printf("\nStudent with roll no. %d has got %d\n",(ptr+k)->r,max);
    
    free(ptr);
}
