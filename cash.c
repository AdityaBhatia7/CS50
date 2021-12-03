#include <stdio.h>
#include <math.h>
#include <cs50.h>

void quarter();
void dime();
void nickel();
void penny();
int coins = 0;
float n;
int cents;

int main(void)
{

    do
    {
        n = get_float("amount of change owed:");
    }
    while (n < 0);
    
    cents = round(n * 100);
    
    while (cents > 0)
    {
        if (cents >= 25)
        {
            quarter();
        }

        else if (cents < 25 && cents >= 10)
        {
            dime();
        }

        else if (cents < 10 && cents >= 5)
        {
            nickel();
        }
 
        else if (cents < 5 && cents >= 1)
        {
            penny();
        }
    }
    printf("%i.\n", coins);
}




// void for subtracting value of quarters
void quarter()
{
    cents -= 25;
    coins = coins + 1;
} 
// void for subtracting value of dimes
void dime()
{
    cents -= 10;
    coins = coins + 1;
}
// void for subtracting value of nickels
void nickel()
{
    cents -= 5;
    coins = coins + 1;
}
// void for subtracting value of pennies
void penny()
{
    cents -= 1;
    coins = coins + 1;
}
