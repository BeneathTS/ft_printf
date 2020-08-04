#include "ft_printf.h"

void use_spec(const char *format, size_t *index, va_list args)
{
	++(*index);
	if (*(format + *index) == 'c')
		c_spec(args);
	else if (*(format + *index) == 's')
		s_spec(args);
	else if (*(format + *index) == 'p')
		p_spec(args);
}