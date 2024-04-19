
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
    int i = 0;
    int len = ft_strlen(str);
    int j = len - 1;
    char tmp;

    while (i <= j)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}

int main(void)
{
    char str[] = "hello";
    printf("%s\n", ft_strrev(str));
}