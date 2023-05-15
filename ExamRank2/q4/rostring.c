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
