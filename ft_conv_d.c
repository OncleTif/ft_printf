/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:48:38 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 17:53:47 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_d(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_itoa(va_arg(ap, int));
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
