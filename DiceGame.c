#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lottery();

int main()
{
    int dice1, dice2;
    char str[50];

    srand(time(NULL));

    printf("What is.your name?\n");
    printf("> ");
    scanf("%s", str);
    printf("Hello, %s!\n", str);

    printf("Rolling dice...\n");
    dice1 = lottery();
    printf("Die 1: %d\n", dice1);
    dice2 = lottery();
    printf("Die 2: %d\n", dice2);
    printf("Total value: %d\n", dice1 + dice2);

    if (dice1 + dice2 > 7)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }

    return 0;
}

int lottery()
{
    return rand() % 6 + 1;
}