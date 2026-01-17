/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:40:22 by marvin            #+#    #+#             */
/*   Updated: 2026/01/17 19:40:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
 
int		str_length(char *str) //string length counter.
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		index ++;
	}
	return index;
}

int base_indexer(char c, char *base) //function helper to convert the base.
{
	int j = 0;
	while(base[j] != '\0')
	{
		if(base[j] == c)
			return j;
		j++;
	}	
	return -1; // if it not found.
}
	

int		ft_atoi_base(char *str, char *base)
{
	int base_length;
	int index;

	index = 0;
	base_length = str_length(base); // check if it smaller than 2.
	if (base_length < 2 )
		return 0;
	while(base[index] != '\0') //whitespace checker.
	{
	if(	base[index] == '+' || base[index] == '-' ||
		base[index] == ' ' || base[index] == '\t' ||
		base[index] == '\n' || base[index] == '\v' ||
		base[index] == '\f'  || base[index] == '\r')
			return 0;
	index ++;
	}
	index = 0;
	while(index < base_length)  // check for doubles.
	{
		int j = index + 1;
		while (j < base_length)
		{
			if (base[index] == base[j])
				return 0;
			j++;
		}
		index ++;
	}
	int i = 0;

	while 	(  str[i] == ' ' || str[i] == '\t'  //skip the white space.
			|| str[i] == '\n' || str[i] == '\v' 
			|| str[i] == '\f' || str[i] == '\r')
				i++;
	int sign = 1; // check for sign 
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = - sign; 
		}
		i++;
	}
	int result = 0;
	int value;

	while(str[i] != '\0')
	{
		value = base_indexer(str[i], base);
		if (value == -1)
			break;
		result = result * base_length + value;
		i++;
	}
	return(result * sign);
}