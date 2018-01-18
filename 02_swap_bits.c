/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 18:38:36 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/29 18:38:39 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char   swap_bits(unsigned char octet)
{
	unsigned char o1;
	unsigned char o2;

	o1 = octet >> 4;
	o2 = octet << 4;
	return(o1 | o2);
}

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100