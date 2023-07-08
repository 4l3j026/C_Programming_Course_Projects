//#include <stdio.h>
//#include <stdlib.h>
//#include<stdbool.h>// Boolean variables.
//
//int main()
//{
//    //Variables.
//    bool  result;
//    //Console.
//    printf("Hi everyone and welcome to this XOR exercise!\n");
//    printf("Enter first boolean value: ");
//    scanf("%d", &value1);
//    printf("\nEnter second boolean value: ");
//    scanf("%d", &value2);
//    result = value1 ^ value2;
//    printf("\nThe XOR operation is: %d", result);
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Variables.
    int value1, value2;
    bool boolValue1, boolValue2, result;

    //Console.
    printf("Hi everyone and welcome to this XOR exercise!\n");
    printf("Enter first boolean value (0 or 1): ");
    scanf("%d", &value1);
    boolValue1 = (value1 != 0);

    printf("\nEnter second boolean value (0 or 1): ");
    scanf("%d", &value2);
    boolValue2 = (value2 != 0);

    result = boolValue1 ^ boolValue2;
    printf("\nThe XOR operation is: %d", result);

    return 0;
}
