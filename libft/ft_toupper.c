#include"libft.h"

int ft_toupper(int a) 
{
    if (a >= 'a' && a <= 'z') 
	{
        return(a - 32);
    }
    return (a);
}

// int main()
// 	char str[10]= "faruK123y";
// 	int i= 0;
// 	while(str[i] != '\0')
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	printf("%s",str);
// }