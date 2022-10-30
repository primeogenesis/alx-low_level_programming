#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/**
*       _strcat - concat two string;
*       using n as a delimter for string srcs
*
*       @dest: the string to be appended to
*       the string should have sufficent space after it
*       to add @src
*
*       @src: the string appended to @dest
*
*       Return: @dest
*/

char *_strcat(char *dest, char *src);


/**
*	_strncat - concat two string;
*	using n as a delimter for string srcs
*	@dest: the string to be appended to
*	the string should have sufficent space after it
*	to add @src
*
*	@n: the length of src to append to src
*
*	@src: the string appended to @dest
*
*	Return: @dest
*
*/

char *_strncat(char *dest, char *src, int n);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
*       _strncpy - copies string
*       using n as a delimiter for data
*       from string @src
*
*       @dest: the string to be copied over
*       the string should have sufficient space to
*       contain source @src
*
*       @src: the string copied to @dest
*
*       @n: number of char to copy.
*
*       Return: @dest would be copied to.
*
*/

char *_strncpy(char *dest, char *src, int n);

#endif /* MAIN_H_INCLUDED */
