
int	ft_iterative_factorial(int nb)
{
	int r;

	r = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
