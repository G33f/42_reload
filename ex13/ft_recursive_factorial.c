int	ft_recursiv_factorial(int nb)
{
	int r;

	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb != 0)
	{
		r = nb * ft_recursiv_factorial(nb - 1);
	}
	return (r);
}

