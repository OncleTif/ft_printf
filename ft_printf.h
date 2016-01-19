/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:43:34 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 14:01:51 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

typedef struct		s_str_conv
{
	char				error;
	char				*str_out;
	char				*opt;
	size_t				size;
	char*				type;
	struct s_str_conv	*next;
}					t_str_conv;

typedef struct		s_flag
{
	char			*ptn;
	int				(*f)(t_str_conv*);
	struct s_flag	*next;
}					t_flag;

typedef struct		s_conv
{
	char			*ltr;
	size_t			size;
	char			*(*f)(t_str_conv*, va_list);
	struct s_conv	*next;
}					t_conv;

typedef struct		s_param
{
	t_conv			*conv;
	t_flag			*flag;
}					t_param;

int					ft_printf(char *str, ...);
int					ft_param_size(char *str, t_list *conv);
t_flag				*ft_flag_lister();
t_flag				*ft_newflag(t_flag *nxt, char *ptn, int (*f)(t_str_conv*));
t_param				*ft_param_builder(void);
t_conv				*ft_conv_lister();
t_conv				*ft_newconv(t_conv *nxt, char *ptn, char *(*f)(t_str_conv*, va_list));
size_t				ft_conv_picker(char *str, t_str_conv **elem, t_param *param, va_list ap);
int					ft_putcountstr(char *str);
t_str_conv			*ft_strsplit_to_conv(char *str, t_param *param, va_list ap);
int					ft_endof_opt(char *str, t_conv *conv);
size_t				ft_str_picker(char *str, t_str_conv **elem);
char				*ft_conv_s(t_str_conv *sub, va_list ap);
char				*ft_conv_c(t_str_conv *sub, va_list ap);
char				*ft_conv_percent(t_str_conv *sub, va_list ap);
size_t				ft_flag_picker(char *str, t_str_conv *sub, t_param *param);
#endif
