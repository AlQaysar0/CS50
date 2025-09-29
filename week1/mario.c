#include <cs50.h>
#include <stdio.h>

int main()
{

    int height;

    do
    {
        height = get_int("height:");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {

        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        for (int x = 0; x < i; x++)
        {
            printf("#");
        }
        printf("  ");

        for (int y = 1; y <= i; y++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
