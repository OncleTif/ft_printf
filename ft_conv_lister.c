/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_lister.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 12:13:22 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/21 14:22:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_conv	*ft_conv_lister(void)
{
	t_conv	*conv;

	conv = NULL;
	if ((conv = ft_newconv(conv, "%", &ft_conv_percent)))
		if ((conv = ft_newconv(conv, "s", &ft_conv_s)))
			if ((conv = ft_newconv(conv, "c", &ft_conv_c)))
				if ((conv = ft_newconv(conv, "d", &ft_conv_d)))
				if ((conv = ft_newconv(conv, "D", &ft_conv_upd)))
					if ((conv = ft_newconv(conv, "i", &ft_conv_d)))
						if ((conv = ft_newconv(conv, "o", &ft_conv_o)))
							if ((conv = ft_newconv(conv, "O", &ft_conv_upo)))
								if ((conv = ft_newconv(conv, "x", &ft_conv_x)))
									if ((conv = ft_newconv(conv, "X",
													&ft_conv_upx)))
													if ((conv = ft_newconv(conv, "u", &ft_conv_u)))
													if ((conv = ft_newconv(conv, "U", &ft_conv_upu)))
													if ((conv = ft_newconv(conv, "p", &ft_conv_p)))
						return (conv);
	return (NULL);
}
