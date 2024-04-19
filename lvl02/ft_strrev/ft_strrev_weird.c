
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int i = ft_strlen(str) - 1;
    int len = ft_strlen(str) - 1;

    if (len == -1)
        return (str);
    char rev[len];
    if (ft_strlen(str) == 1)
        return (&str[0]);
    len = 0;
    while (len >= 0 && str[i] != '\0')
    {
        rev[len] = str[i];
        len++;
        i--;
    }
    rev[len] = '\0';
    str = rev;
    return (str);
}

int main(void)
{
    char str[] = "hello";
    printf("%s\n", ft_strrev(str));
}