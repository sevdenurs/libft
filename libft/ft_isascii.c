#include"libft.h"

int ft_isascii(int a) 
{
    if (a >= 0 && a < 127)
        return 1;
	else 
        return 0;
}

// int main() 
// {
//     printf("%d\n", ft_isascii('3'));
//     printf("%d\n", ft_isascii('-')); 

//     return 0;
// }