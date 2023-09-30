#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int q;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	q = 0;
	while (src[q] != '\0')
	{
		dest[a] = src[q];
		a++;
		q++;
	}

	dest[a] = '\0';
	return (dest);
}
