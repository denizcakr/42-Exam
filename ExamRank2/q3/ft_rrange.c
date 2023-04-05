#include <stdlib.h>

int ft_abs(int n)
{
    if(n < 0)
        return -n;
    else
        return n;
}


int     *ft_rrange(int start, int end)
{
    int i = 0;
    int size = ft_abs(start - end);
    int *range = malloc(sizeof(int) * size + 1);
    if(!range)
        return NULL;
    
    if(end >= start)
    {
        while(end >= start)
        {
            range[i] = end;
            end--;
            i++;
        }
        return range;
    }
    while(end <= start)
    {
        range[i] = end;
        end--;
        i++;

    }
    return range;
}
