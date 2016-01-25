/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 18:03:00 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/25 12:57:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_o(t_str_conv *sub, va_list ap)
{
	if (ft_strequ("ll", sub->type))
		sub->str_out = ft_ulltoa_base(va_arg(ap, unsigned long long), 8, 'a');
	else if (ft_strequ("l", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, unsigned long), 8, 'a');
	else
		sub->str_out = ft_uitoa_base(va_arg(ap, unsigned int), 8, 'a');
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
