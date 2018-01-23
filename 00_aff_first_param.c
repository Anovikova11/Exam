/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_aff_first_param.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 22:55:08 by alnoviko          #+#    #+#             */
/*   Updated: 2018/01/17 22:55:11 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	if (argc > 1)
	ft_putstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

// Write a program that takes strings as arguments, and displays its first
// argument followed by a \n.

// If the number of arguments is less than 1, the program displays \n.

// Example:

// $> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
// vincent$
// $> ./aff_first_param "j'aime le fromage de chevre" | cat -e
// j'aime le fromage de chevre$
// $> ./aff_first_param
// $