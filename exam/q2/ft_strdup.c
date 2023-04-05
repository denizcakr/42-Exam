
#include "stdlib.h"

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *s;

    while(src[len])
        len++;
    s = malloc(sizeof(char) * (len + 1));
    if(s != NULL)
    {
        while(src[i])
        {
            s[i] = src[i];
            i++;
        }
        s[i] = '\0';
    }
    return s;
}