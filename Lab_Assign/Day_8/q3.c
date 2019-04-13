/*
   AUTHOR : Sayantan Pal
   DATE : 06.04.2019

   QUESTION :
   Write a program to accept the maximum temperature of 5 different cities in 7 days of a
   week. Calculate the average temperature of each city and display the name of the cities
   along with their average temperatures in order of their temperatures
 */

 #include <stdio.h>

int main()
{
        int c,d, mat[5][7],swap_i;
        int city[]={1,2,3,4,5};
        float av[5],temp=0,swap_f;

        //INPUT
        for (c = 0; c < 5; c++)
        {
                printf("\nEnter temperatures of City %d:",c+1 );
                for (d = 0; d < 7; d++)
                        scanf("%d", &mat[c][d]);
        }


        //AVG Calculate
        for (c = 0; c < 5; c++)
        {
                temp=0;
                for (d = 0; d < 7; d++)
                        temp+=mat[c][d];
                av[c]=temp/7;
        }

        //SORTING
        for (c = 0; c < 4; c++)
        {
                for (d = 0; d < 5 - c - 1; d++)
                {
                        if (av[d] > av[d+1])
                        {
                                swap_f    = av[d];
                                av[d]     = av[d+1];
                                av[d+1]   = swap_f;

                                swap_i    = city[d];
                                city[d]   = city[d+1];
                                city[d+1] = swap_i;
                        }
                }
        }


        for (c = 0; c < 5; c++)
                printf("\nCity %d has Temperature %.2f\n", city[c],av[c]);


        return 0;
}
