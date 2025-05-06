#include <stdio.h>

int ft_is_prime(int nb)

{
	int i = 2;

	if (nb <= 1)
		return 0;
	
	while (i * i <= nb)
	{
		if (nb % 1 == 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	nb++;
	return nb;
}

int main(void)
{
    printf("Sonraki asal (14): %d\n", ft_find_next_prime(14));   // 17
    printf("Sonraki asal (2): %d\n", ft_find_next_prime(2));     // 2
    printf("Sonraki asal (0): %d\n", ft_find_next_prime(0));     // 2
    printf("Sonraki asal (29): %d\n", ft_find_next_prime(29));   // 29
    printf("Sonraki asal (30): %d\n", ft_find_next_prime(30));   // 31
    return 0;
}

