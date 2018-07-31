#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Author:sichen

/********************

  This program determines whether a number is a prime number.
  Divided a number by a list from 2 to sqrt(n),not from 2 to n,to save running time.

  Using unsigned long instead of int,to show a larger number;
  My runtime environment is archlinux x64,the unsigned long on my system is 64 bit.

********************/

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

