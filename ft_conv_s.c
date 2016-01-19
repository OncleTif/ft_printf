/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:48:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 17:56:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_s(t_str_conv *sub, va_list ap)
{
	sub->str_out = va_arg(ap, char*);
	if (!sub->str_out)
		sub->str_out = ft_strdup("(null)");
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
