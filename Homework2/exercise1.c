#include <stdio.h>

int main ()
{
	int year = 0;
	printf("Enter a year please\n");
	scanf("%d", &year);
	if (year % 4 == 0) {
		printf("It's a leap year.\n");
		} else {
			printf("It's not a leap year\n");
		}
}
