#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num,row,col;
    printf("ENTER THE NUMBER:");
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        for (col=1; col<=num; col++)
        {
            if (row==(num/2)+1 || col==(num/2)+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
