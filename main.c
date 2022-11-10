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
#define absolute_zero -273.15 // Absolute zero in Celsius
#define n_val 5/9  // Value for converting Fahrenheit to Celsius
#define Rankine_scale 459.67 // Rankine scale
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
    //choose a unit
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
            strtof("%f", &celsius);
            //fahrenheit -> celsius [multiply by 1.8,or 9/5, then add 32]
            fahrenheit = (celsius * 9/5) + 32;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            //celsius -> kelvin [add 273.15]
            kelvin = celsius + abs(absolute_zero);
            printf("Temperature in Kelvin: %f\n", kelvin);
            break;
        case 3:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            //fahrenheit -> celsius [subtract 32, then multiply by 5/9]
            celsius = (fahrenheit - 32) * n_val;
            printf("Temperature in Celsius: %f\n", celsius);
            break;
        case 4:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            //fahrenheit -> kelvin [temperature_fahrenheit + 459.67] * 5/9(n_val)
            kelvin = (fahrenheit + Rankine_scale) * n_val;
            printf("Temperature in Kelvin: %f\n", kelvin);
            break;
        case 5:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            //kelvin -> celsius [subtract 273.15]
            celsius = kelvin - abs(absolute_zero);
            printf("Temperature in Celsius: %f\n", celsius);
            break;
        case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            //kelvin -> fahrenheit [temperature_kelvin * 9/5, or 1.8, then subtract 459.67]
            fahrenheit = kelvin * 9/5 - Rankine_scale;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;
        default:
            printf("Invalid option\n");
    }
}
int main() {
    char branch;
    do {
        scanf("%c", &branch); //načítanie vetvy
        switch (branch) {
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
    } while (branch != 'k');
    return 0;
}//1
