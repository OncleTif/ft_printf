/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:43:34 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/13 15:55:03 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

typedef struct		s_conv
{
	char			*ltr;
	char			*(*f)(char*);
	struct s_conv	*next;
}				t_conv;

typedef struct		s_str_conv
{
char				*str_in;
char				*str_out;
char				*opt;
size_t				size;
struct s_str_conv	*next;
}					t_str_conv;

int			ft_printf(char *str, ...);
int			ft_param_size(char *str, t_list *conv);
t_conv		*ft_conv_lister();
int			ft_putcountstr(char *str);
t_str_conv	*ft_strsplit_to_conv(char *str, t_conv *conv);
int			ft_endof_opt(char *str, t_conv *conv);
size_t		ft_conv_picker(char *str, t_str_conv **elem, t_conv *conv);
size_t		ft_str_picker(char *str, t_str_conv **elem);
#endif
