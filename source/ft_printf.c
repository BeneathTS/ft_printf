#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	index;
	int		symbols;
	
	index = -1;
	symbols = 0;
	va_start(args, format);
	while (format[++index])
	{
		if (format[index] == '%')
		{
			use_spec(format, &index, args);
		}
		else
		{
			write(1, format + index, 1); // Change that Shit!
			++symbols;
		}
	}
	return (symbols);
}