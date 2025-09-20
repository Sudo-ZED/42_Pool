/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 05:00:36 by kali              #+#    #+#             */
/*   Updated: 2025/09/20 05:10:43 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while(i * i <= nb)
	{
		if(nb % i == 0) 
			return (0);
		i++;
	}
	return (1);
}
int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0 )
	{
		nb++ ;
	}
	return (nb);
}