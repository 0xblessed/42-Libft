#include <stdlib.h>
#include <stdio.h>
char *ft_itoa(int n)
{
    size_t  i;
    size_t  size;
    int     j;
    int     sign;

    i = 0;
    size = 0;
    sign = 1;
    // Manejar el caso de n negativo
    if (n < 0)
    {
        sign = -1;
        n = -n;
        size++;
    }
    j= n;
    while (j > 0)
    {
        j = j / 10;
        size++;
    }
    char *str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return (NULL);
    if (sign == -1)
        str[i++] = '-';
    if (n == 0)
        str[i++] = '0';
    else
    {
        while (n > 0)
        {
            str[i++] = '0' + (n % 10);
            n = n / 10;
        }
    }
    str[i] = '\0';

    // Revertir la cadena
    size_t start = (sign == -1) ? 1 : 0;
    size_t end = i - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
