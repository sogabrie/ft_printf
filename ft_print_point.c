/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:35:23 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 22:52:49 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_point(unsigned long long lu)
{
	int		count;
	char	*ptr;

	ptr	= newhex(lu);
	if (!ptr)
		return (0);
	count = 0;
	count += ft_print_string("0x");
	count += ft_print_string(ptr);
	free(ptr);
	return (count);
}
