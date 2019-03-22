/*
   AUTHOR : Sayantan Pal
   DATE : 22.03.2019

   QUESTION :
   Write a recursive function to evaluate n Cr
 */

 #include <stdio.h>
int ncr(int n,int r);
int main()
{
        int n,r,y;
        printf("\nEnter the value of n and r: ");
        scanf("%d %d",&n,&r);
        if(r>=0  && n>=0)
        {
                y=ncr(n,r);
                printf("\nThe value of nCr is %d\n",y);
        }
        else
        {
                printf("\nINVALID\n");
        }
        return 0;
}
int ncr(int n,int r)
{
        int y,res;
        if(r==0)
        {
                y=1;
                return y;
        }
        else if(n==r)
        {
                y=1;
                return y;
        }
        else
        {
                res=ncr(n-1,r-1)+ncr(n-1,r);
        }
        return res;
}
