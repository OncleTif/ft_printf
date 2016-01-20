/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_lister.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 15:40:51 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/20 15:43:31 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag	*ft_flag_lister(void)
{
	t_flag	*flag;
	int		grp;

	grp = 0;
	flag = NULL;
	if ((flag = ft_newflag(flag, "l", NULL)))
		if ((flag = ft_newflag(flag, "ll", NULL)))
			if ((flag = ft_newflag(flag, "j", NULL)))
				if ((flag = ft_newflag(flag, "t", NULL)))
					if ((flag = ft_newflag(flag, "z", NULL)))
						if ((flag = ft_newflag(flag, "h", NULL)))
							if ((flag = ft_newflag(flag, "hh", NULL)))
								grp = 1;
	if (grp == 1 && (flag = ft_newflag(flag, "L", NULL)))
		if ((flag = ft_newflag(flag, "#", &ft_flag_hash)))
			if ((flag = ft_newflag(flag, "-", &ft_flag_minus)))
				if ((flag = ft_newflag(flag, "+", &ft_flag_plus)))
					if ((flag = ft_newflag(flag, "0", &ft_flag_zero)))
						if ((flag = ft_newflag(flag, ".", &ft_flag_point)))
							if ((flag = ft_newflag(flag, " ", &ft_flag_space)))
								return (flag);
	return (NULL);
}
