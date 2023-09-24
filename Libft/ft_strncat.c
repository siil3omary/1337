#include "libft.h"
char    *ft_strncat(char *s1, const char *s2, size_t n){
        int i = 0;
    while (s1[i])
    {
       i++;
    }
    size_t j = 0;
    while (s2[j] && j < n)
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
     return s1;
}