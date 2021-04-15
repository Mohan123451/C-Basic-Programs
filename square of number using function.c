
#include<stdio.h>
int multiply(int a);

int main ()
{
    int num,result;
    scanf("%d",&num);
   // result = multiply(num);
    printf("%d",multiply(num));
}
int multiply(int a)
{
  return a*a;

}
