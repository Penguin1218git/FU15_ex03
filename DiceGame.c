#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lottery();

int main()
{
    int dice1, dice2;

    srand(time(NULL));

    printf("Rolling dice...\n");
    dice1 = lottery();
    printf("Die 1: %d\n", dice1);
    dice2 = lottery();
    printf("Die 2: %d\n", dice2);
    printf("Total value: %d\n", dice1 + dice2);

    return 0;
}

int lottery()
{
    return rand() % 6 + 1;
}