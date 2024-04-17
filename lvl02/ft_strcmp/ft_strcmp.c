
int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    // Loop while s1 and s2 are the same or NULL
    while (s1[i] == s2[i] && !s1[i] && !s2[i])
        i++;
    // Return the difference between them.
    return (s1[i] - s2[i]);
}