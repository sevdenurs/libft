#include "libft.h"


int ft_memcmp(const void* ptr1, const void* ptr2, size_t num) 
{
    
	
	const unsigned char* char_ptr1 = (const unsigned char*)ptr1;
    const unsigned char* char_ptr2 = (const unsigned char*)ptr2;
	size_t i = 0;
		
		while(i < num)
		{

        	if (char_ptr1[i] != char_ptr2[i]) 
			{
            	return char_ptr1[i] - char_ptr2[i];
      	  	
			}
			i++;
		}

    return 0;
}

// int main() {
//     int result = ft_memcmp("merhaba", "merhaba1", 7); // "merhaba" ve "merhaba1" dizilerinin ilk 7 karakterini karşılaştırıyoruz
    
//     if (result == 0) {
//         printf("Strings are equal.\n");
//     } else if (result < 0) {
//         printf("First string is smaller.\n");
//     } else {
//         printf("Second string is smaller.\n");
//     }
    
//     return 0;
// }