/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 13:00:15 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/25 13:00:39 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upx(t_str_conv *sub, va_list ap)
{
	if (ft_strequ("ll", sub->type))
		sub->str_out = ft_ulltoa_base(va_arg(ap, unsigned long long), 16, 'A');
	else if (ft_strequ("l", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, unsigned long), 16, 'A');
	else
		sub->str_out = ft_uitoa_base(va_arg(ap, unsigned int), 16, 'A');
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
