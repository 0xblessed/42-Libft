char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_total;
	size_t	len_s;
	
	len_total = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len_total + 1));
	if (!str)
		return (NULL);
	len_s = ft_strlen(s1);
	len_s = ft_strlcpy(str, (char *)s1, len_s);
	len_s = ft_strlen(s2);
	len_s = ft_strlcat(str,s2,len_s);
	return (str);
	/*tambien puedes probar strdup(s1+s2)
	 * donde strdup te devolverá una string copia con memoria
	 *  ya reservada con malloc entonces solo tendrás que 
	 *  usar la concatenacion final que haces sin antes hacer
	 *   el strlcpy guarro ese*/
}
