/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:59:58 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 19:21:05 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int i)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = ft_itoa(i);
	if (!ptr)
		return (0);
	count += ft_print_string(ptr);
	free(ptr);
	return (count);
}
