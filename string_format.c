#include "main.h"

/**
* string_type - This function prints according to the forma.
* @ap: Pointer to argument list.
* Return: No. of bytes printed.
*/

int string_type(va_list ap)
{
	int index; /* to loop through string */
	char *string;
	int length = 0; /* no. of characters printed */

	string = va_arg(ap, char *);
	if (!string)
	{
		string = "(null)";
	}
	for (index = 0; string[index]; index++)
	{
		write(1, string + index, 1);
		length++;
	}
	return (length);
}
