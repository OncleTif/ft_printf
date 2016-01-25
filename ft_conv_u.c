/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 18:53:52 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/25 13:39:30 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_u(t_str_conv *sub, va_list ap)
{
	if (ft_strequ("ll", sub->type))
		sub->str_out = ft_ulltoa_base(va_arg(ap, unsigned long long), 10, 'a');
	else if (ft_strequ("l", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, unsigned long), 10, 'a');
	else if (ft_strequ("z", sub->type))
		sub->str_out = ft_ultoa_base(va_arg(ap, size_t), 10, 'a');
	else
		sub->str_out = ft_uitoa_base(va_arg(ap, unsigned int), 10, 'a');
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
