/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:07:57 by marvin            #+#    #+#             */
/*   Updated: 2026/01/12 15:07:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_power(int nb, int power)
{
	int i = 1;
	int res = 1;
	
	if(power < 0)
		return 0;
	if(power == 0)
		return 1;
	while(i <= power )
	{
		res = res * nb;
		i++;
	}
	return(res);
}