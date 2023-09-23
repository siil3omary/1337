#include "libft.h"

void *ft_memset(void *b, int c, size_t len){
   int i = 0;
       char *s = (char*) b;
       while (i < len)
       {
     s[i++] = c;
       }
       

return b;
    
}



