#include <stdio.h>
#include <stdlib.h>
//Main function.
int main()
{
    //Variables.
    char Vowel;
    //Show in console.
    printf("Hello everyone, and welcome to this C program!\n");
    printf("Enter a single letter: ");
    scanf("%c", &Vowel);
    //Switch structure.
    switch(Vowel){
    case 'a':
        printf("\nYou entered an \"A\" vowel.");
        break;
    case 'e':
        printf("\nYou entered an \"E\" vowel.");
        break;
    case 'i':
        printf("\nYou entered an \"I\" vowel.");
        break;
    case 'o':
        printf("\nYou entered an \"O\" vowel.");
        break;
    case 'u':
        printf("\nYou entered an \"U\" vowel.");
        break;
    default:
        printf("\nThe letter entered is not a vowel. \n\n");
        break;
    }

    return 0;
}
