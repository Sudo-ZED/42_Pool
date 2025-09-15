/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 03:37:49 by kali              #+#    #+#             */
/*   Updated: 2025/09/15 03:48:25 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
}
void    ft_putnbr(int nb)
{
	if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}
int main(int argc, char const *argv[])
{
	ft_putnbr(483648);
	return 0;
}
