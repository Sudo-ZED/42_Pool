/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:30:15 by marvin            #+#    #+#             */
/*   Updated: 2026/01/04 15:30:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int ft_strlen(char *src)
{
	int i = 0;

	while(src[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;

	while(src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if(size > 0)
		dest[i] = '\0';

	return ft_strlen(src);

}
/*int main(void)
{
	char src[] = "hello, world";
	unsigned int size = 6;
	char dest[6];
	printf("%i\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
}*/