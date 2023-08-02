//Libraries
#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Trough the pointers, we'll show array data.
*/

//Main function.
int main()
{
    //Variables.
    int Arr[] = {8,16,32,64,128};
    int *p;

    p = Arr;

    printf("Hello everyone and welcome to this exercise!\n");

    for (int i = 0; i < 5; i++){

          printf("\nThe current array data is: %d", *(p+i));

    }

    return 0;
}
