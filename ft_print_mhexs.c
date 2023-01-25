/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mhexs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:47:10 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/25 18:58:24 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_mhexs(unsigned long long hx)
{
	int		count;
	char	*ptr;
	int		i;

	if (!hx)
		return (ft_print_char('0'));
	count = 0;
	ptr = newhex((unsigned long long)hx);
	if (!ptr)
		return (0);
	i = -1;
	while (ptr[++i])
		ptr[i] = ft_toupper(ptr[i]);
	count += ft_print_string(ptr);
	if (count)
		free(ptr);
	return (count);
}
