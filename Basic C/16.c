#include<stdio.h>

void main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float sum, avg, per;

    printf("Enter subject 1 's mark: ");
    scanf(" %f",&sub1);
    printf("Enter subject 2 's mark: ");
    scanf(" %f",&sub2);
    printf("Enter subject 3 's mark: ");
    scanf(" %f",&sub3);
    printf("Enter subject 4 's mark: ");
    scanf(" %f",&sub4);
    printf("Enter subject 5 's mark: ");
    scanf(" %f",&sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = sum / 5;
    per = (sum / 500) * 100;

    printf("The total marks is: %.2f\n",sum);
    printf("The average is: %.2f\n",avg);
    printf("The percentage is: %.2f",per);
}