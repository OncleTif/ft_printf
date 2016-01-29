/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:48:21 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/29 11:55:44 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_s(t_str_conv *sub)
{
	if (ft_strequ("l", sub->type))
		sub->str_out = ft_conv_ups(sub);
	else
	{
		sub->str_out = va_arg(sub->ap, char*);
		if (!sub->str_out)
			sub->str_out = ft_strdup("(null)");
		sub->size = ft_strlen(sub->str_out);
		sub->plus = 0;
		sub->space = 0;
		if (sub->point && sub->size > sub->prec)
			sub->size = sub->prec;
	}
	return (sub->str_out);
}
