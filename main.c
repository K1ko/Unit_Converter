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
//Probably add more constants for other scales cause of market demand
/*##############################################
 #                                             #
 #                                             #
 #            FUTURE IDEAS                     #
 #    Add live stock market watch (Kiko)       #
 #                                             #
 #      Faculty of Informatics and Information #
 #               Technologies                  #
 #         Slovak Technical University         #
//##############################################
 */

void currency()
{
    float amount;
    float dollar, euro, pound, yen, yuan;
    int choice;
    printf("####################################Currency converter####################################");
    printf("\nEnter 1 for converting from EUR to USD, GBP, JPY, CNY");
    printf("\nEnter 2 for converting from USD to EUR, GBP, JPY, CNY");
    printf("\nEnter 3 for converting from GBP to EUR, USD, JPY, CNY");
    printf("\nEnter 4 for converting from JPY to EUR, USD, GBP, CNY");
    printf("\nEnter 5 for converting from CNY to EUR, USD, GBP, JPY");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    printf("Enter the amount you'd like to convert:\n");
    scanf("%f", &amount);
    switch(choice)
    {
        case 1:
            // EUR to USD, GBP, JPY, CNY
            dollar = amount * 1.11;
            pound = amount * 0.88;
            yen = amount * 120.78;
            yuan = amount * 7.65;
            printf("The amount of %.2f EUR is equal to %.2f USD, %.2f GBP, %.2f JPY, %.2f CNY.", amount, dollar, pound, yen, yuan);
            break;
        case 2:
            //USD to GBP, JPY, CNY,EUR
            euro = amount * 0.90;
            pound = amount * 0.79;
            yen = amount * 109.11;
            yuan = amount * 6.91;
            printf("The amount of %.2f USD is equal to %.2f EUR, %.2f GBP, %.2f JPY, %.2f CNY.", amount, euro, pound, yen, yuan);
            break;
        case 3:
            //GBP to EUR, USD, JPY, CNY
            euro = amount * 1.13;
            dollar = amount * 1.26;
            yen = amount * 137.51;
            yuan = amount * 8.70;
            printf("The amount of %.2f GBP is equal to %.2f EUR, %.2f USD, %.2f JPY, %.2f CNY.", amount, euro, dollar, yen, yuan);
            break;
        case 4:
            //JPY to EUR, USD, GBP, CNY
            euro = amount * 0.0086;
            dollar = amount * 0.0091;
            pound = amount * 0.0073;
            yuan = amount * 0.064;
            printf("The amount of %.2f JPY is equal to %.2f EUR, %.2f USD, %.2f GBP, %.2f CNY.", amount, euro, dollar, pound, yuan);
            break;
        case 5:
            //CNY to EUR, USD, GBP, JPY
            euro = amount * 0.13;
            dollar = amount * 0.14;
            pound = amount * 0.11;
            yen = amount * 15.62;
            printf("The amount of %.2f CNY is equal to %.2f EUR, %.2f USD, %.2f GBP, %.2f JPY.", amount, euro, dollar, pound, yen);
            break;
        default:
            printf("Invalid choice");
            break;
    }
}
void length()
{
    int choice_in, choice_out;
    int value;
    printf("Choose input unit:\n");
    printf("1. Kilometer\n");
    printf("2. Meter\n");
    printf("3. Decimeter\n");
    printf("4. Centimeter\n");
    printf("5. Millimeter\n");
    printf("6. Micrometer\n");
    printf("7. Nanometer\n");
    printf("8. Mile\n");
    printf("9. Yard\n");
    printf("10. Foot\n");
    printf("11. Inch\n");
    scanf("%d", &choice_in);
    switch(choice_in)
    {
        case '1' :
                printf("Enter value in kilometers: ");
                scanf("%d ", &value);
                printf("Choose output unit:\n");
                break;
        case '2' :
        break;
        case '3' :
        break;
        case '4' :
        break;
        case '5' :
        break;
        case '6' :
        break;
        case '7' :
        break;
        case '8' :
        break;
        case '9' :
        break;
        case '10' :
        break;
        case '11' :
        break;
        default :
        printf("Zadaj cislo od 1 do 11\n");
    }
}
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
            scanf("%f", &celsius); //could have used strtof() but it's not supported by CodeBlocks
            //fahrenheit -> celsius [multiply by 1.8,or 9/5, then add 32]
            fahrenheit = (celsius * 9/5) + 32;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius); //strtof -> converts string to float
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
    