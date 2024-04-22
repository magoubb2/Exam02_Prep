
#include <unistd.h>

// Function that checks for a certain character
int ft_strchr(char c, char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == c)
            // If the character is found in the string return 1.
            return (1);
        i++;
    }
    // If the character is not found return 0.
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    // Initialise a array of 128 int (for all the ascii characters) 
    // and initialise all of the position to zero.
    int letter[128] = {0};
    while (argv[1][i])
    {
        // If the letter in the letter array is not equivalent to 1,
        // this condition is true.
        if (letter[argv[1][i]] != 1)
        {
            // Check if the letter in argv[1] is equivalent to the letter in argv[2],
            // Write the current letter to the output.
            if (ft_strchr(argv[1][i], argv[2]))
                write(1, &argv[1][i], 1);
            // Then change the value of the current letter to zero.
            letter[argv[1][i]] = 1;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}