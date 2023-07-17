#include <stdio.h>

//input 3-line code for IF without curly brackets

int main ()
{
	int age = 21;	
	int year = 2002;
	int month  = 3;
	printf("Input your age\n");
        scanf("%d", &age);	
	printf("Input the year you were born\n");
        scanf("%d", &year);	
	printf("Input the month you were born\n");
        scanf("%d", &month);	
	if (age > 17)
		if (year > 2000)
			if (month <= 12)
		printf("Alright \n");


}

