/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:31:39 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/24 22:59:44 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*hexres(char *mas)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(mas);
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ptr[i--] = 0;
	while (i >= j)
	{
		ptr[j] = mas[i];
		ptr[i--] = mas[j++];
	}
	return (ptr);
}

char	*newhex(unsigned long long hx)
{
	char	*ptr;
	char	mas[17];
	size_t	i;

	i = 0;
	while (hx)
	{
		mas[i++] = "0123456789abcdef"[hx % 16];
		printf("hx tok = %llu\n hx = %llu \n",hx % 16, hx);
		hx = hx / 16;
	}
	mas[i] = 0;
	printf("========= |%s|\n",mas);
	ptr = hexres(mas);
	return (ptr);
}
