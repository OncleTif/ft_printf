/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:24:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 19:54:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_conv_picker(char *str, t_str_conv **elem, t_conv *conv, va_list ap)
{
	char		*end;
	t_str_conv	*sub;

	ft_putstr("chaine :");
	ft_putendl(str);
	end = NULL;
	sub = *elem;
	while (conv && !(end = ft_strstr(str, conv->ltr)))
		conv = conv->next;
	if (!conv)
		return (0);
	ft_putstr("pattern :");
	ft_putendl(conv->ltr);
	sub->opt = ft_strncpy(ft_strnew(end - str + ft_strlen(conv->ltr)),
			str, end - str + ft_strlen(conv->ltr));
	if (!sub->opt)
		return (0);
	sub->str_out = conv->f(sub, ap);
	return (end - str + ft_strlen(conv->ltr));
}
