/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:24:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 14:02:41 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_conv_picker(char *str, t_str_conv **elem, t_param *param, va_list ap)
{
	char		*end;
	t_str_conv	*sub;
	t_conv		*conv;

//	ft_putstr("chaine :");
//	ft_putendl(str);
	end = NULL;
	sub = *elem;
	conv = param->conv;
	while (conv && !(end = ft_strnstr(str, conv->ltr, conv->size)))
		conv = conv->next;
	if (!conv)
		return (0);
//	ft_putstr("pattern :");
//	ft_putendl(conv->ltr);
	sub->opt = ft_strncpy(ft_strnew(end - str + ft_strlen(conv->ltr)),
			str, end - str + ft_strlen(conv->ltr));
	if (!sub->opt)
		return (0);
	sub->str_out = conv->f(sub, ap);
	return (end - str + ft_strlen(conv->ltr));
}
