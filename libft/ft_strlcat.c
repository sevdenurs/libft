#include"libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size) 
{
    size_t i = 0;
    size_t dlen = 0;
    size_t slen = ft_strlen(src);

    while (dest[dlen] != '\0') {
        dlen++;
    }

    if (size == 0 || size <= dlen) {
        return slen + size;
    }

    while (src[i] != '\0' && i < size - dlen - 1) {
        dest[dlen + i] = src[i];
        i++;
    }

    dest[dlen + i] = '\0';
    return dlen + slen;
}

// int main(void) {
//     char src[] = "sevde";
//     char dest[] = "nur";
//     printf("%zu\n", ft_strlcat(dest, src, 5));
//     printf("%s\n", dest);
//     return 0;
// }
