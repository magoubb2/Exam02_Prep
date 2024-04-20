
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
    // Initialise variable that will be the start of the string.
    int i = 0;
    // Initialise the variable that will start at the end of the string.
    int len = ft_strlen(str) - 1;
    // Temporary variable that will hold the current character we want to switch.
    char tmp;

    // Loop until i is not longer less than len.
    while (i <= len)
    {
        // tmp becomes the current character in str[i].
        tmp = str[i];
        // Then str[i] becomes the current str[len].
        str[i] = str[len];
        // And the current position of str[len] becomes the tmp character.
        str[len] = tmp;
        i++;
        len--;
    }
    // Return the transformed string.
    return (str);
}

int main(void)
{
    char str[] = "hello";
    printf("%s\n", ft_strrev(str));
}