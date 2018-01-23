/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 14:04:26 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 14:04:29 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

WRONG ONE!!!!

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (1);
}

int		check(char *str, int len, char check)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (str[i] == check)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char **av)
{
	int i;
	int j;
	int len;
	char *str;

	i = 1;
	len = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (check(str, len, av[i][j]))
			{
				str[len] = av[i][j];
				len++;
			}
			j++;
		}
		i++;
	}
	str[len] = '\0';
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv);
	ft_putchar('\n');
	return (0);
}


Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>