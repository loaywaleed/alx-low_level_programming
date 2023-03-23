#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: specifies format to be printed(c, i, f, s)
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		char *f_specifier;

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				f_specifier = va_arg(args, char *);
				if (f_specifier == NULL)
					f_specifier = "(nil)";
				printf("%s", f_specifier);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
			format[i] == 'f') && (format[i + 1] != '\0'))
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);

}
