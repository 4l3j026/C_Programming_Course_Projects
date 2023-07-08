#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 0, result = 0, r = 4;
    printf("Hi and welcome to this program, enter a number: \n");
    scanf("%d", &n1);
    result = n1&r;
    printf("\nThe and gate operation between is: %d", result);


    return 0;
}
