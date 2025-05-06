#include <stdio.h>

int ft_iterative_power(int nb, int power)

{
	int result = 1;
	
	if (power < 0)
		return 0;

	while (power > 0)
	{
		result *= nb;
		power--;
	}

	return result;
}

int main(void)
{
    printf("2^3 = %d\n", ft_iterative_power(2, 3));     // 8
    printf("5^0 = %d\n", ft_iterative_power(5, 0));     // 1
    printf("0^0 = %d\n", ft_iterative_power(0, 0));     // 1
    printf("7^-2 = %d\n", ft_iterative_power(7, -2));   // 0
    printf("3^4 = %d\n", ft_iterative_power(3, 4));     // 81
    return 0;
}

