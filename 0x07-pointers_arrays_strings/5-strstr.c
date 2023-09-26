#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Affirmative)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *f = needle;

		while (*t == *f && *f != '\0')
		{
			f++;
			t++;
		}

		if (*f == '\0')
			return (haystack);
	}

	return (0);
}
