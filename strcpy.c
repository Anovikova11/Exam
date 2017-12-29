/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoviko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 09:40:43 by alnoviko          #+#    #+#             */
/*   Updated: 2017/12/26 09:41:46 by alnoviko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}


// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);