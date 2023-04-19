#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints Opcode
 * @argc: arguments
 * @argv: array of argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	unsigned char opcode;
	int (*arry)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	for (a = 0; a < bytes; a++)
	{
		opcode = *(unsigned char *)arry;
		printf("%.2x", opcode);

		if (a == bytes - 1)
			continue;

		printf(" ");

		arry++;
	}

	printf("\n");

	return (0);
}
