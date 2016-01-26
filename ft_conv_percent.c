/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:38:31 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 12:58:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_percent(t_str_conv *sub, va_list ap)
{
	if (ap)
	{
		;
	}
	sub->str_out = ft_strdup("%");
	sub->size = ft_strlen(sub->str_out);
	sub->space = 0;
	sub->plus = 0;
	return (sub->str_out);
}
