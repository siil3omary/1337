#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle) {
    size_t haystack_len = ft_strlen(haystack);
    size_t needle_len = ft_strlen(needle);

    if (needle_len == 0) {
        return (char *)haystack;
    }

    size_t i = 0;
    while (i <= haystack_len - needle_len) {
        if (ft_strncmp(haystack + i, needle, needle_len) == 0) {
            return (char *)(haystack + i);
                   }
        i++;
    }

    return NULL; 
}
