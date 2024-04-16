
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int res = 0;
	int n1 = 0;
	int n3 = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	n1 = atoi(argv[1]);
	n3 = atoi(argv[3]);
	if (argv[2][0] == '+')
	{
		res = n1 + n3;
		printf("%d\n" ,res);
	}
	else if (argv[2][0] == '-')
	{
		res = n1 - n3;
		printf("%d\n" ,res);
	}
	else if (argv[2][0] == '*')
	{
		res = n1 * n3;
		printf("%d\n" ,res);
	}
	else if (argv[2][0] == '/')
	{
		res = n1 / n3;
		printf("%d\n" ,res);

	}
	else if (argv[2][0] == '%')
	{
		res = n1 % n3;
		printf("%d\n" ,res);
	}
	return (0);
}