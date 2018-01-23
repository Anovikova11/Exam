/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 19:06:13 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 19:06:15 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	char	base[17] = "0123456789abcdef";

	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	print_char(unsigned char *temp, int *j, int size)
{
	int count;

	count = 0;
	while (*j < size && count < 16)
	{
		if (temp[*j] >= 32 && temp[*j] <= 126)
			ft_putchar(temp[*j]);
		else
			ft_putchar('.');
		(*j)++;
		count ++;
	}
}

void	print_memory(const void *addr, size_t size)
{
	int				i;
	int				j;
	unsigned char	*temp;

	i = 0;
	j = 0;
	temp = (unsigned char*)addr;
	while (i < (int)size || i % 16 != 0)
	{
		if (i && i % 2 == 0)
			ft_putchar(' ');
		if (i && i % 16 == 0)
		{
			print_char(temp, &j, (int)size);
			ft_putchar('\n');
		}
		if (i >= (int)size)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
			print_hex(temp[i]);
		i++;
	}
	if (j < (int)size)
	{
		ft_putchar(' ');
		print_char(temp, &j, (int)size);
	}
	ft_putchar('\n');
}

Write a function that takes (const void *addr, size_t size), and displays the
memory as in the example.

Your function must be declared as follows:

void	print_memory(const void *addr, size_t size);

---------
$> cat main.c
void	print_memory(const void *addr, size_t size);

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
$> gcc -Wall -Wall -Werror main.c print_memory.c && ./a.out | cat -e
0000 0000 1700 0000 9600 0000 ff00 0000 ................$
0c00 0000 1000 0000 1500 0000 2a00 0000 ............*...$
0000 0000 0000 0000                     ........$
