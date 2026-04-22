#include <stdio.h>

int main(void)
{

    int quarter = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int change, coins;

    do
    {
        printf("Change owed: \n");
        scanf(" %i", &change);
    }
    while (change < 0 );

    coins = change / quarter;
    change = change % quarter;

    coins += change / dimes;
    change = change % dimes;

    coins += change / nickels;
    change = change % nickels;

    coins += change / pennies;
    change = change % pennies;


    printf(" %i\n", coins);

    return 0;
}
