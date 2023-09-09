#include"libft.h"

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	
	if(str[i] == '\0')
		return(0);

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				sign = -1;
			i++;
		}
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		result += result * 10;
		result += (str[i] - 48);
		i++;
	}
	return(result * sign);
	
}

// #include <stdio.h>
// #include "libft.h" // ft_atoi işlevini içeren başlık dosyası

// int main() {
//     char *str1 = "-4886";
//     printf("Result 1: %d\n", ft_atoi(str1));

//     return 0;
// }
