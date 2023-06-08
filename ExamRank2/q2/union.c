
#include "unistd.h"

int check(char c, char *av, int a)
{
    int i = 0;
    while(i < a)
    {
        if(av[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if(ac == 3)
    {
        while(av[1][i])
            i++;
        while(av[2][j])
        {
            av[1][i] = av[2][j];
            i++;
            j++;
        }
        i = 0;
        while(av[1][i])
        {
            if(check(av[1][i], av[1], i) == 0)
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
