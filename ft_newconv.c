/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newconv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:45:43 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 15:45:48 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_conv	*ft_newconv(t_conv *nxt, char *ptn, char *(*f)(t_str_conv*, va_list))
{
	t_conv	*conv;

	conv = (t_conv*)ft_memalloc(sizeof(t_conv));
	if (!conv)
		return (NULL);
	conv->ltr = ptn;
	conv->size = ft_strlen(ptn);
	conv->f = f;
	conv->next = nxt;
	return (conv);
}
