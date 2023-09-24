#include "libft.h"
void    *ft_memcpy(void *dst, const void *src, size_t n){
unsigned char *s = (unsigned char *)src;
unsigned char *d = (unsigned char *)dst;
size_t i;
i = 0;

while (i < n)
{
  d[i]=s[i];
  i++;
}
return dst;

}
