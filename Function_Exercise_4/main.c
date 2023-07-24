/*
    Project Description:
    This program consists of calculating geometric
    areas of figures required by user.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Library to use the Pi constant.

//Prototypes functions.
int User ();
void Areas ();

//Global variables.
int Option = 0; //Option of user.
//Dimensions of the figure variables.
    //Circle:
    float Radius = 0, Circle_Area = 0;
    //Square:
    float Square_Base = 0, Square_Height = 0, Square_Area = 0;
    //Rectangle:
    float Rectangle_Base = 0, Rectangle_Height = 0, Rectangle_Area = 0;
    //Triangle:
    float Triangle_Base = 0, Triangle_Height = 0, Triangle_Area = 0;

//Main function.
int main()
{
    printf("Hi and welcome user!\n");
    User();
    Areas();

    return 0;
}

//Develop of user function.
int User (){

    printf("\nChoose the option to calculate the area of figure: ");
    printf("\n1. Circle");
    printf("\n2. Square");
    printf("\n3. Rectangle");
    printf("\n4. Triangle\n");
    printf("\nOption: ");
    scanf("%d", &Option);
    return Option;

}

//Develop of areas function.
void Areas (){

    switch (Option){
    case 1: //Case for circle.
        printf("\nEnter dimensions of the circle: ");
        printf("\nRadius: ");
        scanf("%f", &Radius);
        Circle_Area = (M_PI * pow(Radius,2)); //Equation of the circle area using the constant M_PI
        printf("\nThe area of your figure selected is: %f", Circle_Area);
        break;
    case 2: //Case for square.
        printf("\nEnter dimensions of the square: ");
        printf("\nBase: ");
        scanf("%f", &Square_Base);
        printf("\nHeight: ");
        scanf("%f", &Square_Height);
        Square_Area = (Square_Base * Square_Height);
        printf("\nThe area of your figure selected is: %f", Square_Area);
        break;
    case 3: //Case for rectangle.
        printf("\nEnter dimensions of the rectangle: ");
        printf("\nBase: ");
        scanf("%f", &Rectangle_Base);
        printf("\nHeight: ");
        scanf("%f", &Rectangle_Height);
        Rectangle_Area = (Rectangle_Base * Rectangle_Height);
        printf("\nThe area of your figure selected is: %f", Rectangle_Area);
        break;
    case 4: //Case for triangle.
        printf("\nEnter dimensions of the triangle: ");
        printf("\nBase: ");
        scanf("%f", &Triangle_Base);
        printf("\nHeight: ");
        scanf("%f", &Triangle_Height);
        Triangle_Area = ((Triangle_Base * Triangle_Height)/2);
        printf("\nThe area of your figure selected is: %f", Triangle_Area);
        break;
    default:
        printf("\n\aThe option selected is not valid. ");
        break;
    }

}


