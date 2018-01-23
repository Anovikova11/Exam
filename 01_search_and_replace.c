/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 22:00:44 by alnoviko          #+#    #+#             */
/*   Updated: 2018/01/22 22:00:46 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_replace(char *d, char a, char b)
{
	int i;

	i = 0;
	while (d[i] != '\0')
	{
		if (d[i] == a)
			ft_putchar(b);
		else
			ft_putchar(d[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(argv[3][1] != '\0' || argv[2][1] != '\0'))
			ft_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}

Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $