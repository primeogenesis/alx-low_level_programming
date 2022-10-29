#include <stdio.h>
#include "main.h"

/**
*	_strcat - concat two string;
*	using n as a delimter for string srcs
*
*	@dest: the string to be appended to
*	the string should have sufficent space after it
*	to add @src
*
*	@src: the string appended to @dest
*
*	Return: @dest
*/

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int end_idx = 0;

	if (dest == NULL || src == NULL)
		return (dest);

	while (dest[end_idx] != '\0')
	{
		end_idx++;
	}

	while (src[i] != '\0')
	{
		dest[end_idx + i] = src[i];
		i++;
	}
	dest[end_idx + i] = '\0'; /* terminates
*dest with null without this statement.
* reason unknown
*/
	return (dest);

}
