/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_lister.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 12:13:22 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 17:48:45 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_conv	*ft_conv_lister(void)
{
	t_conv	*conv;

	conv = (t_conv*)ft_memalloc(sizeof(t_conv));
	if (!conv)
		return (NULL);
	conv->ltr = "s";
	conv->f = &ft_conv_s;
	return (conv);
}
