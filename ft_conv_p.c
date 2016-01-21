/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 14:20:35 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/21 18:25:30 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_conv_p(t_str_conv *sub, va_list ap)
{
	sub->str_out = ft_strjoin("0x",
			ft_ultoa_base(va_arg(ap, unsigned long), 16, 'a'));
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
