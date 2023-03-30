#include "main.c"

/**
 * _strncat - joins two strings with n bytes
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strncat(char *dest, *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = o;
	while (j < n && src[j] != '\0')
	{
		dest[i] src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
