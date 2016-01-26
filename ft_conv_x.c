/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 18:32:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 12:51:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_x(t_str_conv *sub, va_list ap)
{
	if (ft_strequ("ll", sub->type) || (ft_strequ("j", sub->type)))
		sub->str_out = ft_ulltoa_base(va_arg(ap, unsigned long long), 16, 'a');
	else if (ft_strequ("l", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, unsigned long), 16, 'a');
	else if (ft_strequ("z", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, size_t), 16, 'a');
	else if (ft_strequ("hh", sub->type))
		sub->str_out = ft_uitoa_base((unsigned char)va_arg(ap, unsigned int), 16, 'a');
	else
		sub->str_out = ft_uitoa_base(va_arg(ap, unsigned int), 16, 'a');
	if (sub->str_out && sub->hash &&
			!(sub->str_out[0] == '0' && sub->str_out[1] == 0))
		sub->str_out = ft_strjoin("0x", sub->str_out);
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
