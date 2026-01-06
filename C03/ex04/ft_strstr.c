/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:11:29 by marvin            #+#    #+#             */
/*   Updated: 2026/01/06 14:11:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	unsigned int i = 0;
	unsigned int j;

	if(*to_find == '\0')
		return str;

	while(str[i] != '\0')
	{
		j = 0;
		while(str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if(to_find[j] == '\0')
			return(str + i);
		else
			i++;
	}
	return 0;
}
