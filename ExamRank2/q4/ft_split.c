
#include "stdlib.h"

#define WD_NUM 1000
#define WD_LEN 1000

char **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **tab;

    i = 0;
    j = 0;
    tab = (char **)malloc(sizeof(**tab) * WD_NUM);
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        if(str[i] > 32)
        {
            k = 0;
            tab[j] = (char *)malloc(sizeof(char) * WD_LEN);
            while(str[i] > 32)
            {
                tab[j][k] = str[i];
                i++;
                k++;
            }
            tab[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    tab[j] = 0;
    return(tab);
}


// another code



// #include <unistd.h>
// #include <stdlib.h>

// void ft_putstr(char *str)
// {
//     int i = 0;
//     while(str[i])
//         write(1, &str[i++], 1);
// }

// int word_count(char *str)
// {
//     int i = 0;
//     int count = 0;
//     while(str[i] && str[i] <= 32)
//         i++;
//     while(str[i])
//     {
//         while(str[i] && !(str[i] <= 32))
//             i++;
//         count++;
//         while(str[i] &&  str[i] <= 32)
//             i++;
//     }
//     return (count);
// }

// char **ft_split(char *str)
// {
//     int i = 0;
//     int j = 0;
//     int x = 0;
//     int u = 0;
//     char **res = (char **)malloc(sizeof(char *) * (word_count(str) + 1));

//     while(str[i] && str[i] <= 32)
//         i++;
//     while(str[i])
//     {
//         j = 0, u= 0;
//         while(str[i + u] && !(str[i + u] <= 32))
//             u++;
//         res[x] = (char *)malloc(sizeof(char) * (u + 1));
//         while(str[i] && !(str[i] <=32))
//         {
//             res[x][j++] = str[i++];
//         }
//         res[x][j] = '\0';
//         x++;
//         while (str[i] && str[i] <=32)
//             i++;       
//     }
//     res[x] = NULL;
//     return(res);
// }
