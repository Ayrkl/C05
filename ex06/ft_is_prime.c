#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	
	if (nb <= 1)
		return 0;
	
	i = 2;
	
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(void)
{
    printf("2 asal mı? %d\n", ft_is_prime(2));     // 1
    printf("17 asal mı? %d\n", ft_is_prime(17));   // 1
    printf("18 asal mı? %d\n", ft_is_prime(18));   // 0
    printf("1 asal mı? %d\n", ft_is_prime(1));     // 0
    printf("-7 asal mı? %d\n", ft_is_prime(-7));   // 0
    return 0;
}

