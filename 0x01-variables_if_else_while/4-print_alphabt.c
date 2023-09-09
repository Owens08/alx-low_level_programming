#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point and program to print alphabet letter in all classes
 *
 * Return: Always 0 (Affirmative)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
