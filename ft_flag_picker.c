/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_picker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 11:37:46 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 13:07:49 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_flag_picker(char *str, t_str_conv *sub, t_param *param)
{
	size_t	i;

	i = 0;
	while (str[i] && param && sub)
	{
i++;
	}
	return (i);
}
