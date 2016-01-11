/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:43:34 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/11 15:00:27 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

typedef struct		s_conv
{
	char			ltr;
	int				(*f)(char*);
}					t_conv;

int		ft_printf(char *str, ...);
int		ft_param_size(char *str, t_list *conv);
t_list	*ft_conv_lister();
int		ft_putcountstr(char *str);

#endif
