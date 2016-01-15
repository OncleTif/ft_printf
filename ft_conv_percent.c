#include "ft_printf.h"

char	*ft_conv_percent(t_str_conv *sub, va_list ap)
{
	if (ap)
	{
		;
	}
	sub->str_out = ft_strdup("%");
	sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
