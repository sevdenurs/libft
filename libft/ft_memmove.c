#include"libft.h"

void *ft_memmove(void* destination, const void* source, size_t num)
{
	unsigned char* dest = (unsigned char*)destination;
	const unsigned char* src = (const unsigned char*)source;

	if (dest < src)
	{
		size_t i = 0;
		while (i < num)
		{
			dest[i] = src[i];
			i++;	
		}
	}
	else
	{
		size_t i = num;
		while (i > 0)
		{
			dest[i - 1] =  src[i - 1];
			i--;
		}
		
	}
	return destination;
	
}
// int main()
// {
//     char cdizi1[] = "Bilgisayar";
//     const char cdizi2[] = "Programlar";

//     ft_memmove(cdizi1, cdizi2, 10);

//     printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

//     return 0;
// }

