#include "ft_printf.h"

t_flag	*ft_flag_lister(void)
{
	t_flag	*flag;

	flag = NULL;
	if ((flag = ft_newflag(flag, "ll", &ft_flag_ll)))
			return (flag);
	return (NULL);
}
