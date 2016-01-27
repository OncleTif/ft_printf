/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 14:20:39 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/27 18:38:15 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_width_modifier(t_str_conv *sub)
{
	char	sign;
	char	filler;
	size_t	i;

	i = sub->width - sub->size;
	filler = ' ';
	sign = 0;
	if (sub->zero && !sub->minus && (!sub->point || !sub->prec))
		filler = '0';
	if (sub->str_out[0] == '+' || sub->str_out[0] == '-' ||
			sub->str_out[0] == ' ')
		sign = sub->str_out[0];
	if (sub->minus)
		sub->str_out = ft_memcpy(ft_memset(ft_strnew(sub->width),
					filler, sub->width), sub->str_out, sub->size);
	else
	{
		sub->str_out = ft_strjoin(ft_memset(ft_strnew(i), filler, i),
				sub->str_out);
		if (sign && filler == '0' && (sub->str_out[0] = sign))
			sub->str_out[i] = filler;
	}
	sub->size = sub->size + i;
}
