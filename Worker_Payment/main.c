#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int pay = 0, total = 0;
    char worker[20], User[] = "User";

    printf("Welcome to this program %s!\n\a", User);
    printf("\nEnter name of the worker: ");
    scanf("%s", &worker);
    printf("\nHello %s worker! \n\nWhat's your payment?: ", worker);
    scanf("%d", &pay);
    if (pay >= 2000000){
        printf("\nCongratulations, You have an extra payment of 5%%");
        total = (pay + (0.05*pay));
        printf("\n\n Your total payment is: %i", total);
    }
    else {
        printf("\nAwesome, you've an extra payment of 10%%");
        total = (pay + (0.1*pay));
        printf(" and Your total payment is: %d\n", total);

    }

    return 0;
}




