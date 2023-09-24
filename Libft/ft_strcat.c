#include "libft.h"
char    *ft_strcat(char *s1, const char *s2){
    int i = 0;
    while (s1[i])
    {
       i++;
    }
    int j = 0;
    while (s2[j])
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
     return s1;
}