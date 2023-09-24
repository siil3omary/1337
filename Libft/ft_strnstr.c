#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len = ft_strlen(needle);

    if (needle_len == 0) {
        return (char *)haystack;
    }

    size_t i = 0;
    while (haystack[i] != '\0' && i + needle_len <= len) {
        if (ft_strncmp(haystack + i, needle, needle_len) == 0) {
            return (char *)(haystack + i);
        }
        i++;
    }

    return NULL;
}
