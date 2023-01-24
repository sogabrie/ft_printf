/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:52:24 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 19:21:55 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	unitnum(char *mas, unsigned int n, int i)
{
	mas[i] = 0;
	--i;
	if (n == 0)
	{
		mas[0] = 48;
		mas[1] = 0;
		return ;
	}
	while (n > 0 && i >= 0)
	{
		mas[i] = (n % 10) + 48;
		n = n / 10;
		--i;
	}
}

void	unit(char *mas, unsigned int n)
{
	int				i;
	int unsigned	num;

	i = 0;
	num = n;
	while (num)
	{
		num = num / 10;
		++i;
	}
	unitnum(mas, n, i);
}

char	*ft_unitoa(unsigned int n)
{
	char	*num;
	char	mas[15];

	unit(mas, n);
	num = ft_strdup(mas);
	if (!num)
		return (0);
	return (num);
}
