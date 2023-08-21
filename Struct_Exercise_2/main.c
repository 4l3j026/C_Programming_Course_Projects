#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Calculate the average of the two students and enter
        his personal info.
*/

//Prototype Functions.
void Require_Data ();
void Average();

//Develop the struct function.
struct Conservatory {

        int ID;
        char Name[30];
        char Instrument[16];
        float Grades[5];
        float Total_Sum;
        float Result;

}Student1; //First way.

struct Conservatory Student2; //Second way.

//There are two ways to create structure variable like first or the second way.

//Main function.
int main()
{

    printf("Hello everyone and welcome to this program!\n");

    //Calling functions.
    Require_Data();
    Average();

    return 0;
}

//Develop function to require to user data.
void Require_Data (){

    //Personal Data of the student.
    printf("\nEnter the personal information of the student: \n");
    printf("\nName: ");
    gets(Student1.Name);
    printf("\nID: ");
    scanf("%d", &Student1.ID);
    printf("\nInstrument: ");
    scanf("%s", &Student1.Name);
    //Take data for the array.
    for (int i = 0; i < 5; i++){
        printf("\nEnter note %d :", i+1);
        scanf("%f", &Student1.Grades[i]);
        Student1.Total_Sum += Student1.Grades[i];
    }

}

//Development average function.
void Average (){

    //Using variables of the struct function to calculate the average.
    Student1.Result = Student1.Total_Sum /5;
    printf("\nThe average of student is: %.2f", Student1.Result);

}

