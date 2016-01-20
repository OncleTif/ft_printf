/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_upo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 18:14:03 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 18:14:38 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_upo(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_ultoa_base(va_arg(ap, long), 8, 'A');
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
