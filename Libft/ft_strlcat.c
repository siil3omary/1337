#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    size_t i = 0;

    if (size <= dest_len)
        return (size + src_len);

    while (src[i] != '\0' && dest_len + i < size - 1) {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return (dest_len + src_len);
}
