#include <stdio.h>
#include "main.h"

/**
*	_strncat - concat two string;
*	using n as a delimter for string srcs
*
*	@dest: the string to be appended to
*	the string should have sufficent space after it
*	to add @src
*
*	@src: the string appended to @dest
*
*	@n: length of the string to apend form @src to @dest
*
*	Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int end_idx = 0;

	if (dest == NULL || src == NULL || n <= 0)
		return (dest);

	while (dest[end_idx] != '\0')
	{
		end_idx++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[end_idx + i] = src[i];
		i++;
	}
	dest[end_idx + i] = '\0'; /* terminate
*dest with null without this statement.
* reason unknown
*/
	return (dest);

}
