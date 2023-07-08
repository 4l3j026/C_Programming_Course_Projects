#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Global variables
    float n1 = 0, n2 = 0, n3 = 0, average = 0; //Clean the variables
    //Show in console
    printf("Welcome to average program!\a\n");
    printf("\n Enter your three grades: ");
    printf("\n Grade 1: ");
    scanf("%f", &n1);
    printf("\n Grade 2: ");
    scanf("%f", &n2);
    printf("\n Grade 3: ");
    scanf("%f", &n3);
    average = ((n1 + n2 + n3)/3);
    printf("\n\n The average of %.2f , %.3f and %.2f is: %.2f", n1, n2, n3, average);

    if(average >= 3.0) printf("\nCongratulations You passed the subject!");
    else printf("\nYou didn't pass the subject... :( ");

    return 0;
}
