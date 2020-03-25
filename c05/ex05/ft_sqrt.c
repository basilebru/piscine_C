/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:38:43 by bbrunet           #+#    #+#             */
/*   Updated: 2019/09/12 09:30:29 by bbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb / i == i && nb % i == 0)
				return (i);
			i++;
		}
		return (0);
	}
}