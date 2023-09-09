#include"libft.h"

void *ft_memset(void *s,int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return(s);
}

// int main()
// {
// 	char str[] = "faruk";
// 	printf("önceki: %s\n", str);
// 	ft_memset(&str[1], 's', 3);
// 	printf("sonraki: %s\n", str);
// 	int array[3];
// 	array[0] = 0;
// 	array[1] = 1;
// 	array[2] = 2;
// 	printf ("arrayin önceki hali \n 0. index: %d\n 1. index: %d\n 2. index: %d\n", array[0], array[1], array[2]);
// 	ft_memset(&array[0], 5, 1 );
// 	ft_memset(&array[1], 5, 1 );
// 	ft_memset(&array[2], 5, 1 );


// 	printf ("arrayin sonraki hali \n 0. index: %d\n 1. index: %d\n 2. index: %d\n", array[0], array[1], array[2]);
// } 