#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Total = 0;
    printf("Hi everyone and welcome to this simple code!\n");

    for (int i = 0;i <= 100;i++){
        Total += i;
        printf("\n The current total is: %d", Total);
    }
    return 0;
}
