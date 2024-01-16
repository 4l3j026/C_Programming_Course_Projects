#include <stdio.h>
#include <stdlib.h>


//Global variables.
int User_Var = 0;

union Conversion{

    int Value1_int [1];
    unsigned char Value1_char[2];

}Data;

int main()
{
    printf("Hello programmers and welcome to this code!\n");
    printf("Enter a integer: ");
    scanf("%d", &Data.Value1_int[0]);
    printf("\nValue entered for the user is: %i", Data.Value1_int[0]);
    printf("\nAnd his value in char is: %c", Data.Value1_char[0]);

    return 0;
}
