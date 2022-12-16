#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (x = 1; x <= 100; x++)
	{
		if (x == 100)
			printf("%s", b)
		else if ((x % 3 == 0) && (x % 5 == 0))
			printf("%s ", ab);
		else if (i % 3 == 0)
			printf("%s ", a);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
