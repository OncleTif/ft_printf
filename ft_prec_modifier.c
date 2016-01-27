/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec_modifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 16:56:02 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/27 18:16:49 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prec_modifier(t_str_conv *sub)
{
	char	sign;
	char	filler;
	int		i;

	sign = 0;
	filler = '0';
	if (!sub->prec && ft_strequ(sub->str_out, "0"))
	{
		sub->str_out[0] = 0;
		sub->size = 0;
	}
	else
	{
		if (sub->str_out[0] == '+' || sub->str_out[0] == '-')
			sign = sub->str_out[0];
		i = sub->prec - (sub->size - (sign && 1));
		if (i > 0)
		{
			sub->str_out = ft_strjoin(ft_memset(ft_strnew(i), filler, i),
					sub->str_out);
			if (sign && filler == '0')
			{
				sub->str_out[0] = sign;
				sub->str_out[i] = filler;
			}
			sub->size = sub->size + i;
		}
	}
}
