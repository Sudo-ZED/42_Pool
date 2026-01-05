/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:11:13 by marvin            #+#    #+#             */
/*   Updated: 2026/01/05 15:11:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);

}
/*int main(void)
{
    char s1[] = "hello";
    char s2[] = "hell";
    ft_putnbr (ft_strcmp(s1, s2));

}*/