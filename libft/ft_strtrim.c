#include"libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    if (s1 == NULL || set == NULL)
        return NULL;

    size_t start = 0;
    size_t end = ft_strlen(s1);

    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    size_t len = end - start;
    char *str = (char *)malloc(len + 1);

    if (str == NULL)
        return NULL;

    ft_strlcpy(str, s1 + start, len + 1);

    return str;
}

// int main() {
//     const char *original = "   hello world   ";
//     const char *set = " ";
//     char *trimmed = ft_strtrim(original, set);

//     if (trimmed != NULL)
// 	{
//         printf("Original: '%s'\n", original);
//         printf("Trimmed: '%s'\n", trimmed);
// 	}
//     return 0;
// }