#include <stdio.h>
#include <stdlib.h>
//Main function.
int main()
{
    //Variables.
    int Payment = 0, Total = 0;
    char Option;
    //Show menu in console.
    printf("Hi to all workers!\n");
    printf("Welcome to the Payment Menu \n\n");
    printf("A) Your payment is less than $2.000 \n");
    printf("B) Your payment is between $2.000 and &4.000 \n");
    printf("C) Your payment is between $4.000 and $6.000\n");
    printf("D) Your payment is greater than $6.000 \n");
    printf("\nChoose your payment option: ");
    scanf("%c", &Option);
    //Switch structure.
    switch(Option){
        //Case of A option.
        case 'a': //Two ways of the option.
        case 'A':
                printf("\nEnter your payment: ");
                scanf("%d", &Payment);
            if (Payment <= 2000){
                Total = Payment + (Payment * 0.20);
                printf("\nCongratulations, you have a surplus payment of 20%%!");
                printf("\nYour total payment is: %d \n\n", Total);
            } else {
                printf("\nYour payment is not does not match your selected option.\n\n");
            }
            break;
        //Case of B option.
        case 'b':
        case 'B':
                printf("\nEnter your payment: ");
                scanf("%d", &Payment);
            if (Payment > 2000 && Payment <= 4000){
                Total = Payment + (Payment * 0.10);
                printf("\nCongratulations, you have a surplus payment of 10%%!");
                printf("\nYour total payment is: %d \n\n", Total);
            } else {
                printf("\nYour payment is not does not match your selected option.\n\n");
            }
            break;
        //Case of C option.
        case 'c':
        case 'C':
                printf("\nEnter your payment: ");
                scanf("%d", &Payment);
            if (Payment > 4000 && Payment <= 6000){
                Total = Payment + (Payment * 0.05);
                printf("\nCongratulations, you have a surplus payment of 5%%!");
                printf("\nYour total payment is: %d \n\n", Total);
            } else {
                printf("\nYour payment is not does not match your selected option.\n\n");
            }
            break;
        //Case of D option.
        case 'd':
        case 'D':
                printf("\nEnter your payment: ");
                scanf("%d", &Payment);
            if (Payment > 6000){
                Total = Payment + (Payment * 0.03);
                printf("\nCongratulations, you have a surplus payment of 3%%!");
                printf("\nYour total payment is: %d \n\n", Total);
            } else {
                printf("\nYour payment is not does not match your selected option.\n\n");
            }
            break;
        //Default case.
        default:
            printf("\n\nYour option is not valid.\n\n");
            break;

    }

    return 0;
}
