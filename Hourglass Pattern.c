#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num,row,col;
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        for (col=1; col<=row-1; col++)
        {
            printf("  ");
        }

        for (col=1; col<=2*(num-row)+1; col++)
        {
            printf("* ");
        }
        for (col=1; col<=row-1; col++)
        {
            printf("  ");
        }
        printf("\n");
    }
       for (row=1; row<=num; row++)
       {

        for (col=1; col<=num-row; col++)
        {
            printf("  ");
        }
        for (col=1; col<=(2*row-1); col++)
        {
            printf("* ");
        }
        for (col=1; col<=num-row; col++)
        {
            printf("  ");
        }
        printf("\n");
       }
    return 0;
}
