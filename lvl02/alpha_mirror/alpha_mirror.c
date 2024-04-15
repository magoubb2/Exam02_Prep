
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            // ex: argv[1][i] = a.(97)
            // argv[1][i](a) = 122 - 97 + 97.
            // rep: argv[1][i] = z.(122)
            // ex: argv[1][i] = d.(100)
            // argv[1][i] = 122 - 100 + 97.
            // rep: argv[1][i] = w.(119)
            argv[1][i] = 'z' - argv[1][i] + 'a';
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            argv[1][i] = 'Z' - argv[1][i] + 'A';
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}