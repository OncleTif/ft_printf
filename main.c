/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:55:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/29 12:08:12 by tmanet           ###   ########.fr       */
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
	i = printf("printf :{%.4S", L"我是一只猫。");
	ft_putchar('\n');
	ft_putnbrendl(i);
	ft_putendl("ft_printf");
	i = ft_printf("fttest :{%.4S", L"我是一只猫。");
	ft_putchar('\n');
	ft_putnbrendl(i);
	return (0);
}
