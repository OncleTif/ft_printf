/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:55:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/27 12:38:28 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc && argv)
	{
		;
	}
	//i = ft_printf(argv[1], "abc");
	ft_putendl("printf");
	i = printf("printf :{% Zoooo");
	ft_putchar('\n');
	ft_putnbrendl(i);
	ft_putendl("ft_printf");
	i = ft_printf("fttest :{% Zoooo");
	ft_putchar('\n');
	ft_putnbrendl(i);
	return (0);
}
