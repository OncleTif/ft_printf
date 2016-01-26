/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:48:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 16:55:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_d(t_str_conv *sub, va_list ap)
{
	int	i;


	if (ft_strequ("ll", sub->type) || (ft_strequ("j", sub->type)))
		sub->str_out = ft_lltoa_base(va_arg(ap, long long), 10);
	else if (ft_strequ("l", sub->type))
		sub->str_out = ft_ltoa_base(va_arg(ap, long), 10);
	else if (ft_strequ("z", sub->type))
		sub->str_out = ft_ltoa_base(va_arg(ap, size_t), 10);
	else if (ft_strequ("hh", sub->type))
		sub->str_out = ft_itoa((char)va_arg(ap, int));
	else
		sub->str_out = ft_itoa(va_arg(ap, int));
	sub->size = ft_strlen(sub->str_out);
	ft_prec_modifier(sub);
	return (sub->str_out);
}
