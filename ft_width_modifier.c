/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:20:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/27 16:06:31 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_width_modifier(t_str_conv *sub)
{
	char	sign;
	char	filler;
	char	*str;
	size_t	i;

	i = sub->width - sub->size;
	filler = ' ';
	sign = 0;
	if (sub->zero && !sub->minus && !sub->point)
		filler = '0';
	if (sub->str_out[0] == '+' || sub->str_out[0] == '-' ||
			sub->str_out[0] == ' ')
		sign = sub->str_out[0];
	if (sub->minus)
	{
		//sub->str_out = ft_strjoin(sub->str,
		//		ft_memset(ft_strnew(i), filler, i));
		str = sub->str_out;
		sub->str_out = ft_memset(ft_strnew(sub->width), filler, sub->width);
		sub->str_out = ft_memcpy(sub->str_out, str, sub->size);
	}
	else
	{
		sub->str_out = ft_strjoin(ft_memset(ft_strnew(i), filler, i),
				sub->str_out);
		if (sign && filler == '0')
		{
			sub->str_out[0] = sign;
			sub->str_out[i] = filler;
		}
	}
	sub->size = sub->size + i;
}
