/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_lister.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 12:13:22 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/11 12:54:42 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_conv_lister()
{
	t_list	*elem;
	t_conv	*conv;

	conv = (t_conv*)ft_memalloc(sizeof(t_conv));
	if (!conv)
		return (NULL);
	conv->ltr = 's';
	conv->f = &ft_putcountstr;
	elem = ft_lstnew(conv, sizeof(t_conv));
	return (elem);
}
