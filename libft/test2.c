#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

int main() 
{
    char dizi[] = "karakter";
    char *substr = ft_substr(dizi, 3, 2);
    printf("%s\n", substr); // substr'yi yazdırın
    free(substr); // Belleği serbest bırakmayı unutmayın
    return 0;
}
