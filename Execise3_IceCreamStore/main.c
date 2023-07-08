#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Option;
    int Purchase = 0;
    float Total = 0;

    printf("\aHi and welcome to this program!\n\nEnter your subscription type: ");
    scanf("%c", &Option);

    switch(Option){
    case 'A':
        printf("\nYou've a 10%% discount of your purchase!\n");
        printf("\nEnter the value of your purchase: ");
        scanf("%d", &Purchase);
        Total = Purchase - (Purchase * 0.10);
        printf("\nThe final value of your purchase is: %.2f\n\n", Total);
        break;
    case 'B':
        printf("\nYou've a 15%% discount of your purchase!\n");
        printf("\nEnter the value of your purchase: ");
        scanf("%d", &Purchase);
        Total = (Purchase * 0.85);
        printf("\nThe final value of your purchase is: %.2f\n\n", Total);
        break;
    case 'C':
        printf("\nYou've a 20%% discount of your purchase!\n");
        printf("\nEnter the value of your purchase: ");
        scanf("%d", &Purchase);
        Total = Purchase - (Purchase * 0.20);
        printf("\nThe final value of your purchase is: %.2f \n\n", Total);
        break;
    default:
        printf("\n\n\tThe value entered is not valid!\n\n");
    }

    return 0;

}
