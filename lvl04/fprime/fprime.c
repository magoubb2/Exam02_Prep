
#include <stdio.h>
#include <stdlib.h>

void fprime(unsigned int nbr)
{
	int prime = 2;

	if (nbr == 1)
		printf("1");
	else
	{
		// Loop until nbr is greater than 1.
		while (nbr > 1)
		{
			// Check if prime is a factor of nbr.
			if (nbr % prime == 0)
			{
				// If it is print it.
				printf("%d", prime);
				// Divide nbr by prime
				nbr = nbr / prime;
				// If nbr is still greater than 1, print a multiplication sign.
				if (nbr > 1)
					printf("*");
				// Reset prime to check for other factors.
				prime--;
			}
			// Increment for next number.
			prime++;
		}	
	}
}

int main(int argc, char **argv)
{
	int nbr;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	// Convert argv into an interger.
	nbr = atoi(argv[1]);
	// If nbr is greater than 0, find it's prime factors.
	if (nbr > 0)
		fprime(nbr);
	printf("\n");
	return (0);
}