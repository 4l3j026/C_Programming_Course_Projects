#include <stdio.h>
#include <stdlib.h>

int main()
{
//    //Variables
//    int a = 0, b = 4;
//    if (a){
//        printf("The number is different 0\a\n");
//    }
//    else if (!a){
//        printf("\n\aThe number is equal to 0");
//    }

    //Variables
    int a = 0, b = 4;

        printf("\a\nEnter a random number: ");
        scanf("%d", &a);

    if (!a){
        printf("\n\aThe number is equal to 0");
    }

    return 0;
}
