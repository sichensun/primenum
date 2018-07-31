#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	unsigned long number;
	printf("Input a number: ");
	scanf("%d",&number);
	unsigned long max = (unsigned long)sqrt(number);
	for(unsigned long i = 2;i <= max;i++)
	{
		if(number % i == 0)
		{
			printf("%lu is not a primenum\n",number);
			exit(0);
		}
	}
	printf("%lu is a primenum\n",number);
	return 0;
}

