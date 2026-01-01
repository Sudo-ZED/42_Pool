/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:30:27 by marvin            #+#    #+#             */
/*   Updated: 2026/01/01 17:30:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(' ');
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	if(x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void	ft_print_comb2(void)
{
int x, y;

x = '0';
while(x <= 98)
{
	y = x +1;
	while(y <= 99)
	{
		ft_print_comb(x, y);
		y++;
	}
	x++;
}

}
/*int main(void)
{
	ft_print_comb2();
}*/