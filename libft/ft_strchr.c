#include"libft.h"

char *ft_strchr(const char *str, int c) 
{
    while (*str != '\0') 
	{
        if (*str == c) 
		{
            return (char *)str;
        }
        str++;
    }

    return NULL;
}
 
//  int main()
//  {
// 	char str[] = "hello";
// 	char *sonuc = ft_strchr(str, 'e');

// 	if(sonuc != NULL)
// 	{
// 		printf("%s/n", sonuc);
// 	}
// 	else
// 	{
// 		printf("bulunamadi");
// 	}
// 	return 0;
//  }