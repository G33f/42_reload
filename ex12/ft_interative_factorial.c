/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:54:24 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/04 12:54:29 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int r;

	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}

int main()
{
	printf("%d","\n", ft_iterative_factorial(5));
	return(0);
}