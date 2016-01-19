#include "ft_printf.h"

char	*ft_conv_s(t_str_conv *sub, va_list ap)
{
	sub->str_out = va_arg(ap, char*);
	if (!sub->str_out)
		sub->str_out = ft_strdup("(null)");
		sub->size = ft_strlen(sub->str_out);
	return (sub->str_out);
}
