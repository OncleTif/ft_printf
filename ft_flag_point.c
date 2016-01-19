/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:32:53 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 16:44:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_flag_point(t_str_conv *sub, char * str)
{
	size_t	i;
	int		prec;

	i = 1;
	sub->point = 1;
	while (ft_isdigit(str[i]))
		i++;
	prec = ft_atoi(str);
	if (prec < 0)
	sub->prec = -prec;
	else
	sub->prec = prec;
	return (i);
}
