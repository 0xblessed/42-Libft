#include <stdlib.h>
#include "libft.h"

/*
size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	l;

	if (n == 0 || dst == src)
		return (dst);
	l = 0;
	while (l < n)
	{
		((char *)dst)[l] = ((char *)src)[l];
		l++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*snew;

	len = ft_strlen((char *)s1) + 1;
	snew = (char *)malloc(len);
	if (snew == NULL)
		return (NULL);
	snew = ft_memcpy(snew, s1, len);
	return ((char *)snew);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

static size_t count_words(const char *s, char c)
{
    size_t count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s == c)
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        s++;
    }

    return count;
}

char **ft_split(char const *s, char c)
{
    size_t i;
    size_t j;
    size_t u;
    char **str;

    if (!s)
        return (NULL);
    size_t word_count = count_words(s, c); // Calcula el número de palabras primero
    str = (char **)malloc((word_count + 1) * sizeof(char *)); // Asigna memoria para el arreglo de punteros
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    u = 0; // Inicializa u a 0
    while (s[i])
    {
        if (s[i] == c)
        {
            if (j > 0) // Evitar crear subcadenas vacías para comas consecutivas
            {
                str[u++] = ft_substr(s, (unsigned int)(i - j), j); // Asigna la subcadena a str[u] y luego incrementa u
                if (!str[u - 1]) // Verifica si la asignación falló
                {
                    // Liberar la memoria previamente asignada si es necesario
                    for (size_t k = 0; k < u - 1; k++)
                    {
                        free(str[k]);
                    }
                    free(str);
                    return (NULL);
                }
            }
            j = 0;
        }
        else
        {
            j++;
        }
        i++;
    }

    if (j > 0) // Manejo de la última palabra si no termina con un delimitador
    {
        str[u++] = ft_substr(s, (unsigned int)(i - j), j); // Asigna la última subcadena a str[u] si no termina con un delimitador
        if (!str[u - 1]) // Verifica si la asignación falló
        {
            // Liberar la memoria previamente asignada si es necesario
            for (size_t k = 0; k < u - 1; k++)
            {
                free(str[k]);
            }
            free(str);
            return (NULL);
        }
    }

    str[u] = NULL; // Marca el final del array de cadenas

    return (str);
}

int main()
{
    char const *input_string = "Hola,mundo,esto,es,una,prueba";
    char delimiter = ',';

    char **result = ft_split(input_string, delimiter);

    if (!result)
    {
        printf("Error al dividir la cadena.\n");
        return 1;
    }

    // Imprimir las palabras divididas
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("Palabra %d: %s\n", i + 1, result[i]);
        free(result[i]); // Liberar la memoria de cada palabra
    }

    free(result); // Liberar la memoria del array de cadenas

    return 0;
}*/

static size_t	ft_numstring(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(const char **matrix, size_t len_matrix)
{
	while (len_matrix--)
		free((void *)matrix[len_matrix]);
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	len;
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	len = ft_numstring(s, c);
	matrix = (char **)malloc(sizeof(char *) * (len + 1));
	if (!matrix)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!matrix[i])
			return (ft_free_matrix((const char **)matrix, len));
		ft_strlcpy(matrix[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}
