#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables.
    int Array[5], Total = 0, Array_Data[]= {2,4,8,10,12}, Total_AD = 0;
    //Show in console.
    printf("Hello everyone and welcome to this project!\n");
    for (int i = 0; i <= 4; i++){
        printf("\n\nEnter 5 integers numbers: ");
        scanf("%d", &Array[i]);
        printf("\nThe entered number is: %d", Array[i]);
        Total += Array[i];
        Total_AD += Array_Data[i];
    }
    printf("\n----------------------------------------------\n");
    printf("\n\nThe sum of all entered numbers is: %d\n\n", Total);
    printf("\n\nThe sum of the loaded array is: %d\n\n", Total_AD);
    return 0;
}

