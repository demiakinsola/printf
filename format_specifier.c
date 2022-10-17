#include "main.h"

/**
* format_specifier - This function specifies the format to be printed.
* It also calls the function that will print the argument according
* to the format.
*
* @ap: Pointer to argument list.
* @form: String that contains the format specifiers.
*
* Return: Integer.
*/

int format_specifier(va_list ap, const char *form)
{
	int count, length;

	for (count = 0; form && form[count]; count++)
	{ /* count - loops through the forma string */
		if (form[count] == '%')
		{
			count++;
			if (form[count] = 'c')
			{
				char_type(ap);
				length++; /* no. of characters printed */
			}
			if (format[count] == 's')
				length = string_type(ap);
			if (format + count == '%')
			{
				write(1, "%", 1);
				length++;
			}		
		}
	}
	return (length);
}
