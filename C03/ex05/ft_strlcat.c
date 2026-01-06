/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:55:27 by marvin            #+#    #+#             */
/*   Updated: 2026/01/06 14:55:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	str_len(char *str)
{
	unsigned int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len =0;
	unsigned int src_len = 0;
	unsigned int i = 0;

	dest_len = str_len(dest);
	src_len  = str_len(src);

	if(size <= dest_len)
		return (size + src_len);

	while(src[i] != '\0' && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return(dest_len + src_len);
}