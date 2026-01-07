/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:26:29 by marvin            #+#    #+#             */
/*   Updated: 2026/01/07 16:26:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_atoi(char *str)
{
	int index = 0;
	int sign = 1;
	int result = 0;

			//skip the whitespace:
	while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		{
			index++;
		}
			// handel the sign:
	if(str[index] == '-' || str[index] == '+')
	{
		if(str[index] == '-')
		{
			sign = -1;
		}
		index++;
	}

			//convert:
	
	while(str[index] >= '0' && str[index] <= '9')
	{
		result = result *10 + (str[index] - '0');
		index ++;
	}
	return (result * sign);
		
}
