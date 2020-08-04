#include "ft_printf.h"

void c_spec(va_list args)
{
	char symb;

	symb = (char)va_arg(args, int);

	write(1, &symb, 1);
}