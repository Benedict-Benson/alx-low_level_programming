#include <stdio.h>

void text(void)__attribute__((constructor));

/**
 * text - prints a sentence
 *
 */
void text(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

