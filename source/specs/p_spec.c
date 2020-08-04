#include "ft_printf.h"

void p_spec(va_list args)
{
	unsigned long long pointer;

	pointer = va_arg(args, unsigned long long);

	write(1, "0x", 2);
	print_hex(pointer);
}
