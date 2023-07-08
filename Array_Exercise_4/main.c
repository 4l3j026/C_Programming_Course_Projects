#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables.
    int Array[5], Total_Sum = 0, Total_Product = 1, Total_Subtract = 0, Average = 0;
    //Console.
    printf("Hi welcome to this program!\n");
    printf("Enter 5 numbers: \n");
    //For loop.
    for (int i = 0; i < 5; i++){
        printf("Number %d : ", i+1);
        scanf("%d", &Array[i]);
        Total_Sum += Array[i];
        //Total_Subtract = Array[0] - Array[i+1];
        Total_Product *= Array[i];
    }

    Average = Total_Sum / 5;
    printf("\nThe sum of entered numbers is: %d ", Total_Sum);
    //printf("\nThe subtract of entered numbers is: %d ", Total_Subtract);
    printf("\nThe product of entered numbers is: %d ", Total_Product);
    printf("\nThe average of entered numbers is: %d \n", Average);

    return 0;
}

