#include <stdio.h>
#include <stdlib.h>

/*
    In this program we're going to write a simple code about the use of
    "gets()" function.
*/
int main()
{
    char Word [20];
    printf("Hello world!\n");
    printf("\nEnter a random word: ");
    //Use only for arrays or strings.
    gets(Word);
    //scanf("%d", &x);


    printf("\nThe entered word is: %s", Word);

    return 0;
}
