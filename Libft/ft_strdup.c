#include "libft.h"
#include <stdlib.h>
char    *ft_strdup(const char *s1){
char *dst;
    if(!( dst = malloc(sizeof(char) * (ft_strlen(s1) +1)))){
        return NULL;
    }
    int i = 0;
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}