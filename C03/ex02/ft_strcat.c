/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 02:02:41 by kali              #+#    #+#             */
/*   Updated: 2025/09/19 02:14:15 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	// Two variables for indexing src and dest
	int i;
	int b;

	b = 0;
	i = 0;
	while (dest[i] != '\0')  // Count the length of dest because we don't want to rewrite, we need to continue
		i++;
	while (src[b] != '\0') 
	{
		dest[i] = src[b]; // Now src will continue printing because i contains the length of dest
		b++;
		i++;
	}
	dest[i] = '\0'; // Always pad with the null terminator because it's fatal in C
	return (dest); // Return dest to be printed
	
	
}