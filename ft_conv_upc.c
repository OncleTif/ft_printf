/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 12:43:12 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/27 18:10:31 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upc(t_str_conv *sub)
{
	sub->str_out = ft_strnew(1);
	sub->str_out[0] = va_arg(sub->ap, wchar_t);
	sub->size = 1;
	sub->plus = 0;
	sub->space = 0;
	return (sub->str_out);
}
