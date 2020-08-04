#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h> // delete

int ft_printf(const char *format, ...);

void use_spec(const char *format, size_t *index, va_list args);

void c_spec(va_list args);
void s_spec(va_list args);
void p_spec(va_list args);

void print_hex(unsigned long long dec_num);
#endif