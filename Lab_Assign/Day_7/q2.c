/*
   AUTHOR : Sayantan Pal
   DATE : 06.04.2019

   QUESTION :
   Write a program to insert and delete an element (given by the user) into an array in a
   particular position (given by the user)

 */

 #include <stdio.h>
int insert(int array[],int n,int pos,int val)
{
        int c;
        if(pos<=0)
                pos=1;
        if(pos>n)
                pos=n+1;
        for (c = n - 1; c >= pos - 1; c--)
                array[c+1] = array[c];

        array[pos-1] = val;
        printf("\nCurrent array: ");

        for (c = 0; c <= n; c++)
                printf(" %d ", array[c]);
}
int del(int array[],int n,int pos)
{
        int c;
        if (pos >= n+1 || pos<=0)
                printf("Deletion not possible.\n");
        else
        {
                for (c = pos - 1; c < n - 1; c++)
                        array[c] = array[c+1];

                printf("\nCurrent array: ");

                for (c = 0; c < n - 1; c++)
                        printf(" %d ", array[c]);
        }

}

int main()
{
        int array[100], c, n,choice; char flag;
        int pos,val;

        printf("Enter number of elements in array: ");
        scanf("%d", &n);

        printf("Enter the  elements: ");

        for (c = 0; c < n; c++)
                scanf("%d", &array[c]);
        while(1)
        {
                printf("\nMENU :\n\n1. INSERT\n2. DELETE\n\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {

                case 1:
                {
                        printf("Enter the position: ");
                        scanf("%d", &pos);

                        printf("Enter the value to insert: ");
                        scanf("%d", &val);
                        insert(array,n,pos,val);
                        n++;
                        break;
                }

                case 2:
                {
                        printf("Enter the position: ");
                        scanf("%d", &pos);

                        del(array,n,pos);
                        break;
                }

                default:
                {
                        printf("\nINVALID CHOICE\n");
                        break;
                }

                }

                printf("\n\nEnter q to QUIT or Any other key to show the menu : ");
                scanf(" %c",&flag);
                if(flag=='q' || flag=='Q')
                        break;



        }
}
