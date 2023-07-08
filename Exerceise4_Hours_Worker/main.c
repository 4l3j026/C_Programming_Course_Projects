#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hours = 0, Payment = 0;
    printf("Welcome worker!\nWhat's your number of hours worked?: ");
    scanf("%d", &Hours);
    if (Hours > 40){
        Payment = (Hours * 25000);
        printf("Ok, so cool!, your payment is: %d", Payment);
    }
    else {
        Payment = (Hours * 20000);
        printf("Your payment is: %d", Payment);
    }

    return 0;
}
