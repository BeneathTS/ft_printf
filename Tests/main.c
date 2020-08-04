#include "ft_printf.h"
#include <stdio.h>

#pragma clang diagnostic ignored "-Wall"

int main()
{
	int qwe;
	//ft_printf("my: 123\n%s1234\n\n", "qwe\n");
	//printf("origin: 123\n%s1234\n", "qwe\n");
	printf("%p\n\n", &qwe);
	ft_printf("%p\n\n", &qwe);
	return (0);
}