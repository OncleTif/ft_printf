/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 18:32:57 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 18:45:25 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upx(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_uitoa_base(va_arg(ap, unsigned int), 16, 'A');
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
