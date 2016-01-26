/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 16:24:56 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 16:43:46 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_conv_picker(char *str, t_str_conv **elem, t_param *param, va_list ap)
{
	t_str_conv	*sub;
	t_conv		*conv;
	size_t		i;

	sub = *elem;
	conv = param->conv;
	i = ft_flag_picker(str, sub, param);
	while (conv && !(ft_strnequ(str + i, conv->ltr, conv->size)))
		conv = conv->next;
	if (!conv)
	{
		if (str[i])
		{
			//		ft_putendl("mal format");
			//		ft_putendl(str);
			sub->str_out = ft_strncpy(ft_strnew(1), str + i, 1);
			sub->size = 1;
			ft_string_modifier(sub);
		}
		else
		{
				//	ft_putendl("mal format %");
			sub->str_out = ft_strdup("%");
			sub->size = 1;
			//ft_putendl(sub->str_out);
		}
		return (i - !(str[i] + (str[i])));
	}
	sub->opt = ft_strncpy(ft_strnew(conv->size),
			str + i, conv->size);
	if (!sub->opt)
		return (i);
	sub->str_out = conv->f(sub, ap);
	ft_string_modifier(sub);
	return (i + conv->size);
}
