#include"libft.h"

int ft_tolower(int a) 
{
    if (a >= 'A' && a <= 'Z') 
	{
        a += 32;
    }
    return (a);
}

// int main()
// {
// 	char str[10]= "FARRUK";
// 	int i= 0;
// 	while(str[i] != '\0')
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// 	printf("%s",str);


// }