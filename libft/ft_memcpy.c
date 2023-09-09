#include"libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t index;
	index = 0;

	if(!dest && !src)
	{
		return(NULL);
	}
	if (dest != src)
	{
		while (index < n)
		{
			*(unsigned char *)(dest + index) = *(unsigned char *)(src + index);
			index++;
		}
		return(dest);
	}
	return (NULL);
	
}

// int main()
// {
// 	char src[] ="merhaba";
// 	char dest[7];
// 	ft_memcpy(dest,src,4);
// 	printf("%s\n",dest);
// 	return(0);
// }