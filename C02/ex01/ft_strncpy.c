/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:31:38 by marvin            #+#    #+#             */
/*   Updated: 2026/01/03 11:31:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unisdt.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while(index < n )
		dest[index] = '\0';

	return(dest);
}