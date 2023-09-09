#include "libft.h"

char *ft_strdup(const char *str)
{
	int i;
	char *dest;
	char *d;

	i = 0;
	d = ((dest = (char *)malloc(ft_strlen(str) * sizeof(char) + 1)));
	if(!d)
	{
		return (0);
	}
	while(str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}


