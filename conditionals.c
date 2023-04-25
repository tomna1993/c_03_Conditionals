#include <stdio.h>

int main(void)
{
	int x, y;

	printf("Give the first number: ");
	scanf("%d\n", &x);

	printf("Give the second number: ");
	scanf("%d\n", &y);
	
	if (x < y)
	{
		printf("%d is less than %d", x, y);
	}
	else if (x > y)
	{
		printf("%d is greater than %d", x, y);
	}
	else
		printf("The two numbers are equal!");
}