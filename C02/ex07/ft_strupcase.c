/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:59:43 by marvin            #+#    #+#             */
/*   Updated: 2026/01/03 12:59:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
char    *ft_strupcase(char *str)
{
	int i = 0;

	if(str[i] == '\0')
	{
		return (str);
	}

	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}
/*int main(void)
{
	char str[] = "abcd";
	printf("%s", ft_strupcase(str));
}*/