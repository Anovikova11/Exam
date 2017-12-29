/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 14:41:01 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 14:41:04 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int		main(int argc, char **argv)
{
	char	*str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	while (is_space(*str))
		str++;
	while (*str)
	{
		if (is_space(*str))
		{
			while (is_space(*str))
				str++;
			if (!(*str))
				break;
			write(1, "   ", 3);
			str--;
		}
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (0);
}

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
vous   voyez   c'est   facile   d'afficher   la   meme   chose$
$> ./expand_str " seulement          la c'est      plus dur " | cat -e
seulement   la   c'est   plus   dur$
$> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
$> ./expand_str "" | cat -e
$
$>