/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:33:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 15:48:30 by tmanet           ###   ########.fr       */
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
			ft_putstr(sub->str_out);
		i = i + sub->size;
		sub = sub->next;
	}
	va_end(ap);
	return (i);
}
