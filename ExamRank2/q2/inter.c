#include "unistd.h"

int check(char c, char *av)
{
    int i = 0;
    while(av[i])
    {
        if(av[i] == c)
            return 1; 
        i++;
    }
    return 0;
}

int check_2(char c, char *av, int a)
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
    if(ac == 3)
    {
        int i = 0;
        while(av[1][i])
        {
            if(check(av[1][i], av[2]) == 1)
            {
                if(check_2(av[1][i], av[1], i) == 0)
                {
                    write(1, &av[1][i], 1);
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
