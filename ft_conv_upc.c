/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:43:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/22 14:21:36 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upc(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_strnew(1);
	sub->str_out[0] = va_arg(ap, wchar_t);
	sub->size = 1;
	return (sub->str_out);
}
