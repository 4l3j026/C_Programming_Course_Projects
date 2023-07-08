#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Variables.
   int Array_1[5];
   int Array_2[5];
   int Total_Array[10];

   //Console.
    printf("Welcome to this program!\n");
    printf("Enter 5 numbers: ");
    //Loop 1
    for (int i = 0; i < 5 ; i++){
        printf("\nEnter %d number: ", i+1);
        scanf("%d", &Array_1[i]);
    }
    printf("\nEnter 5 numbers to the array: ");
    //Loop 2
    for (int j = 0; j < 5 ; j++){
        printf("\nEnter %d number: ", j+1);
        scanf("%d", &Array_2[j]);
    }
    printf("\n\nTotal array is: ");
    //Loop 3
    for (int k = 0; k < 5; k++){
        Total_Array[k] = Array_1[k];
        printf("\nNumber in the position %d is: %d", k+1, Total_Array[k]);
    }
    for (int k = 0; k < 5; k++){
        Total_Array[k] = Array_2[k];
        printf("\nNumber in the position %d is: %d", k + 6, Total_Array[k]);
    }

    return 0;
}

