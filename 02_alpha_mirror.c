/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 23:20:31 by alnoviko          #+#    #+#             */
/*   Updated: 2018/01/17 23:20:33 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			ft_putchar('m' - (*s - 'n'));
		else if (*s >= 65 && *s <= 90)
			ft_putchar('M' - (*s - 'N'));
		else
			ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	alpha_mirror(av[1]);
	ft_putchar('\n');
	return (0);
}

Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>