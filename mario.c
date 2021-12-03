#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    //getting height input from user
    do
    {
        n = get_int("Height: ");
    }
    //only accepting values between 1-8
    while (n < 1 || n > 8);

    //printing the blocks
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (a + b >= n - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        for (int c = 0; c < n; c++)
        {
            if (a + c >= n - 1)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
