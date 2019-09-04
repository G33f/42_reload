/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:58:15 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/04 17:03:10 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(str[0]);
		str++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return(*s1 - *s2);
}

int main(int ac, char **av)
{
	int i;
	int j;
	char *c;

	i = 1;
	j = 1;
	while(i < ac)
	{
		while(j < ac - 1)
		{
			if(ft_strcmp(av[j], av[j + 1]) >= 0)
			{
				c = av[j];
				av[j] = av[j + 1];
				av[j + 1] = c;
			}	
			j++;
		}
		j = 1;
		i++;
	}
	av++;
	while(*av)
	{
		ft_putstr(*av);
		av++;
	}
	return (0);
}
