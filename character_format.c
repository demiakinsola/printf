#include "main.h"

/**
* char_type - This function prints according to a character format.
* @ap: Pointer to argument list.
* Return: No. of bytes printed.
*/

int char_type(va_list ap)
{
	char address = va_arg(ap, int);
		write(1, &address, 1);
		return (1);
}
