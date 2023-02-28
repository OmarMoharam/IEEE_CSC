#include<stdio.h>

void main()
{
    int basic_salary, hra, da;
    printf("Enter the basic salary: ");
    scanf(" %d",&basic_salary);

    if (basic_salary <= 10000)
    {
        da = basic_salary * 0.8;
        hra = basic_salary * 0.2;
    }
    else if (basic_salary > 10000 && basic_salary <= 20000)
    {
        da = basic_salary * 0.9;
        hra = basic_salary * 0.25;
    }
    else
    {
        da = basic_salary * 0.95;
        hra = basic_salary * 0.3;
    }
    printf("Gross salary is : %d",basic_salary + hra + da);
}