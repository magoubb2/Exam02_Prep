
int		max(int* tab, unsigned int len)
{
	// Initialise largest_nbr which is variable we will return (The biggest number in the array).
	int largest_nbr = 0;
	// This is our variable that will travel trough the array.
	int i = 0;

	// If the array is empty return 0.
	if (len == 0)
		return (0);
	// We initialise the largest number to the first number in the tab array.
	largest_nbr = tab[i];
	// While i is less than len we loop.
	while (i < len)
	{
		// If the largest number is less than the current number in tab, assigne the current number to 
		// the largest_nbr.
		if (largest_nbr < tab[i])
			largest_nbr = tab[i];
		i++;
	}
	// Return the largest_nbr.
	return (largest_nbr);
}

#include <stdio.h>

int main(void)
{
	int tab[] = {1, 200, 3, 50};
	int len = 4;

	printf("%i\n", max(tab, len));
}