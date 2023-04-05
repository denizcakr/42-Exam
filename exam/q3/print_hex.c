#include "unistd.h"

int ft_atoi(char *str)
{
    int i = 0;
    while(*str)
    {
        i = i * 10;
        i = i + *str - '0';
        ++str;
    }
    return(i);
}

void    print_hex(int i)
{
char    hex_digit[] = "0123456789abcdef";

    if(i >= 16)
        print_hex(i / 16);
    write(1, &hex_digit[i % 16], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
}
