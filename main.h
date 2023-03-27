#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_int(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hex(va_list);

#endif
