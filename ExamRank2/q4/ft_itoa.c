
#include "stdio.h"
#include "stdlib.h"

char	*ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;
    char *res;

    if(nbr <= 0)
        len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    res = (char *)malloc(sizeof(char) * (len + 1));
    if(!res)
        return NULL;
    res[len] = '\0';
    if(nbr == 0)
    {
        res[0] = '0';
        return res;
    }
    if(nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        res[--len] = nbr % 10 + 48;
        nbr /= 10;
    }
    return res;
}

// OTHER SOLUTİON // BİR DİĞER ÇÖZÜM

#include "stdlib.h"

// int sayac(int i)
// {
//     int a = 0;
//     while(i)
//     {
//         i /= 10;
//         a++;
//     }
//     return a;
// }

// char    *ft_itoa(int nbr)
// {
//     char tmp[100];
//     char *res;
//     int i = sayac(nbr);
//     int j = 0;
//     int k = 0;

//     res = (char *)malloc(sizeof(char) * (i + 1));
//     if(!res)
//         return NULL;
//     if(nbr == 0)
//         return "0";
//     if(nbr == -2147483648)
//         return "-2147483648";
//     if(nbr < 0)
//     {
//         res[j] = '-';
//         nbr *= -1;
//         j++;
//     }
//     while(nbr)
//     {
//         tmp[k] = (nbr % 10) + 48;
//         nbr /= 10;
//         k++;
//     }
//     while(--k >= 0)
//     {
//         res[j] = tmp[k];
//         j++;
//     }
//     res[j] = '\0';
//     return res;
// }

// #include "stdio.h"
// int main()
// {
//     printf("%s", ft_itoa(-123));
// }
