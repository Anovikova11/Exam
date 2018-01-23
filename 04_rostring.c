/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_rostring.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 18:40:42 by alnoviko          #+#    #+#             */
/*   Updated: 2018/01/04 18:40:43 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

void	rot(char *str)
{
	char	*begin;
	int		printed;

	begin = str;
	printed = 0;
	while (*str && is_space(*str))
		str++;
	while (*str && !is_space(*str))
		str++;
	while (*str && is_space(*str))
		str++;
	while (*str)
	{
		if (is_space(*str) && is_space(*(str + 1)))
			str++;
		else
		{
			write(1, str, 1);
			printed = 1;
			str++;
		}
	}
	if (printed)
		write(1, " ", 1);
	while (*begin && is_space(*begin))
		begin++;
	while (*begin &&  !is_space(*begin))
	{
		write(1, begin, 1);
		begin++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		rot(argv[i]);
		i++;
	}
	return (0);
}

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>