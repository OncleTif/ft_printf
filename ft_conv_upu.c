/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:17:06 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 18:17:21 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upu(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_ultoa_base(va_arg(ap, long), 10, 'A');
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
