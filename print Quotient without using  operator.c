#include<stdio.h>
int main  ()
{
    int num1,num2,counter=0,max,min;
    scanf("%d %d",&num1,&num2);
    max = num1>num2 ?num1:num2;
    min = num1+num2-max;
    while (max>=min)
    {
        max = max - min;
        counter++;
    }
    printf("%d",counter);
    return 0;
}
