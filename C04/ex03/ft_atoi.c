#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    i = 0;
    int base;
    base = 0;
    int sign;
    sign = 1;
    while(str[i] == ' ')
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        sign = 1 - 2 * (str[i++] == '-');
    }
    while(str[i] < '0' || str[i] > '9')
    {
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        if(base > 2147483647 / 10 || (base == 2147483647 / 10 && str[i] - '0' > 7))
        {
            if(sign == 1)
            {
                return 2147483647;
            }
            else
            {
                return -2147483647;
            }
            base = 10 * base + (str[i++] - '0');
        }
    }
    return(base * sign);
}

