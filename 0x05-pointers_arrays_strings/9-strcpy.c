#include "main.h"

/**
 * char *_strcpy - a finction that copies the string point by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int 1 = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
