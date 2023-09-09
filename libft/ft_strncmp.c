#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main()
// {
//     printf("%d", ft_strncmp("Hello", "HelloWorld", 8));
// }
