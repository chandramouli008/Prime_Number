#include<stdio.h>

int IsPrime(unsigned int num)
{
	int val;
	
	for(val=2;val<=num/2;val++)
	{
		if(num%val==0)
			return 0;
	}
	if(val == num)
		return 1;
}


int main()
{

	int num;

	scanf("%d",&num);

	if(num<2)
		printf("prime numbers starts from 2");
	else
	{
		IsPrime(num) ? printf("its a prime number\n") : printf("its not a prime number\n");
	}
}

