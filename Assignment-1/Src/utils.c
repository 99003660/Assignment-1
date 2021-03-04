#include "utils.h"
#include <stdio.h>

int factorial(int num)
{
	int i, fact=1;
	for(i=1; i<=num; i++)
	{
		fact=fact*num;
	}
	return fact;
}
	
int isprime(int num)
{
	int i,flag=0;
	for(i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			flag=1;break;
		}
	}

	if(flag==0)
		printf("%d is a prime number\n",num);
	else
		printf("%d is not a prime number\n",num);
	return 0;
}

int ispalindrome(int num)
{
	int reverse=0, remainder, num1;
	num1=num;
	while(num!=0)
	{
		remainder = num%10;
		reverse = reverse *10 + remainder;
		num =num/10;
	}
	if(num1==reverse)
		printf("%d is a palindrome\n",num1);
	else
		printf("%d is not a palindrome\n",num1);
	return 0;
}
