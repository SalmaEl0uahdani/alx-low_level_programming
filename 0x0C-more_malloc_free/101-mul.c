#include "main.h"
#include <ctype.h>

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
 * print_number - prints an integer char by char
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n == 0)
        _putchar('0');

    if (n / 10)
        print_number(n / 10);

    _putchar(n % 10 + '0');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
    int num1, num2;

    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            exit(98);
        }
    }

    for (int i = 0; argv[2][i] != '\0'; i++)
    {
        if (!isdigit(argv[2][i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            exit(98);
        }
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    print_number(num1 * num2);
    _putchar('\n');

    return (0);
}

