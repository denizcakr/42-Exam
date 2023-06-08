
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *s;
    size_t i;
    size_t len;

    i = 0;
    len = 0;
    while(str[len])
        i++;
    s = (char *)malloc(sizeof(char) * (len + 1));
    if(!s)
        return NULL;
    while(src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    return s;
}
