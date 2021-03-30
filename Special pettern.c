#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,row,col,space;
    printf("ENETR TH NUMBER:");
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        for (col=1; col<=row; col++)
        {
            printf("*");
        }
        for(space=1; space<=(num-row)*2; space++)
        {
            printf(" ");
        }
        for (col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");

    }
    for (row=num; row>=1; row--)
    {
        for (col=1; col<=row; col++)
        {
            printf("*");
        }
         for(space=1; space<=(num-row)*2; space++)
        {
            printf(" ");
        }
        for (col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
