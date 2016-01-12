/*; ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_to_conv.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 12:12:35 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/12 13:24:09 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_str_conv	*ft_strsplit_to_conv(char *str)
{
	t_str_conv	*elem;
	size_t	i;

	elem = NULL;
	i = 0;
	if (str[i])
	{
		elem = ft_memalloc(sizeof(t_str_conv));
		if (!elem)
			return (elem);
		while (str[i] && ((str[0] != '%' && str[i] != '%') || (str[0] == '%'
						&& !ft_isalpha(str[i]))))
			i++;
		i = i + (str[0] == '%');
		elem->str_in = ft_strnew(i);
		if (!elem->str_in)
			return (NULL);
		elem->str_in = ft_strncpy(elem->str_in, str, i);
		elem->size = i;
		elem->next = ft_strsplit_to_conv(str + i);
	}
	return (elem);
}
