/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_connvert_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:00:20 by marvin            #+#    #+#             */
/*   Updated: 2026/01/17 19:00:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include<stdio.h>

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

int 	count_degits(int num, int base)
{
	int count;

	count = 0;
	if (num <= 0)  // 0 or negative number.
		count = 1;
	while(num != 0)
	{
		if (num < 0) // changing the num to positive num.
		{
			num = -num;
		}
		num /= base; // the logic behind it it to devide till we reach 0 every devision eq makes count increas.
		count++;
	}
	return(count);
}
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int number;
	int base_len;
	int count;
	int start_index;
	int position;
	char *result;

	number = ft_atoi_base(nbr, base_from);  // converting using atoi base.
	base_len = str_length(base_to);  // calculate the length of the base to string.
	count = count_degits(number, base_len);
	result = malloc((count + 1 ) * sizeof(char));  // + 1 is for the null termenator in the end.
	if (!result)
	{
		return NULL;
	}
	result[count] = '\0'; //adding at the end the Null terminating so we knows wher the end is.
	start_index = 0;

	if(number < 0) // this function gonna hundel the negative numbers it will switch from negative to positive why cz mod and div behave bad in negative numbers.
	{
		result[0] = '-'; // first char in the str is the static sign for negative '-'.
		number = -number;
		start_index = 1;  // why cz the first char is already filled with the minus sign.
	}
	if (number == 0)  // hundeling the 0 num.
	{		
		result[start_index] = base_to[0];
		return(result);
	}

	position = count - 1; //start from the end cz if we worked with mod and div we needs filling from backword.
	while (position >= start_index)   
	{
		result[position] = base_to[number % base_len];
		number /= base_len;
		position--;
	}
	return (result);
}	
/*int main(void)
{
    char *res;

    res = ft_convert_base("1010", "01", "0123456789");
    printf("%s\n", res);  // should print 10
    free(res);

    res = ft_convert_base("-42", "0123456789", "0123456789ABCDEF");
    printf("%s\n", res);  // should print -2A
    free(res);

    return 0;
}*/

