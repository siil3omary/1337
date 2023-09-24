#include "libft.h"

void *ft_memset(void *b, int c, size_t len){
   size_t i = 0;
       char *s = (char*) b;
       while (i < len)
       {
     s[i++] = c;
       }
       

return b;
    
}



