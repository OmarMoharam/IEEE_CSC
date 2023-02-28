#include<stdio.h>

void main()
{
	int num1,num2;

	printf("Enter the first number: ");
	scanf(" %d",&num1);
	printf("Enter the second number: ");
	scanf(" %d",&num2);

	printf("The addtion of the two numbers is: %d\n",num1 + num2);
	printf("The subtraction of the two numbers is: %d\n",num1 - num2);
	printf("The multiplication of the two numbers is: %d\n",num1 * num2);
	printf("The division of the two numbers is: %d\n",num1 / num2);
	printf("The modulues of the two numbers is: %d",num1 % num2);
	
}