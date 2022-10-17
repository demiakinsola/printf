#include "main.h"

/**
* char_type - This function prints according to a character format.
* @ap: Pointer to argument list.
* Return: Integer.
*/

int char_type(va_list ap)
{
	char address = va_arg(ap, int);

	if (address)
	{
		write(1, &address, 1);
		return (0);
	}
	else
	return (-1);
}
