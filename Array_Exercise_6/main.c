//We have to sum the vowels of the word.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int Counter_1 = 0;
    char Word[50];
    //Console.
    printf("Hi everyone and welcome to this program!\n");
    printf("Enter any word: ");
    //Important Note:
    /*
    When you use the "scanf" function to read a string
    don't have to add "&" operator, it's not necessary
    and is not necessary add the index of the array.
    */
    gets(Word); //Is most easy with this function and it's the same thing.
    //scanf("%s", Word); //Takes the word entered and saves to array.
    printf("The entered word is: %s", Word); //Show word entered.

    /*
    This is a functional program, but there are some things
    and are so important to mention. The iteration limit
    of the for loop is determined by the null character ('\0')
    of the array. This way to for loop helps the code more flexible.
    So the limit evaluate the condition with the inequality operator (!=).
     */
    for (int i = 0; Word[i] != '\0'; i++){
        switch (Word[i]){
        case 'a': case 'A': Counter_1++; break;
        case 'e': Counter_1++; break;
        case 'i': Counter_1++; break;
        case 'o': Counter_1++; break;
        case 'u': Counter_1++; break;
        default: break;
        }
    }

    printf("\n\nThe number of vowels is: %d \n", Counter_1);


    return 0;
}

