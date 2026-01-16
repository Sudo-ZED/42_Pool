/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:17:07 by marvin            #+#    #+#             */
/*   Updated: 2026/01/16 16:17:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
{
	int index = 0;

	while(str[index] != '\0')
	{
		index++;
	}
	return(index);
}

char	*ft_strdup(char *src)
{
	int src_length;
	char *dup;   
	int index;

	src_length = str_len(src);
	dup = malloc((src_length + 1) * sizeof(char));  // +1 for '\0'.
	if (!dup)  // protection if the size is 0.
	{
		return(NULL);  
	}
	index = 0;
	while(src[index] != '\0')
	{
		dup[index] = src[index];
		index++;
	}
	dup[index] = '\0';
	return(dup);    //always use free in the main function so no memory leaks happens.
}
