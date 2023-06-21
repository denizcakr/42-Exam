
#include "unistd.h"

int main(int ac, char **av)
{
    int i = 0;
    int start;
    int end;
    int flag;
    if(ac == 2)
    {
        while(av[1][i])
            i++;
        while(i >= 0)
        {
            while(av[1][i] <= 32)
                i--;
            end = i;
            while(av[1][i] > 32)
                i--;
            start = i+1;
            flag = start;
            while(start <= end)
                write(1, &av[1][start++], 1);
            if(flag != 0)
                write(1, " " ,1);
        }
    }
    write(1, "\n", 1);
}



// #include "stdlib.h"

// char **ft_split(char *str)
// {
//     int i = 0;
//     int k = 0;
//     int j = 0;
//     char **tab;

//     tab = (char **)malloc(sizeof(**tab) * 9999);

//     while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
//         i++;
//     while(str[i])
//     {
//         if(str[i] > 32)
//         {
//             tab[j] = (char *)malloc(sizeof(char) * 9999);
//             k = 0;
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
//     if(ac == 2)
//     {
//         int i = 0;
//         int a = 0;
//         char **c = ft_split(av[1]);
//         while(c[i])
//             i++;
//         i--;
//         while(i >= 0)
//         {
//             a = 0;
//             while(c[i][a])
//             {
//                 write(1, &c[i][a++], 1);
//             }
//             if(i != 0)
//                 write(1, " ", 1);
//             i--;
//         }
//     }
//     write(1, "\n", 1);
// }
