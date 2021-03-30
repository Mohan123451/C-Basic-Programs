#include<stdio.h>
#include<stdlib.h>
int main ()
{

 int num,row,col;
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        for (col=1; col<=num; col++)
        {
            if (row==col || col==(num-row+1) || row==1 || row==num || col==1 || col==num)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
