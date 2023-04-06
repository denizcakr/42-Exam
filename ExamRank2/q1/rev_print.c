
#include "unistd.h"

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
            i++;
        i--;
        while(av[1][i])
            write(1, &av[1][i--], 1);
    }
    write(1, "\n", 1);
}

// 2. Yol (examda bu yol daha kesin olabilir (ama emin değilim..))

// #include "unistd.h"

// int main(int ac, char **av)
// {
//     int i = 0;
//     int a = 0;
//     if(ac == 2)
//     {
//         while(av[1][i])
//             i++;
//         i--;
//         char c;
//         int d;
//         d = i;
//         while(i > d / 2)
//         {
//             c = av[1][a];
//             av[1][a] = av[1][i];
//             av[1][i] = c;
//             i--;
//             a++;
//         }
//         a = 0;
//         while(av[1][a])
//             write(1, &av[1][a++], 1);
//     }
//     write(1, "\n", 1);
// }
