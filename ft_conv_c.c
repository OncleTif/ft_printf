/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:47:23 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 15:47:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_c(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_strnew(1);
	sub->str_out[0] = va_arg(ap, int);
	sub->size = 1;
	return (sub->str_out);
}
