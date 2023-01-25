/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sogabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:31:10 by sogabrie          #+#    #+#             */
/*   Updated: 2023/01/25 19:03:50 by sogabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_print_char(char c);
int		ft_print_string(char *s);
int		ft_print_point(unsigned long long *lu);
int		ft_print_int(int i);
int		ft_print_unint(unsigned int i);
int		ft_print_hexs(unsigned long long hx);
int		ft_print_mhexs(unsigned long long hx);
char	*ft_unitoa(unsigned int n);
char	*newhex(unsigned long long hx);

#endif
