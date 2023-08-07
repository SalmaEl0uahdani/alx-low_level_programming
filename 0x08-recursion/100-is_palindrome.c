#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - is a common C function that is used to
 * calculate the length of a given string.
 * @s: takes a string input
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 1);
}
=======
 * len - Calculates the length of a string recursively.
 * @s: The string to calculate the length.
 * @x: The current length.
 * Return: The length of the string.
 */
int len(char *s, int x)
{
	if (*s == '\0')
		return (x);

	x++;
	return (len(s + 1, x));
}

/**
 * is_second_palindrome - Checks if a string is a palindrome recursively.
 * @s: The string to check.
 * @x: The current index to compare.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_second_palindrome(char *s, int x)
{
	int j = len(s, 0);

	if (x >= (j - x))
		return (1);

	if (*(s + x) != *(s + j - x - 1))
		return (0);

	return (is_second_palindrome(s, x + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (is_second_palindrome(s, 0));
}

>>>>>>> 58981a644fd754dc6a269d909a4518b2b5f48b63
