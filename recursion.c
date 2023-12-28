#include<stdio.h>

int factorial(int num)
{
	int fact;
	
	if(num<=1)
	{
		return 1;
	}
	else
	{
		fact = num * factorial(num-1);
		return fact;
	}
}
void main()
{
	int num;
	printf("enter number = ");
	scanf("%d", &num);
	printf("factorial = %d", factorial(num));
}