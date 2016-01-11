/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:34:50 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/11 14:13:33 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_param_size(char *str, t_list *list)
{
	int		i;
	int		found;
	t_conv	*conv;

	i = 0;
	found = 0;
	while (str[i] && !ft_isalpha(str[i]))
		i++;
	while (list)
	{
		conv = (t_conv*)list->content;
		if (str[i] == conv->ltr)
			found = 1;
		list = list->next;
	}
	return (i * found);
}
