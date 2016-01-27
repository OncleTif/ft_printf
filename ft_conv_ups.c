/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_ups.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 13:55:16 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/27 18:11:15 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_ups(t_str_conv *sub)
{
	sub->str_out = va_arg(sub->ap, char*);
	if (!sub->str_out)
		sub->str_out = ft_strdup("(null)");
	sub->size = ft_strlen(sub->str_out);
	sub->plus = 0;
	sub->space = 0;
	if (sub->point && sub->size > sub->prec)
		sub->size = sub->prec;
	return (sub->str_out);
}
