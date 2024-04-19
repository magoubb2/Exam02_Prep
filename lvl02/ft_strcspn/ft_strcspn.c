#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    int r = 0;

    while (s[i])
    {
        while (reject[r])
        {
            if (reject[r] == s[i])
                return (i);
            r++;
        }
        r = 0;
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%lu\n", ft_strcspn("hello", "o"));
    printf("%lu\n", strcspn("hello", "o"));
}