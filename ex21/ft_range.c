/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:44:20 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/04 14:01:36 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int i;

	i = 0;
	int *range = (int*) malloc(max - min);
	if (max > min)
	{
		while(i < max)
		{
			range[i] = min
			min++;
			i++;
		}
		return(range);
	}
	esle
	{
		range = (NULL);
		return (range);
	}
}
