/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_fprime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 19:01:45 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 19:01:47 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_primes(int n, int i, int first)
{
	if (n == 1)
	{
		printf("\n");
		return ;
	}
	while (n % i != 0)
		i++;
	if (first == 0)
		printf("*");
	first = 0;
	printf("%d", i);
	print_primes(n / i, i, first);
}

int		main(int argc, char **argv)
{
	int		first;

	first = 1;
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	if (atoi(argv[1]) == 1)
	{
		printf("%d\n", atoi(argv[1]));
		return (0);
	}
	print_primes(atoi(argv[1]), 2, first);
	return (0);
}

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there's one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$