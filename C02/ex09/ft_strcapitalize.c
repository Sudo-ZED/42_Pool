/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:41:49 by kali              #+#    #+#             */
/*   Updated: 2025/09/17 00:02:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
         {
            if (i == 0 || (str[i - 1] >= '0' && str[i - 1] <= '9') ||
                      (str[i - 1] >= 'a' && str[i - 1] <= 'z') || 
                      (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
                {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        {
                            str[i] = str[i] - 32;
                        }
                    else if (str[i] >= 'A' && str[i] <= 'Z')
                        {
                            str[i] = str[i] + 32;
                        }
                }
            i++;
        }
return (str);
}
int main ()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
    return 0;


}