#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = '_';
	char b = 'p';
	char c = 'u';
	char d  = 't';
	char e = 'c';
	char f = 'h';
	char g = 'a';
	char h = 'r';

	_putchar(a);
	_putchar(b);
	_putchar(c);
	_putchar(d);
	_putchar(e);
	_putchar(f);
	_putchar(g);
	_putchar(h);
	return (0);
}
