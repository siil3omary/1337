#include "libft.h"
void    ft_bzero(void *s, size_t n){
unsigned char *p = (unsigned char *)s;
size_t i;
i = 0;
while (i < n )
{
    p[i++] = 0;
}

}