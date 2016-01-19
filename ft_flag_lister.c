#include "ft_printf.h"

t_flag	*ft_flag_lister(void)
{
	t_flag	*flag;

	flag = NULL;
	if ((flag = ft_newflag(flag, "l", NULL)))
	if ((flag = ft_newflag(flag, "ll", NULL)))
	if ((flag = ft_newflag(flag, "j", NULL)))
	if ((flag = ft_newflag(flag, "t", NULL)))
	if ((flag = ft_newflag(flag, "z", NULL)))
	if ((flag = ft_newflag(flag, "h", NULL)))
	if ((flag = ft_newflag(flag, "hh", NULL)))
	if ((flag = ft_newflag(flag, "L", NULL)))
	if ((flag = ft_newflag(flag, "#", NULL)))
	if ((flag = ft_newflag(flag, "-", NULL)))
	if ((flag = ft_newflag(flag, "+", NULL)))
	if ((flag = ft_newflag(flag, "0", NULL)))
	if ((flag = ft_newflag(flag, " ", &ft_flag_space)))
			return (flag);
	return (NULL);
}
