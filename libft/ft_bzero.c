#include"libft.h"
void ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;
	size_t i = 0;

	while (i < n)
	{
		i++;
		*p++ = 0;
	}
	
}
