#include "main.h"

/**
* string_type - This function prints according to the forma.
* @ap: Pointer to argument list.
* Return: No. of bytes printed.
*/

int string_type(va_list ap)
{
	char *string;
	unsigned int length = 0; /* no. of characters printed */

	string = va_arg(ap, char *);
	if (!string)
	{
		string = "(null)";
	}
	while (*string)
	{
		_putchar(*string);
		string++;
		length++;
	}
	return (length);
}
