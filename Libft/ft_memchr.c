#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n){
    unsigned char *se = (unsigned char *)s;


size_t i;
i = 0;
  
while (i < n)
{
    if(se[i] == c){
        return &se[i]; 

    }
    i++;
}
return NULL;


}