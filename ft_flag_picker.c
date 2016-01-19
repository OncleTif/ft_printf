/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 11:37:46 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 15:41:58 by tmanet           ###   ########.fr       */
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
			if (!flag)
				return (i);
			i = flag->f(sub);
		}
	}
	return (0);
}
