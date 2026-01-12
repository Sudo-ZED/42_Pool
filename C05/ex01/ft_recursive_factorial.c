/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:03:53 by marvin            #+#    #+#             */
/*   Updated: 2026/01/12 14:03:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_factorial(int nb)
{
	int i = 1;

	if(nb < 0)
		return 0;
	if(nb == 0 || nb == 1)
		return 1;
	return (nb* ft_recursive_factorial(nb - 1));
		
}