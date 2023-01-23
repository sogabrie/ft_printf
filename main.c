#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

void fo(const char *format,...)
{
	va_list	args;

	va_start(args, format);

	char *s = va_arg(args,char *);
	for (int i = 0; i < 10; ++i)
	{
		int a = va_arg(args, int);
		printf("a = %d \n", a);
	}
	printf("s = %s \n", s);
	va_end(args);
}

int main()
{

	ft_printf("main");
	return (0);
}
