#include"libft.h"

char *ft_strrchr(const char *str, int c) 
{
    int i = 0;

    while (str[i])
        i++;

    while (i >= 0) 
	{
        if (str[i] == (char)c) 
		{
            return ((char *)(str + i));
        }
        i--;
    }

    return NULL;
}

// int main() 
// {
//     char str[] = "coksicak";
//     char *sonuc = ft_strrchr(str, 'c');

//     if (sonuc != NULL) {
//         printf("%s\n", sonuc);
//     } else {
//         printf("bulunamadi");
//     }
//     return 0;
// }
