/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:06:26 by marvin            #+#    #+#             */
/*   Updated: 2026/01/03 15:06:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        // Check if current character is alphanumeric
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9'))
        {
            // Start of word?
            if (i == 0 ||
                !((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
                  (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
                  (str[i - 1] >= '0' && str[i - 1] <= '9')))
            {
                // Make uppercase if lowercase
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
            }
            else
            {
                // Make lowercase if uppercase
                if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] += 32;
            }
        }
        i++; 
    }
    return str;
}
