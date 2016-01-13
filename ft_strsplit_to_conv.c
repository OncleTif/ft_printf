/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_to_conv.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 17:47:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 17:48:01 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str_conv	*ft_strsplit_to_conv(char *str, t_conv *conv)
{
	t_str_conv	*elem;
	size_t		i;

	elem = NULL;
	i = 0;
	if (str[i])
	{
		elem = (t_str_conv*)ft_memalloc(sizeof(t_str_conv));
		if (!elem)
			return (elem);
		if (str[0] == '%')
			i = ft_conv_picker(str + i, &elem, conv);
		else
			i = ft_str_picker(str + i, &elem);
		if (!i)
			return (NULL);
		elem->next = ft_strsplit_to_conv(str + i, conv);
	}
	return (elem);
}
