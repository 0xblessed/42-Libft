int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t		i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) ptr1;
	s2 = (unsigned char *) ptr2;
	i = 0;
	while (i < num)
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if(*s1 > *s2)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
