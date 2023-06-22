
int base(char c)
{
    int i = 0;
    char a[] = "0123456789abcdef";
    char b[] = "0123456789ABCDEF";

    while(a[i])
    {
        if (a[i] == c || b[i] == c)
            return (i);
        i++;
    }
    return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (base(str[i]))
    {
        res *= str_base;
        res += base(str[i]);
        i++;
    }
    return (res * sign);
}
