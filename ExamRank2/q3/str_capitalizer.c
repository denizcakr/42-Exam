#include <unistd.h>

int main(int ac, char **av)
{
    if(ac >= 2)
    {
        int i = 1;
        int j = 0;
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z' && av[i][j - 1] <= 32)
                    av[i][j] -= 32;
                else if(av[i][j] >= 'A' && av[i][j] <= 'Z' && !(av[i][j - 1] <= 32))
                    av[i][j] += 32;
                write(1, &av[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}


// #include "unistd.h"

// int main(int ac, char **av)
// {
//     if(ac > 1)
//     {
//         int i = 1;
//         int j = 0;

//         while(i < ac)
//         {
//             j = 0;
//             while(av[i][j])
//             {
//                 while(av[i][j] >= 'A' && av[i][j] <= 'Z')
//                 {
//                     av[i][j] += 32;
//                 }
//                 j++;
//             }
//             if(av[i][0] >= 'a' && av[i][0] <= 'z')
//             {
//                 av[i][0] -= 32;
//             }
//             write(1, &av[i][0], 1);
//             j = 1;
//             while(av[i][j])
//             {
//                 if(av[i][j] <= 32 && (av[i][j + 1] >= 'a' && av[i][j + 1] <= 'z'))
//                 {
//                     av[i][j + 1] -= 32;
//                 }
//                 write(1, &av[i][j], 1);
//                 j++;
//             }
//             write(1, "\n", 1);
//             i++;
//         }
//     }
//     else
//         write(1, "\n", 1);
// }
