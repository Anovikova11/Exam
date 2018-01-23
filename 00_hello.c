/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 17:48:29 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 17:48:32 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	write(1, "Hello World!\n", 13);
	return (0);
}

Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>