/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 13:05:39 by marvin            #+#    #+#             */
/*   Updated: 2026/01/03 13:05:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char    *ft_strlowcase(char *str)
{
    int i = 0;

    if(str[i] == '\0')
    {
        return (str);
    }

    while (str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return str;
}
/*int main(void)
{
    char str[] = "ABXD";
    printf("%s", ft_strlowcase(str));
}*/