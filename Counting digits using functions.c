#include<stdio.h>
int result(int a);

int main ()
{
    int num,final_count;
    scanf("%d",&num);
    final_count = result(num);
    printf("%d",final_count);
}
int result(int a)
{
    int count=0;
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    return count;
}
