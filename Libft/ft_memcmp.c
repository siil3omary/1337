#include "libft.h"
int     ft_memcmp(const void *s1, const void *s2, size_t n){
    unsigned char *p1 = (unsigned char *)s1;
    unsigned char *p2 = (unsigned char *)s2;
        int i = 0;
    while (i < n)
    {
        if (p1[i] != p2[i])
        {
            return (int)(p1[i] - p2[i]);
        }
        
       i++;
    }
    return 0;
    
}