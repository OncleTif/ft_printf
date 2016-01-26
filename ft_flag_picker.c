/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 11:37:46 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 13:25:15 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_flag_picker(char *str, t_str_conv *sub, t_param *param)
{
	size_t	i;
	t_flag	*flag;

	i = 0;
	if (sub)
	{
		while (str[i])
		{
			flag = param->flag;
			while (flag && !ft_strnequ(str + i, flag->ptn, flag->size))
			{
				flag = flag->next;
			}
			if (ft_isdigit(str[i]) && str[i] != '0')
				i = i + ft_precision_picker(sub, str + i);
			else
			{
				if (!flag)
					return (i);
				i = i + flag->f(sub, str + i);
			}
		}
	}
	return (0);
}
