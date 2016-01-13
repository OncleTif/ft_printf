/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:33:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 18:06:24 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	int			i;
	t_conv		*conv;
	t_str_conv	*sub;
	va_list		ap;

	i = 0;
	va_start(ap, str);
	conv = ft_conv_lister();
	sub = ft_strsplit_to_conv(str, conv, ap);
	while (sub)
	{
		if (sub->str_out)
			ft_putstr(sub->str_out);
		ft_putchar('\n');
		i = i + sub->size;
		sub = sub->next;
	}
	va_end(ap);
	return (i);
}
