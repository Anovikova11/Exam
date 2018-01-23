/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_paramsum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 18:43:51 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 18:43:53 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}

int		main(int argc, char **argv)
{
	int		x;

	argv[1] = "0";
	x = argc - 1;
	if (x >= 0)
		ft_putnbr(x);
	write(1, "\n", 1);
	return (0);
}

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>