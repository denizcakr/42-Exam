#include "unistd.h"

int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            while(av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
                i++;
            while(av[1][i] > 32 && av[1][i] < 127)
            {
                write(1, &av[1][i], 1);
                i++;
            }
            while((av[1][i] == ' ' && (av[1][i] >= 9 && av[1][i] <= 13) && (av[1][i+1] != '\0')))
                i++;
            if(av[1][i+1] != '\0' && av[1][i] != '\0')
                write(1, "   ", 3);
        }
    }
    write(1, "\n", 1);
}
