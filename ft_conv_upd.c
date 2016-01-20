/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 17:40:58 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 17:42:08 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upd(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_ltoa_base(va_arg(ap, long), 10);
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
