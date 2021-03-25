#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char arr[100];
    int len,d1,d2,i;
    scanf("%[^\n]s",arr);
    len = strlen(arr);
    for (d1=d2=len-1; d1>=-1; d1--)
    {
        if (arr[d1]==' ' || d1==-1)
        {
            for (i=d1+1; i<=d2; i++)
            {
                printf("%c",arr[i]);
            }
            printf(" ");
            d2=d1-1;
        }
    }
    return 0;
}
