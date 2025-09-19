/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 20:43:18 by kali              #+#    #+#             */
/*   Updated: 2025/09/19 21:00:08 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int result;
    int sign;
    int i;

    i = 0;
    result = 0;
    while (str[i] != '\0' && ((str[i] >= 0 && str [i] <= 32) || str [i] == 127))
        i++;
    sign = 1;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}