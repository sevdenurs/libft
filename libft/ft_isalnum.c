// #include"libft.h"
// int ft_isalnum(int str)
// {
//     if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') 
// 			|| (str >= '0' && str <= '9'))
//         return 1;  
// 	return 0;
// }

#include "libft.h"

int ft_isalnum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}
