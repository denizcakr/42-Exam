#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
    int n = nbr;
    int len = 0;

    if (nbr <= 0)
    {
	len++;
    }
    while (n) 
    {
        n /= 10;
        len++;
    }
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL) 
    {
        return NULL;
    }
    result[len] = '\0';
    if (nbr == 0)
    {
	result[0] = '0';
	return(result);
    }
    if (nbr < 0) 
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while (nbr) 
    {
        result[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return result;
}


// OTHER SOLUTİON // BİR DİĞER ÇÖZÜM

// #include "stdlib.h"

// int check(int nbr)
// {
//     int i = 0;
//     if(nbr == 0)
//         return 1;
//     if(nbr < 0)
//     {
//         i++;
//         nbr *= -1;
//     }
//     while(nbr != 0)
//     {
//         i++;
//         nbr /= 10;
//     }
//     return i;
// }

// char	*ft_itoa(int nbr)
// {
//     int i = 1;
//     int len = check(nbr);
//     char *res = (char *)malloc(sizeof(char) * (len + 1));
//     if(!res)
//         return NULL;
//     res[len] = '\0';
//     if(nbr == 0)
//         res[0] = '0';
//     if(nbr < 0)
//     {
//         i = -1;
//         nbr *= -1;
//     }
//     len--;
//     while(nbr != 0)
//     {
//         res[len] = (nbr % 10) + 48;
//         nbr /= 10;
//         len--;
//     }
//     if(i == -1)
//         res[0] = '-';
//     return res;
// }
