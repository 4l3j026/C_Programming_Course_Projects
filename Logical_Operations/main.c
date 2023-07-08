#include <stdio.h>
#include <stdlib.h>

/*Now I'm going to explain to about logical operator in C language for use. */

//Curious Note: When I add this symbols \a in console shows a specific sound.
//Curious Note: I can compile and run the code using CTRL+F10.

int main()  //Main Function.
{
    int a = 8, b = 10, c = 21, d = 0;

    printf("Hello world!");
    //The ">" symbol it's used to compare the variables.
    if (a > b){
        printf("\nThe larger number is: %i ", a);
    }else {
        printf("\nThe larger number is: %i ", b);
    }

    if (c){
        printf("\nThe number in C variable is grater than 0: %i", c);
    }
    if (!d) {
        printf("\nThe number in D variable is: %d", d);
    }

    return 0;
}
