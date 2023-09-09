#include"libft.h"

int ft_isprint(char a) 
{
    if (a >= 32 && a <= 126) 
	{
        return 1;
    }
	else 
	{
        return 0;
    }
}
