#include <stdio.h>
/*##############################################                            ############################################
 #                                             #                            #              USED LIBRARIES + CONSTANTS  #
 #                                             #                            #               <stdio.h>                  #
 #            UNIT CONVERTER                   #                            #               <math.h>                   #
 #           Kristián Červenka                 #                            #               <stdlib.h>                 #
 #           Matej Drienovský                  #                            #               <time.h>                   #
 #      Faculty of Informatics and Information #                            #                                          #
 #               Technologies                  #                            #                                          #
 #         Slovak Technical University         #                            #                                          #
//##############################################                            ############################################
 */
#include <math.h>
#include <stdlib.h>
#define absolute_zero abs(-273.15) // Absolute zero in Celsius
void currency()
{}
void length()
{}
void weight()
{}
void temperature()
{
    float celsius, fahrenheit, kelvin;
    int choice;
    printf("Temperature converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n ");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Choose your option:\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            kelvin = celsius + absolute_zero;
            printf("Temperature in Kelvin: %f\n", kelvin);
            break;
        case 3:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * 5/9;
            printf("Temperature in Celsius: %f\n", celsius);
            break;
        case 4:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            kelvin = (fahrenheit + 459.67) * 5/9;
            printf("Temperature in Kelvin: %f\n", kelvin);
            break;
        case 5:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            printf("Temperature in Celsius: %f\n", celsius);
            break;
        case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            fahrenheit = kelvin * 9/5 - 459.67;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;
        default:
            printf("Invalid option\n");
    }
}
int main() {
    printf("Hello, World!\n");
    /*int a=1;
    int b=6;
    int sum = a+b;
    printf("Sum is %d", sum);*/
    //toto je test
    char vetva;
    do {
        scanf("%c", &vetva); //načítanie vetvy
        switch (vetva) {
            case 'v': //postupné volanie funkcii
                currency();
                break;
            case 'o':
                length();
                break;
            case 'h':
                weight();
                break;
            case 't':
                temperature();
                break;
//test.2
        }
    } while (vetva != 'k');
    return 0;
}//1
