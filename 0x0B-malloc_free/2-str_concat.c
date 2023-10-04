#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, xy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = xy = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[xy] != '\0')
		xy++;
	conct = malloc(sizeof(char) * (i + xy + 1));

	if (conct == NULL)
		return (NULL);
	i = xy = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[xy] != '\0')
	{
		conct[i] = s2[xy];
		i++, xy++;
	}
	conct[i] = '\0';
	return (conct);
}
