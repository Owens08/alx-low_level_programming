#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program entry point and printaplhabet letters in reverse
 * Return: 0 if everything is affirmative. other int otherwise.
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar(10);
	return (0);
}
