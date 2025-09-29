#include <cs50.h>
#include <stdio.h>

int main()
{
    long num = get_long("Number??");
    int len = 0;
    long temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        len++;
    }
    int sum = 0;

    for (long i = 10; i <= num; i *= 100)
    {
        int x = (num / i) % 10;
        if (x * 2 >= 10)
        {
            int z = (x * 2) % 10;
            int y = (x * 2) / 10;
            sum = sum + z + y;
        }
        else
        {
            sum = sum + (x * 2);
        }
    }

    for (long j = 1; j <= num; j *= 100)
    {
        int d = (num / j) % 10;
        sum = sum + d;
    }
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    if (len == 15 && (num / 10000000000000 == 34 || num / 10000000000000 == 37))
    {
        printf("AMEX\n");
    }
    else if (len == 16 && (num / 100000000000000 >= 51 && num / 100000000000000 <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((len == 13 && (num / 1000000000000) == 4) ||
             (len == 16 && (num / 1000000000000000) == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
