#include <stdio.h>
#include <stdlib.h>
//Main function
int main()
{
    //Variables
    int i = 0, Students_Num = 0;
    float Grade_1 = 0, Grade_2 = 0, Grade_3 = 0, Grade_4 = 0, Average = 0;
    //User menu
    printf("Hi welcome to this program to calculate average!\n");
    printf("Enter a number of students: ");
    scanf("%d", &Students_Num);
    //Take data with for loop
    for (i = 0; i <= Students_Num-1; i++){

        printf("\n\n\tEnter 4 grades of your college: ");
        printf("\n\nGrade 1: ");scanf("%f", &Grade_1);
        printf("\nGrade 2: ");scanf("%f", &Grade_2);
        printf("\nGrade 3: ");scanf("%f", &Grade_3);
        printf("\nGrade 4: ");scanf("%f", &Grade_4);
        Average = (Grade_1 + Grade_2 + Grade_3+ Grade_4)/4;
        printf("\n\nYour average grades is: %.2f ", Average);

    }

    return 0;

}
