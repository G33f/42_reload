/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:54:57 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/04 12:55:01 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int co;

	co = 1;
	if (nb > 0)
	{
		while (nb != (co * co))
		{
			if (co == nb)
				return (0);
			co++;
		}
		return (co);
	}
	else
		return (0);
}
