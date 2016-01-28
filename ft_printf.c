/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:33:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/28 12:30:13 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	int			i;
	t_param		*param;
	t_str_conv	*sub;
	va_list		ap;

	i = 0;
	va_start(ap, str);
	param = ft_param_builder();
	sub = ft_strsplit_to_conv(str, param, ap);
	while (sub)
	{
		if (sub->error)
			return (-1);
		if (sub->str_out)
			ft_putnchar(sub->str_out, sub->size);
		i = i + sub->size;
		sub = sub->next;
	}
	ft_str_conv_cleaner(&sub);
	va_end(ap);
	return (i);
}
