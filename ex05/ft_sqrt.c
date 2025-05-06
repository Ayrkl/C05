#include <stdio.h>

int ft_sqrt(int nb)
{
	int i = 1;
	
	if (nb < 0)
		return 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return i;
		i++;
	}
	return 0;
}

int main(void)
{
    printf("Karekök(25) = %d\n", ft_sqrt(25));   // 5
    printf("Karekök(16) = %d\n", ft_sqrt(16));   // 4
    printf("Karekök(10) = %d\n", ft_sqrt(10));   // 0
    printf("Karekök(0) = %d\n", ft_sqrt(0));     // 0
    printf("Karekök(-4) = %d\n", ft_sqrt(-4));   // 0
    return 0;
}

