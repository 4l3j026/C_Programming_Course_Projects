//Preprocessor.
#include <stdio.h>
#include <stdlib.h>
//Main function.
int main()
{
    //Variables.
    int Number;
    printf("Hello everyone and welcome to this code!\n");
    printf("Enter a equivalent number of the week: ");
    scanf("%d", &Number);
    //Switch Structure
    switch (Number){
    case 1:
        printf("\nThe day of the week is: Monday.");
        break;
    case 2:
        printf("\nThe day of the week is: Tuesday.");
        break;
    case 3:
        printf("\nThe day of the week is: Wednesday.");
        break;
    case 4:
        printf("\nThe day of the week is: Thursday.");
        break;
    case 5:
        printf("\nThe day of the week is: Friday.");
        break;
    case 6:
        printf("\nThe day of the week is: Saturday.");
        break;
    case 7:
        printf("\nThe day of the week is: Sunday.");
        break;
    default:
        printf("\nThe number is not the day of the week.");
        break;
    }
    return 0;
}
