/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:52:42 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/25 19:02:04 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(char c, va_list args)
{
	if (c == '%')
		return (ft_print_char('%'));
	else if (c == 'c')
		return (ft_print_char((char)va_arg(args, void *)));
	else if (c == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_point(va_arg(args, unsigned long long *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unint(va_arg(args, unsigned int)));
	else if (c == 'x')
		return ((unsigned long long)ft_print_hexs(va_arg(args, unsigned int)));
	else if (c == 'X')
		return ((unsigned long long)ft_print_mhexs(va_arg(args, unsigned int)));
	return (-1);
}

int	check(va_list args, char *str)
{
	int	i;
	int	che;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			che = check_type(str[++i], args);
			if (che == -1)
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

int	ft_printf(const char *format, ...)
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
