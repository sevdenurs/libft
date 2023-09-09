#include"libft.h"

int ft_isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
		return(1);
	else if(c >= 'A' && c <= 'Z')
		return(1);
	else
		return(0);
	
}

// int main()
// {
// 	printf("%d",ft_isalpha("kdfsdkfşklf"));
// 	printf("%d",ft_isalpha("444"));

// }