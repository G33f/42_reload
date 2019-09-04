int	ft_sqrt(int nb);
{
	int co;

	co = 0;
	if(nb > 2147483646 || nb < 0)
		return (0);
	while (nb > (co * co))
	{
		if((co * co) == nb )
			return(co);
		else
			co++;
	}
	return(0);
}

