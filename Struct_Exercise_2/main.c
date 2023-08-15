#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Calculate the average of the two students enter
        his personal info.
*/

//Prototype Functions.
void Require_Data (void);

//Develop the struct function.
struct Conservatory {

        int ID;
        char Name[30];
        char Instrument[16];
        float Grades[5];

};

//Main function.
int main()
{

    printf("Hello everyone and welcome to this program!\n\n");

    //Create instance of the struct
    struct Conservatory Student1;
    Require_Data();

    return 0;
}

//Develop function to require to user data.
void Require_Data (){

    printf("\nEnter the personal information of the student: ");
    printf("\nID: ");


}
