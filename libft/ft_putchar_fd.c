#include "libft.h"
void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


// int main() {
//     int fd = 1;  // Örnek olarak standart çıkış (stdout) dosya tanımlayıcısı

//     ft_putchar_fd('c', fd);  // 'A' karakterini dosya tanımlayıcısına yazdır

//     return 0;
// }
