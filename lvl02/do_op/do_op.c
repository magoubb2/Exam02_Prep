
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	// Variable that will end up being the result.
	int res = 0;
	int n1 = 0;
	int n3 = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	// Convert the argv[1] and the argv[3] into integer.
	n1 = atoi(argv[1]);
	n3 = atoi(argv[3]);
	// For additions.
	if (argv[2][0] == '+')
	{
		res = n1 + n3;
		printf("%d\n" ,res);
	}
	// For substractions.
	else if (argv[2][0] == '-')
	{
		res = n1 - n3;
		printf("%d\n" ,res);
	}
	// For multiplications.
	else if (argv[2][0] == '*')
	{
		res = n1 * n3;
		printf("%d\n" ,res);
	}
	// For divisions.
	else if (argv[2][0] == '/')
	{
		res = n1 / n3;
		printf("%d\n" ,res);

	}
	// For modulos.
	else if (argv[2][0] == '%')
	{
		res = n1 % n3;
		printf("%d\n" ,res);
	}
	return (0);
}