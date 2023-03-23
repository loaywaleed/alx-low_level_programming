#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: specifies format to be printed(c, i, f, s)
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	
	va_start(args, format);
	i = 0;
	if (format == NULL)
	{
		printf("\n");
	}
	while (format[i])
	{
		char *f_specifier;

		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(args, char)); break;
			case 'i':
				printf("%i", va_arg(args, int)); break;
			case 'f':
				printf("%f", va_arg(args, float)); break;
			case 's':
				f_specifier = va_args(args, char *);
				if (f_specifier)
				{
					printf("%s", va_arg(args, char *)); break;
				}
				else
				{
					printf("(nil)");
				}
		}
        if ((format[i] == 'c' || format[i] == 'i' || format[i] == 's' ||
                    format[i] == 'f') && (format[i + 1] != '\0'))
            printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);

}
