#include"libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;
	needle_len =ft_strlen(needle);

	if(needle_len == 0 || len < needle_len)
	{
		return NULL;
	}
	while (*haystack != '\0' && >= needle_len)
	{
		if(*haystack == *needle)
		{
			
		}
	}
	
}