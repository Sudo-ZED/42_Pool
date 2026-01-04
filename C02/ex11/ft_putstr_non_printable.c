/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 16:36:29 by marvin            #+#    #+#             */
/*   Updated: 2026/01/04 16:36:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr_non_printable(char *str)
{
	int i = 0;
	int high, low;
	char c;
	char x;
	while(str[i] != '\0')
	{
		if((str[i] >= 0 && str[i] <= 31) || str[i] == 127 )
		{
			write(1, "\\", 1);
			high = str[i] / 16;
			low  = str[i] % 16;

			if(high <= 9)
				c = '0' + high;
			else 
				c = 'a' + (high - 10);
			if(low <= 9)
				x = '0' + low;
			else 
				x = 'a' + (low - 10);
			write(1, &c, 1);
			write(1, &x, 1);
	
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}