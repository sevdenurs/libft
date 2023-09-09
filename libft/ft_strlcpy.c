#include"libft.h"
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t srcsize;
	size_t i;

	srcsize = ft_strlen(src);
	i = 0;
	if(size !=0)
	{
		while(src[i] !='\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return(srcsize);
}

// int	main()
// {
// 	char src[] = "World!";
// 	char dest[] = "Hello ";
// 	printf("%zu %s\n", ft_strlcpy(dest, src, 10),dest);
// 	return 0;
// }