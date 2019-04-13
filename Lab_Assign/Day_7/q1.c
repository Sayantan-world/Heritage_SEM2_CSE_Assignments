/*
   AUTHOR : Sayantan Pal
   DATE : 06.04.2019

   QUESTION :
   Write a program to find the max, min, average, standard deviation of the elements of an
   integer array. (menu driven)

 */

 #include <stdio.h>
 #include <math.h>

/*________________Function Prototype___________________*/
void max(int a[],int size)
{
        int i,max=a[0];
        for(i=1; i<size; i++)
        {
                if(a[i]>max)
                        max=a[i];
        }
        printf("\nMAX is %d\n",max);
}

void min(int a[],int size)
{
        int i,min=a[0];
        for(i=1; i<size; i++)
        {
                if(a[i]<min)
                        min=a[i];
        }
        printf("\nMIN is %d\n",min);
}

float _avg(int a[],int size)
{
        int i,sum=0; float avg;
        for(i=0; i<size; i++)
        {
                sum+=a[i];
        }
        avg=sum/5;
        return avg;
}
void sd(int a[],int size)
{
        float avg;
        avg=_avg(a,size);
        float s; int i;
        for(i=0; i<size; i++)
        {
                s+=((a[i]-avg)*(a[i]-avg));
        }
        s=sqrt(s/size);
        printf("\nSTANDARD DEVIATION is %.2f\n",s);
}
int main()
{
        int array[100], c, n,choice; char flag;

        printf("Enter number of elements in array: ");
        scanf("%d", &n);

        printf("Enter the  elements: ");

        for (c = 0; c < n; c++)
                scanf("%d", &array[c]);
        while(1)
        {
                printf("\nMENU :\n\n1. MAX\n2. MIN\n3. AVERAGE\n4. SD\n\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {

                case 1:
                {
                        max(array,n);
                        break;
                }

                case 2:
                {
                        min(array,n);
                        break;
                }
                case 3:
                {
                        printf("\nAVERAGE is %.2f\n",_avg(array,n));
                        break;
                }
                case 4:
                {
                        sd(array,n);
                        break;
                }

                default:
                {
                        printf("\nINVALID CHOICE\n");
                        break;
                }

                }

                printf("\nEnter q to QUIT or Any other key to show the menu : ");
                scanf(" %c",&flag);
                if(flag=='q' || flag=='Q')
                        break;



        }
}
