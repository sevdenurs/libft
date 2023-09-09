#include <stdio.h>
#include <stdlib.h>
#include "libft.h" 

char *ft_strjoin(const char *s1, const char *s2) {
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);

    size_t toplam = len1 + len2 + 1; // null karakter için 1
    char *sonuc = (char *)malloc(toplam);

    if (sonuc == NULL) {
        return NULL;
    }
    ft_strlcpy(sonuc, s1, toplam); 
    ft_strlcat(sonuc, s2, toplam); 

    return sonuc;
}

// int main() 
// {
//     char str1[] = "merhaba";
//     char str2[] = "dünya";
//     char *birlesmis = ft_strjoin(str1, str2); 
//     if (birlesmis) 
// 	{
//         printf("%s\n", birlesmis);
// 	}
//     return 0;
// }
