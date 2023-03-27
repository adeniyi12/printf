#include "main.h"

/**
 * print_int -prints signed int
 * @args: arguments to be printed
 * Return: number of chars printed
 */

int print_int(va_list args)
{
	int count = 0;
	char buffer[BUFF_SIZE];
	int i = BUFF_SIZE - 2;

/* initialize num to the value returned by va_args */
	int num = va_arg(args, int);

	if (num == 0)
		return (write(1, "0", 1));

/* append a null char at the end of buffer */

	/**
	 * if (num < 0)
	{
		write(1, '-', 1);
		if (num =
		*/
	buffer[BUFF_SIZE - 1] = '\0';
	if (num != 0)

/* go through the items in num */
	while (num)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
		count++;
	}
	i++;
/* print items from buffer return count */
		return (write(1, &buffer[i], count));

	return (0);
}

/**
 * print_unsigned - print unsigned int
 * @args: arguments to print
 * Return: number of char printed
 */

int print_unsigned(va_list args)
{
	int count = 0;
	char buffer[BUFF_SIZE];
	int  i = BUFF_SIZE - 2;
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
		return (write(1, "0", 1));

	buffer[BUFF_SIZE - 1] = '\0';
	while (num)
{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
		count++;
	}
	i++;
	return (write(1, &buffer[i], count));
}

/**
 * print_octal - print_octal
 * @args: args
 * Return: size
 */

int print_octal(va_list args)
{
	int i = BUFF_SIZE - 2;
	char buffer[BUFF_SIZE];
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);

	buffer[BUFF_SIZE - 1] = '\0';
	if (num == 0)
		return (write(1, "0", 1));


	while (num != 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
		count++;
	}
	i++;

	return (write(1, &buffer[i], count));

}

/**
 * print_hex - print_hex
 * @args: args
 * Return: size
 */

int print_hex(va_list args)
{
	/*int j, a, n = 0;*/
	int n, i = BUFF_SIZE - 2;
	char buffer[BUFF_SIZE];
	int count = 0;
	/*int hex_num[] = {10, 11, 12, 13, 14, 15};*/
	char *hex_char = "abcdef";
	unsigned int num = va_arg(args, unsigned int);

	buffer[BUFF_SIZE - 1] = '\0';
	if (num == 0)
		return (write(1, "0", 1));
	while (num != 0)
	{
		n = (num % 16) + '0';
		if (n > 9)
		{
			n = n - 10;
			n = hex_char[n];
		}
		buffer[i--] = n;
		num /= 16;
		count++;
	}
	i++;
	/*
	 * for (; buffer[i] != '\0'; i++)
	{

			if (buffer[i] == hex_num[j])
			{
				buffer[i] = hex_char[j];
			}
	}
	*/
	return (write(1, &buffer[i], count));
}
