#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int result = 1;
	
	if (nb < 0)
		return 0;

	while (nb > 1)
	{
		result *= nb;
		nb--;
	}

	return result;
}

int main(void)
{
    printf("5! = %d\n", ft_iterative_factorial(5));  // 120
    printf("0! = %d\n", ft_iterative_factorial(0));  // 1
    printf("-3! = %d\n", ft_iterative_factorial(-3)); // 0
    printf("10! = %d\n", ft_iterative_factorial(10)); // 3628800
    return 0;
}

