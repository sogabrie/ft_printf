/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:34:33 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 22:49:26 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexs(unsigned long long hx)
{
	int		count;
	char	*ptr;

	if (!hx)
		return(ft_print_char('0'));
	count = 0;
	ptr = newhex((unsigned long long)hx);
	if (!ptr)
		return (0);
	count += ft_print_string(ptr);
	if (count)
		free(ptr);
	return (count);
}
