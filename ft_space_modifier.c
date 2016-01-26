/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_modifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 11:35:02 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/26 11:35:19 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_space_modifier(t_str_conv *sub)
{
	char	*str;

	str = sub->str_out;
	if (!ft_strchr(str, '-'))
	{
		sub->str_out = ft_strjoin(" ", str);
		//if (str)
		//	ft_strdel(&str);
		sub->size++;
	}
}
