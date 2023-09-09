#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;
	i  = 0;
	while(s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}


// int main() {
//     int fd = 1;  // Örnek olarak standart çıkış (stdout) dosya tanımlayıcısı
//     char *text = "Merhaba, bu bir ornek metindir.";

//     ft_putstr_fd(text, fd);  // Metni dosya tanımlayıcısına yazdır

//     return 0;
// }
