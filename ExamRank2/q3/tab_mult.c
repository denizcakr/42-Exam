
#include "unistd.h"

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return res;
}

void ft_putnbr(int i)
{
    if(i > 9)
        ft_putnbr(i / 10);
    write(1, &"0123456789"[i % 10], 1);
}

void tab_mult(char *str)
{
    int i = 1;
    int n = ft_atoi(str);
    while(i <= 9)
    {
        ft_putnbr(i);
            write(1, " x ", 3);
        ft_putnbr(n);
            write(1, " = ", 3);
        ft_putnbr(i * n);
            write(1, "\n", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        tab_mult(av[1]);
    else
        write(1, "\n", 1);
}
