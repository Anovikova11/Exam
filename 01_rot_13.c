/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 09:45:35 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/26 09:45:37 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if((str[i] >= 65 && str[i] <=  77) || (str[i] >= 97 && str[i] <= 109))
			str[i] = str[i] + 13;

		else if (str[i] >= 78 && str[i] <= 90)
			str[i] = str[i] - 78 + 65;

		else if (str[i] >= 110 && str[i] <= 122)
			str[i] = str[i] - 110 + 97;
		
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rot_13(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>