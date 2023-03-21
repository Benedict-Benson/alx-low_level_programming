#include <stdio.h>

/**
 * main - list of all natural numbers and addition
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum += a;
	}
	printf("%d\n", sum);

	return (0);
}


