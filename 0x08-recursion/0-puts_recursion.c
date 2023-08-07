#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
=======
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
>>>>>>> 58981a644fd754dc6a269d909a4518b2b5f48b63
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
