#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()
{
    int a,b,c;
   // SUM OF FIRST AND LAST NUMBERS
    scanf("%d %d %d",&a, &b, &c);
    c = c % 10;
    int firstnum = a;
    while (firstnum>=10)
        {
            firstnum/=10;
        }
    printf("sum of first and Last number is : %d ",firstnum+c);
    return 0;
}
