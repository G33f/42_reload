int	ft_iterative_factorial(int nb)
{
	int r;

	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb != 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
