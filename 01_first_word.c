/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 18:04:21 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 18:04:25 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1)
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	while (*str == '\n' || *str == '\t' || *str == ' ')
		str++;
	while (*str)
	{
		if (*str == '\n' || *str == '\t' || *str == ' ')
			break;
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>