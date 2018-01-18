/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_only_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/30 13:46:51 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/30 13:46:54 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	write(1, "a", 1);
	return (0);
}

// Write a program that displays an 'a' character on the standard output.