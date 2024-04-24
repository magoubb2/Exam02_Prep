
int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	// Handle negatives.
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	// Loop until end of line.
	while (str[i])
	{
		// For base 10
		if (str[i] >= '0' && str[i] <= '9')
			// ex = 12. 0 = 0 * 10 + (12 + 0)
			//			0 + (12 + 0)
			//			0 + 12
			//		res = 12
			res = res * str_base + (str[i] - '0');
		// For base 16 min.
		else if (str[i] >= 'a' && str[i] <= 'f')
			// ex: a. 0 = 0 * 16 + ('a' - 'a' + 10)
			//		  0 + (0 + 10)
			//		  0 + 10
			//	  res = 10.                                                                  
			res = res * str_base + (str[i] - 'a' + 10);
		// For base 16 maj.
		else if (str[i] >= 'A' && str[i] <= 'F')
			res = res * str_base + (str[i] - 'A' + 10);
		else
			break ;
		i++;
	}
	return (res * sign);
}

#include <stdio.h>

int main(void)
{
	printf("%i\n", ft_atoi_base("-A", 16));
}
