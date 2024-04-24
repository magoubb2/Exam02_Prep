
#include <unistd.h>
#include <stdio.h>

void print(int sum)
{
	if (sum > 9)
		print(sum / 10);
	write(1, &"0123456789"[sum % 10], 1);
}

int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res);
}

int ft_prime(int nbr)
{
	int i = 2;

	while (i <= nbr - 1)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int sum = 0;
	int nb = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	while (nb > 1)
	{
		if (ft_prime(nb))
			sum = sum + nb;
		nb--;
	}
	print(sum);
	write(1, "\n", 1);
	// printf("%i\n", sum);
}