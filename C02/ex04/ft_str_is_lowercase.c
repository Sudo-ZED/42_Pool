/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:15:54 by marvin            #+#    #+#             */
/*   Updated: 2026/01/03 12:15:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
	int i = 0;

	if(str[i] == '\0')
	{
		return 1;
	}
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

/*int main(void)
{
	char str[] = "ABC";
	char str1[] = "abc";
	char str2[] = "";

	printf("%i\n", ft_str_is_lowercase(str));    //1
	printf("%i\n", ft_str_is_lowercase(str1));   //0
	printf("%i\n", ft_str_is_lowercase(str2));   //1
}*/