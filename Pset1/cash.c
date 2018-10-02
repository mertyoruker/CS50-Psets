#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars = get_float ("Change owed: ");
    while (dollars < 0)
    {
        dollars = get_float ("Change owed: ");
    }
    int coins = round(dollars * 100);
    
    int count = 0;
    while (coins >= 25)
    {
        count = count + (coins / 25);
        coins = coins % 25;
    }
    while (coins >= 10)
    {
        count = count + (coins / 10);
        coins = coins % 10;
    }
    while (coins >= 5)
    {
        count = count + (coins / 5);
        coins = coins % 5;
    }
    while (coins >= 1)
    {
        count = count + (coins / 1);
        coins = coins % 1;
    }
    printf("%i\n", count);
}
