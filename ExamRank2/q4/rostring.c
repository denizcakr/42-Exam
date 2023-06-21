#include "unistd.h"

int main(int ac, char **av)
{
    int i = 0;
    int a = 0;

    if(ac > 1)
    {
        while(av[1][i] <= 32 && av[1][i])
            i++;
        while(av[1][i] > 32 && av[1][i])
            i++;
        while(av[1][i])
        {
            if(av[1][i] > 32)
            {
                while(!(av[1][i] < 32) && (av[1][i] != 32))
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
            else
                i++;
        }
        while(av[1][a] <= 32)
            a++;
        while(av[1][a] > 32)
        {
            write(1, &av[1][a], 1);
            a++;
        }
    }
    write(1, "\n", 1);
}

#include "stdlib.h"

// char    **ft_split(char *str)
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     char **tab;

//     tab = (char **)malloc(sizeof(**tab) * 9999);

//     while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
//         i++;
//     while(str[i])
//     {
//         if(str[i] > 32)
//         {
//             k = 0;
//             tab[j] = (char *)malloc(sizeof(char) * 9999);
//             while(str[i] > 32)
//             {
//                 tab[j][k] = str[i];
//                 i++;
//                 k++;
//             }
//             tab[j][k] = '\0';
//             j++;
//         }
//         else
//             i++;
//     }
//     tab[j] = 0;
//     return tab;
// }

// #include "unistd.h"
// int main(int ac, char **av)
// {
//     if(ac > 1)
//     {
//         char **res = ft_split(av[1]);
//         int n = 1;
//         int i = 0;
//         while(res[n])
//         {
//             i = 0;
//             while(res[n][i])
//             {
//                 write(1, &res[n][i], 1);
//                 i++;
//             }
//             write(1, " ", 1);
//             n++;
//         }
//         i = 0;
//         while(res[0][i])
//         {
//             write(1, &res[0][i], 1);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }
