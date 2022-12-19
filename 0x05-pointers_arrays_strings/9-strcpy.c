#include "main.h"
/**
 * *_strcpy-copy the string pointed by src
 * @dest:destination
 * @src:source
 * Return:source
*/
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
