#include "ft_printf.h"

int	ft_print_string(char *s)
{
	int	count;

	count = 0;
	while (*s)
		count += ft_print_char(*s++);
	return (count);
}
