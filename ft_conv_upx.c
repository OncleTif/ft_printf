/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:00:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 12:31:18 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upx(t_str_conv *sub, va_list ap)
{
	if (ft_strequ("ll", sub->type) || (ft_strequ("j", sub->type)))
		sub->str_out = ft_ulltoa_base(va_arg(ap, unsigned long long), 16, 'A');
	else if (ft_strequ("l", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, unsigned long), 16, 'A');
	else if (ft_strequ("z", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, size_t), 16, 'A');
	else if (ft_strequ("hh", sub->type))
		sub->str_out = ft_uitoa_base((unsigned char)va_arg(ap, unsigned int), 16, 'A');
	else
		sub->str_out = ft_uitoa_base(va_arg(ap, unsigned int), 16, 'A');
	if (sub->str_out && sub->hash)
		sub->str_out = ft_strjoin("0X", sub->str_out);
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
