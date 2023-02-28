#include<stdio.h>

void main()
{
    int phy, chem, bio, maths, comp, sum;
    float per;
    printf("Enter your mark in Physics: ");
    scanf(" %d",&phy);
    printf("Enter your mark in Chemistry: ");
    scanf(" %d",&chem);
    printf("Enter your mark in Biology: ");
    scanf(" %d",&bio);
    printf("Enter your mark in Mathematics: ");
    scanf(" %d",&maths);
    printf("Enter your mark in Computer: ");
    scanf(" %d",&comp);

    sum = phy + chem + bio + maths + comp;
    per = (sum/5);
    printf("Percentage is : %0.2f%%\n",per);

    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}