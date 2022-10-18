#include "main.h"

/**
* format_specifier - This function specifies the format to be printed.
* It also calls the function that will print the argument according
* to the format.
*
* @ap: Pointer to argument list.
* @count: Index for the format string.
* @form: String that contains the format specifiers.
*
* Return: Integer.
*/

int format_specifier(va_list ap, int count, const char *form)
{
	int length = 0;

	if (!form[count])
		return (-1);
	else if (form[count] == 'c')
		length += char_type(ap); /* no. of characters printed */
	else if (form[count] == 's')
		length = string_type(ap);
	else if (form[count] == '%')
	{
		write(1, "%", 1);
		length++;
	}
	else
	{
		count -= 1;
		write(1, form + count, 1);
		length++;
	}
	return (length);
}
