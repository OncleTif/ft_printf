/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_lister.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 12:13:22 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 14:03:21 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_conv	*ft_conv_lister(void)
{
	t_conv	*conv;

	conv = NULL;
	if ((conv = ft_newconv(conv, "%", &ft_conv_percent)))
		if ((conv = ft_newconv(conv, "s", &ft_conv_s)))
		if ((conv = ft_newconv(conv, "c", &ft_conv_c)))
			return (conv);
	return (NULL);
}
