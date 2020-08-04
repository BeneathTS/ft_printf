#include "ft_printf.h"

static int string_size(const char *string)
{
	int ct;
	
	ct = -1;
	while (string[++ct])
		;
	return (ct);
}

void s_spec(va_list args)
{	
	char *string;

	string = va_arg(args, char*);
	write(1, string, string_size(string));
}