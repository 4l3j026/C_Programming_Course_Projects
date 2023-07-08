#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables.
    int Array[5], Total = 0, Counter = 0;
    //Console.
    printf("Hi and welcome to this program!\n");
    printf("Enter 5 numbers: ");
    //For loop.
    for (int i = 0;i <= 4; i++){
        Counter++;
        printf("\nEnter %d number: ", Counter);
        scanf("%d", &Array[i]);
        Total += Array[i];

    }
    //If structure.
        //Here, the if control sentence evaluate % operator
        //to determinate if iT's an even number.
    //Important Note: By default, if control sentence evaluate
    //any variable of this way if you don't specify the condition.
    // --> Total == 1
    if (Total %2){
        printf("\nIs not an even number.\n\n");
    }else {
        printf("\nYour sum is: %d \nAnd is an even number!\n\n" , Total);
    }

    return 0;
}
