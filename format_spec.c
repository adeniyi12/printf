#include "main.h"

/**
 * print_char - prints a character to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = _putchar(c);
		return (count);
	}

	return (0);
}

/**
 * print_str - prints a variadic string each per time to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 * upon failure -1
 */

int print_str(va_list args)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	while (str[i])
	{
		count = write(1, &str[i], 1);
		i = i + 1;
	}

	return (count);
}


/**
 * print_cent - prints character % to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);

	return (1);
}
