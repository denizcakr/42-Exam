#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"

void ft_write_num(int num)
{
    if(num > 9)
        ft_write_num(num / 10);
    write(1, &"0123456789"[num % 10], 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - 48;
        i++;
    }
    return(res);
}

int is_prime(int num)
{
    int i = 2;
    if(num <= 1)
        return 0;
    while(i < num)
    {
        if(num % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int num = ft_atoi(av[1]);
        int sum = 0;
        while(num > 0)
        {
            if(is_prime(num--))
                sum += num + 1;
        }
        ft_write_num(sum);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}