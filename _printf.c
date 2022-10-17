#include "main.h"

/**
* _printf - This function produces output according to a format.
* @format: String that specifies the conversion type.
* Return: Void.
*/

int _printf(const char *format, ...)
{
	int count, ret_value, total_length;
	va_list ap; /* ponter to argument list */

	if (!format) /* if it's pointing to a null address */
	{
		return (-1);
	}
	va_start(ap, format); /* initialize argument list */
	for (count = 0; format && format[count]; count++)
	{ /* to loop through string */
		if (format[count] == '%')
		{
			count++;
			ret_value = format_specifier(ap, format);
			if (ret_value == -1)
				return (-1);
			total_length += ret_value;
		} /* r_value is returned by the specifier function */
		else
		{ /* t_length is no. of characters printed */
			write(1, format + count, 1);
			total_length++;
		}
	}
	va_end(ap);
	return (total_length);
}
