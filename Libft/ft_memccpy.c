#include "libft.h"
void    *ft_memccpy(void *dst, const void *src, int c, size_t n){
unsigned char *s = (unsigned char *)src;
unsigned char *d = (unsigned char *)dst;
size_t i;
i = 0;

while (i < n)
{
  d[i]=s[i];
if (s[i] == c)
{
   return dst;
}

  i++;
}
return NULL;

}

