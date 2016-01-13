/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:24:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/12 18:28:34 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_conv_picker(char *str, t_str_conv **elem, t_conv *conv)
{
	char	*end;
	t_str_conv	*sub;

	end = NULL;
	sub = *elem;
	while (conv && !end)
	{
		end = ft_strstr(str, conv->ltr);
		conv = conv->next;
	}
	if (!end)
		return (0);
	sub->str_in = ft_strnew(end - str);
	return (end - str);
}
