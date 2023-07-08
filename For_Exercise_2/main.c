#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Total = 0;
    printf("Hi everyone and welcome to this program!\n");
    for (int i = 2;i <= 100;i += 2){
        Total += i;
        printf("\nTotal of the sum is: %d", Total);
    }
    return 0;
}
