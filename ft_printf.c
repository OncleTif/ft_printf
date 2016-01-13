/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:33:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 16:44:23 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	int			i;
	t_conv		*conv;
	t_str_conv	*sub;

	i = 0;
	conv = ft_conv_lister();
	sub = ft_strsplit_to_conv(str, conv);
	while (sub)
	{
		ft_putstr(sub->str_out);
		ft_putchar('\n');
		i = i + sub->size;
		sub = sub->next;
	}
	return (i);
}
