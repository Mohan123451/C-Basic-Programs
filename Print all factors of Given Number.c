#include<stdio.h>
int main ()
{
    int num,col;
    scanf("%d",&num);
    for (col=1; col<=num; col++)
    {
        if (num%col == 0)
        {
          printf("%d",col);
        }
        if (num%col==0 && col<num)
        {
            printf(",");
        }
    }
    return 0;
}
