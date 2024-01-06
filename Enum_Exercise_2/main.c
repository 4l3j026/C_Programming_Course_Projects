#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
     Project Description: What is the order of the D minor scale?
     Design a program to find the order of the notes, so the user
     enter a random integer number, the program show what is the
     position of the note inside D tonality.
*/

//Global variables.
uint8_t Note = 0;

//Structure
enum Notes{

    D = 1,
    E,
    F,
    G,
    A,
    Bb,
    C
};

//Main function.
int main()
{
    printf("Hello Musicians and welcome to this program!\n");
    printf("Enter an integer number between 1 and 7\nFor Know degrees of the D minor scale: ");
    scanf("%d", &Note);

    switch(Note){

    case D:
        printf("\n\a This is the first grade (D) of the D minor tonality.");
        break;

    case E:
        printf("\nThis is the second grade (E) of the D minor tonality.");
        break;

    case F:
        printf("\nThis is the third grade (F) of the D minor tonality.");
        break;

    case G:
        printf("\nThis is the fourth grade (G) of the D minor tonality.");
        break;

    case A:
        printf("\nThis is the fifth grade (A) of the D minor tonality.");
        break;

    case Bb:
        printf("\nThis is the sixth grade (Bb) of the D minor tonality.");
        break;

    case C:
        printf("\nThis is the seventh grade (C) of the D minor tonality.");
        break;

    default:
        printf("\nThis number not available");
        break;
    }
    return 0;
}
