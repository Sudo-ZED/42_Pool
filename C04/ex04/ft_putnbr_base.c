/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 11:57:46 by marvin            #+#    #+#             */
/*   Updated: 2026/01/12 11:57:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);

}

int     ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

void    ft_putnbr_base(int nbr, char *base)
{
	int i = 0;
	int base_len = ft_strlen(base);
	if(base_len < 2)
		return;
	while(base[i] != '\0')
	{
		if(base[i] == '+' || base[i] == '-')
			return;
		i++;
	}
	i = 0;
	while(i < base_len - 1)
	{
		int j = i + 1;
		while(j < base_len )
		{
			if(base[i] == base[j])
				return;
			j++;
		}
		i++;
	}
	if(nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr_base(147483648, base);
	}
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if(nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}
/*int main(void)
{
	ft_putnbr_base(-42, "0123456789ABCDEF");  // Hexadecimal
	ft_putchar('\n');

	ft_putnbr_base(255, "01");                // Binary
	ft_putchar('\n');

	ft_putnbr_base(123, "01234567");          // Octal
	ft_putchar('\n');

	ft_putnbr_base(42, "0123456789");         // Decimal
	ft_putchar('\n');

	return 0;
}*/
