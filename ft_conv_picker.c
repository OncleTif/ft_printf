/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:24:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 17:59:56 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_conv_picker(char *str, t_str_conv **elem, t_conv *conv)
{
	char		*end;
	t_str_conv	*sub;

	end = NULL;
	sub = *elem;
	while (conv && !end)
	{
		if (!(end = ft_strstr(str, conv->ltr)))
			conv = conv->next;
	}
	if (!conv)
		return (0);
	sub->opt = ft_strncpy(ft_strnew(end - str + ft_strlen(conv->ltr)),
			str, end - str + ft_strlen(conv->ltr));
	if (!sub->opt)
		return (0);
	return (end - str + ft_strlen(conv->ltr));
}
