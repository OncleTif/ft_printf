/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:55:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/28 16:39:58 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>

int	main(int argc, char **argv)
{
	setlocale(LC_ALL, "en_US.UTF-8");
	int	i;

	i = 0;
	if (argc && argv)
	{
		;
	}
	ft_putendl("printf");
	i = printf("printf :{%C", 0);
	ft_putchar('\n');
	ft_putnbrendl(i);
	ft_putendl("ft_printf");
	i = ft_printf("fttest :{%C", 0);
	ft_putchar('\n');
	ft_putnbrendl(i);
	return (0);
}
