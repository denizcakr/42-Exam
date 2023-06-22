
#include "unistd.h"

void ft_putnbr(int i)
{
    if(i > 9)
        ft_putnbr(i / 10);
    write(1, &"0123456789"[i % 10], 1);
}

int main(int ac, char **av)
{
    (void)av;
    ft_putnbr(ac - 1);
    write(1, "\n", 1);
    return 0;
}
