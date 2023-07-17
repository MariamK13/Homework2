#include <stdio.h>

int main ()
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("Enter please the 1st number\n");
	scanf("%d", &x);
	printf("Enter please the 2nd number\n");
	scanf("%d", &y);
	printf("Enter please the 3rd number\n");
	scanf("%d", &z);
	int gcd = 0;
	for (int i = 1; i <= x, i <= y, i <= z; ++i)
	{
		if (x % i == 0 && y % i == 0 && z % i ==0)
			gcd = i;

	}
	printf("The greatest common divisor is %d\n", gcd);

}
