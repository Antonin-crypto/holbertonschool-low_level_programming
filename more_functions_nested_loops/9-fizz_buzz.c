#include <stdio.h>
/**
 * main - function fizz buzz
 * Return: 0 if success
 */

int main(void)
{
	int i, n = 100;

	for (i = 1; i <= n; i++)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");

		else if ((i % 3) == 0)
			printf("Fizz ");

		else if ((i % 5) == 0)
		{
			if (i == n)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}

		else
			printf("%d ", i);

	}

	return (0);
}
