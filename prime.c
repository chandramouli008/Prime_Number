#include<stdio.h>

int main()
{

	int i,num;

	scanf("%d",&num);

	if(num<2)
		printf("prime numbers starts from 2");
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				printf("its not a prime number");
				return 0;
			}
		}
		printf("its a prime number");
	}
}

