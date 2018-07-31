#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int number;
	printf("Input a number: ");
	scanf("%d",&number);
	int max = (int)sqrt(number);
	for(int i = 2;i <= max;i++)
	{
		if(number % i == 0)
		{
			printf("%d is not a primenum\n",number);
			exit(0);
		}
	}
	printf("%d is a primenum\n",number);
	return 0;
}

