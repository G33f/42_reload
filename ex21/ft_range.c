/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:44:20 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/06 16:55:59 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	range = (int*)malloc(max - min);
	if (max > min)
	{
		while (min <= max)
		{
			range[i] = min;
			min++;
			i++;
		}
		return (range);
	}
	else
	{
		range = NULL;
		return (range);
	}
}
