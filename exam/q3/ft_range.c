
#include <stdlib.h>

int ft_abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

int *ft_range(int start, int end)
{
    int i = 0;
    int size = ft_abs(end - start);
    int *range = malloc(sizeof(int) * size + 1);
    if (!range)
        return NULL;

    if (start >= end)
    {
        while(start >= end)        
        {
            range[i] = start;
            start--;
            i++;
        }

        return range;
    }  
    while(start <= end)
    {
       range[i] = start;
       start++; 
       i++;
    }
    return range;
}
