#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Calculate the average of the two students enter
        his personal info.
*/

//Prototype Functions.
void Require_Data ();

//Develop the struct function.
struct Conservatory {

        int ID;
        char Name[30];
        char Instrument[16];
        float Grades[5];

}Student1; //First way.

struct Conservatory Student2; //Second way.

//There are two ways to create structure variable like first or the second way.

//Main function.
int main()
{

    printf("Hello everyone and welcome to this program!\n");

    //Create instance of the struct
    Require_Data();

    return 0;
}

//Develop function to require to user data.
void Require_Data (){

    printf("\nEnter the personal information of the student: \n");
    printf("\nName: ");
    gets(Student1.Name);
    printf("\nID: ");
    scanf("%d", &Student1.ID);
    printf("\nInstrument: ");
    scanf("%s", &Student1.Name);
    for (int i = 0; i < 5; i++){
        printf("\nEnter note %d :", i+1);
        scanf("%f", &Student1.Grades[i]);
    }

}
