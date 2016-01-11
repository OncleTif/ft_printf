/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:33:28 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/11 12:58:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	int		i;
	int		param_size;
	t_list	*conv;

	i = 0;
	conv = ft_conv_lister();
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			param_size = ft_param_size(str + i, conv);
			i = i + param_size;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (i);
}
