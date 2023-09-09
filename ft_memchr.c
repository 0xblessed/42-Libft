void *ft_memchr( const void *ptr, int ch, size_t count )
{
	unsigned char	*p;
	size_t		i;

	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count)
	{
		if ((unsigned char)ch == *(unsigned char *)(ptr+i))
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
