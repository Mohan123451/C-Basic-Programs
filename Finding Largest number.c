#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int num,safe,largestnum=-1,copy;
     scanf("%d",&num);
     copy = num;
// largest number using for loop
   for (int i=1; i<copy; i++)
    {
        safe = num%10;
        if (safe > largestnum)
            largestnum = safe;
        num = num/10;
    }

// largest number program using while loop
    while(num>0)
    {
        safe = num%10;
        if (safe >largestnum)
            largestnum = safe;
        num = num/10;

    }*/
    printf("The largest number is : %d",largestnum);
    return 0;

}
