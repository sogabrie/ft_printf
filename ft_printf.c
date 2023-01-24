/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:52:42 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 23:01:35 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == '%')
		count += ft_print_char('%');
	else if (c == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (c == 's')
		count += ft_print_string(va_arg(args, char*));
	else if (c == 'p')
		count += ft_print_point((unsigned long long)va_arg(args, unsigned int));
	else if (c == 'd' || c == 'i')
		count += ft_print_int(va_arg(args, int));
	else if (c == 'u')
		count += ft_print_unint(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_print_hexs(va_arg(args, unsigned long long));
	return (count);
}

int	check(va_list args, char *str)
{
	int	i;
	int che;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			che = check_type(str[++i], args);
			if (!che)
				count += ft_print_char('%');
			else
			{
				count += che;
				++i;
			}
		}
		else
			count += ft_print_char(str[i++]);
	}
	return (count);
}


int	ft_printf(const char *format,...)
{
	va_list	args;
	char	*str;
	int		count;

	if (!format)
		return (0);
	count = 0;
	str = (char *)format;
	va_start(args, format);
	count = check(args, str);
	return (count);
}
