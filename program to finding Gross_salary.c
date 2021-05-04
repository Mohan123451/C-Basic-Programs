#include<stdio.h>
#include<math.h>
int main ()
{
    int basic_salary,HRA,DA,gross_salary;
    scanf("%d",&basic_salary);
    if (basic_salary>=1 && basic_salary<=10000)
    {
        HRA = ((20*basic_salary)/100);
        DA = ((80*basic_salary)/100);
    }
    else if (basic_salary>10000 && basic_salary<=20000)
    {
        HRA = ((25*basic_salary)/100);
        DA = ((90*basic_salary)/100);
    }
    else if (basic_salary>20000)
    {
        HRA = ((30*basic_salary)/100);
        DA = ((95*basic_salary)/100);
    }
    gross_salary = basic_salary + HRA + DA;
    printf("Rs.%d.00",gross_salary);
    return 0;
}
