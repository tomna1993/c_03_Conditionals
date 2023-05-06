#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int x = get_int("Give the first number: ");
	int y = get_int("Give the second number: ");
	
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