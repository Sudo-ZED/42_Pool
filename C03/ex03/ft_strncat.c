/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:47:51 by marvin            #+#    #+#             */
/*   Updated: 2026/01/05 15:47:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(j < nb && src[j] != '\0' )
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;

}