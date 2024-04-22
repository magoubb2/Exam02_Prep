
#include <unistd.h>

// Same as inter but for each of the string.
int main(int argc, char **argv)
{
    int i = 0;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    int letter[128] = {0};
    while (argv[1][i])
    {
        if (letter[argv[1][i]] != 1)
        {
            write(1, &argv[1][i], 1);
            letter[argv[1][i]] = 1;
        }
        i++;
    }
    i = 0;
    while (argv[2][i])
    {
        if (letter[argv[2][i]] != 1)
        {
            write(1, &argv[2][i], 1);
            letter[argv[2][i]] = 1;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}