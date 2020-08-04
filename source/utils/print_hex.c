#include "ft_printf.h"

void print_hex(unsigned long long num)
{
	unsigned long long hex_mask;
	char mask_position;
	unsigned char print_symb;

	mask_position = 60;
	hex_mask = 0xfULL << mask_position;
	while (!(num & hex_mask))
	{
		hex_mask >>= 4;
		mask_position -= 4;
	}
	while (hex_mask)
	{
		print_symb = (num & hex_mask) >> mask_position;
		print_symb += (print_symb < 0xA ? '0' : 'a' - 0xA);
		write(1, &print_symb, 1);
		hex_mask >>= 4;
		mask_position -= 4;
	}
}