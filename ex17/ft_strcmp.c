void	ft_strcmp(char *s1, char *s2)
{
	while(*s1 || *s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	if(*s2 == "\0")
		*s1 = *s2;
	else
		*s1 = "\0";
}	
