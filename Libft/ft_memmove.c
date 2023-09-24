#include "libft.h"
#include <stdio.h>
#include <string.h>
void    *ft_memmove(void *dst, const void *src, size_t n){
    unsigned char *s = (unsigned char *)src;
unsigned char *d = (unsigned char *)dst;
size_t i;
i = 0;
    if(d > s){
        while (n-- > 0)
        {
            d[n] = s[n];
        }
        

    }
    else {
        while (i < n)
{
  d[i]=s[i];
  i++;
}
    }
    return dst;
}

