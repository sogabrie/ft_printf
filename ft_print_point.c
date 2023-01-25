/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:35:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/25 18:59:46 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_point(unsigned long long *lu)
{
	int					count;
	char				*ptr;
	unsigned long long	a;

	a = (unsigned long long) lu;
	if (!a)
		return (ft_print_string("0x0"));
	ptr = newhex(a);
	if (!ptr)
		return (0);
	count = 0;
	count += ft_print_string("0x");
	count += ft_print_string(ptr);
	free(ptr);
	return (count);
}
