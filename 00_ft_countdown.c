/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_countdown.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 21:47:10 by alnoviko          #+#    #+#             */
/*   Updated: 2018/01/22 21:47:13 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 9;
	while (i >= 0)
	{
		ft_putchar(i + '0');
		i--;
	}
	ft_putchar('\n');
	return (0);
}

Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>