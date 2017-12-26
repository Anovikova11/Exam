/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 18:51:11 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/25 18:51:14 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main()
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}

// Write a program that displays the alphabet in reverse, with even letters in
// uppercase, and odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_revalpha | cat -e
// zYxWvUtSrQpOnMlKjIhGfEdCbA$