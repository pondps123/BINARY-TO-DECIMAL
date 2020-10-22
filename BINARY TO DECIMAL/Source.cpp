#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void decimal(long long int num_bin)
{
	long long int a[128], i = 0, *b, j = 0 ,c = 0;
	while (num_bin >= 10) 
	{
		a[i] = num_bin % 10;
		num_bin /= 10;
		i++;
	}
	a[i] = num_bin;
	b = a;
	for ( i ;  i >= 0 ;  i--)
	{
		c += (*b * pow(2, j));
		j++;
		b++;
	}
	printf("Decimal Number : %lld", c);
}
int main()
{
	long long int a, b[128], i = 0, c;
	printf("Enter Binary Number : ");
	scanf("%lld", &a);
	c = a;
	while (a >= 10) {
		b[i] = a % 10;
		a /= 10;
		if (b[i] >= 2)
		{
			printf("you enter wrong binary number ");
			return 0;
		}
		i++;
	}
	decimal(c);
	return 0;
}