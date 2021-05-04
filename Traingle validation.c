#include<stdio.h>
int main ()
{
    int ang1,ang2,ang3;
    scanf("%d %d %d",&ang1,&ang2,&ang3);
    if ((ang1 + ang2 + ang3) == 180)
    {
        printf("Valid");
    }
    else
    {
        printf("Not Valid");
    }
    return 0;
}
