#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to the function
 *
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int val;
	va_list ls;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(ls, int);
		printf("%d", val);
		if (separator != NULL)
		{
			if (i != (n - 1))
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls);
	return;

}
