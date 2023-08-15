#include <stdio.h>
#include <stdlib.h>

/*
    Project Description:
        Using struct function show the values of the variables.

*/

//Struct
struct Music{

    char Highs[10];
    char Mids[10];
    char Lows[10];

} Cello = {"A note.", "D & G notes.", "C note."};
//struct Music Violin = {"E note.", "A & D notes.", "G note."};

//Main function.
int main()
{
    printf("Hello everyone and welcome to this program!\n");
    printf("%s", Cello.Highs);
    return 0;
}


