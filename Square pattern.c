#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,row,col;
    scanf("%d",&num);
    for (row=1; row<=num; row++)
    {
        for (col=1; col<=num; col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
