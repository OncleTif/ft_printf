/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 10:55:55 by tmanet            #+#    #+#             */
/*   Updated: 2016/01/19 13:44:02 by tmanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 2)
		//i = ft_printf(argv[1], "abc");
		i = ft_printf(argv[1], 0);
	ft_putchar('\n');
	ft_putnbrendl(i);
		i = printf(argv[1], 0);
	ft_putchar('\n');
	ft_putnbrendl(i);
	return (0);
}
