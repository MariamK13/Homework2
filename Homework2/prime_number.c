#include <stdio.h>

int main ()
{
	int x = 0;
	int is_prime = 0;
	printf("This program shows whether the inputed number is prime or not.\n");
	printf("Enter a number please\n");
	scanf("%d", &x);
	if (x == 1 || x == 0)
	{
		is_prime = 1;
	}

	for (int i = 2; i <= x / 2; ++i) {
		if (x % i == 0) {
			is_prime = 1;
			break;
		}
	}
	
	if (is_prime == 0) {
		printf("Prime number\n");
	} else {
		printf("Nonprime number\n");
	}
}

