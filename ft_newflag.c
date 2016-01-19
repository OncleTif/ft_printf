#include "ft_printf.h"

t_flag	*ft_newflag(t_flag *nxt, char *ptn, int	(*f)(t_str_conv*))
{
	t_flag	*flag;

	flag = (t_flag*)ft_memalloc(sizeof(t_flag));
	if (!flag)
		return (NULL);
	flag->ptn = ptn;
	flag->size = ft_strlen(ptn);
	flag->f = f;
	flag->next = nxt;
	return (flag);
}
