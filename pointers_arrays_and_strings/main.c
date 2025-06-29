#include <stdio.h>
#include "main.h"

int main(void)
{
    int n = 0;
    printf("Avant : %d\n", n);
    reset_to_98(&n);
    printf("Après : %d\n", n);
    return 0;
}

