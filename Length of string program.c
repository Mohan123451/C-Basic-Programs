#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char arr[100];
    printf("\nEnter the string:");
    scanf("%[^\n]s",arr);
    int len;
    len=strlen(arr);
    printf("\nLength of string is :%d\n",len);
    return 0;
}
