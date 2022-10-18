#include "main.h"
#include <stdarg.h>

/**
* _printf - This function produces output according to a format.
* @format: String that specifies the conversion type.
* Return: Total number of characters printed.
*/

int _printf(const char *format, ...)
{
	function_t identities[] = {{'c', char_type}, {'s', string_type},
		{'i', int_type}, {'d', int_type}};
	unsigned int count = 0, count2 = 0, idCount = 0, total_length = 0, ret_value;
	char j = '\0';
	va_list ap; /* ponter to argument list */

	/* if it's pointing to a null address */
	if (!format || format == NULL || (format[count] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format); /* initialize argument list */
	while (format[count])
	{
	for (; format[count] != '%' && format[count] != '\0'; count++)
	{ /* to loop through string */
		j = format[count];
		total_length += _putchar(j);
	}
	count2 = count + 1;
		if (format[count2] == '%' && format[count])
			_putchar('%'), total_length++, count += 2;
			/*ret_value = format_specifier(ap, count, format);*/
		else  if (format[count2] == '\0')
			count++;
		else
		{
			for (idCount = 0; identities[idCount].id && format[count]; idCount++)
			{
				if (identities[idCount].id == format[count2])
				{
					total_length += identities[idCount].f(ap);
					count += 2;
					break;
				}
			}
		}
		if (identities[idCount].id == '\0' && format[count])
			_putchar(format[count++]), total_length++;
	}
	va_end(ap);
	return (total_length);
}
