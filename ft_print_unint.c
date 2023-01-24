/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:49:11 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 19:21:15 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unint(unsigned int i)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = ft_unitoa(i);
	if (!ptr)
		return (0);
	count += ft_print_string(ptr);
	free(ptr);
	return (count);
}
