char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0' || little == NULL)
		return ((char *)big);
	while ((big[i] != '\0') && i < len)
	{
		j = 0;
		while (big[i+j] == little[j] && (i + j) < len)
		{
			j++;
			if (j == ft_strlen((char *)little))
			{
				return ((char *)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}
