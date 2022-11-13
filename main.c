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
    int choice,choice_out;
    printf("####################################Currency converter####################################");
    printf("\nEnter 1 for converting from EUR to USD, GBP, JPY, CNY");
    printf("\nEnter 2 for converting from USD to EUR, GBP, JPY, CNY");
    printf("\nEnter 3 for converting from GBP to EUR, USD, JPY, CNY");
    printf("\nEnter 4 for converting from JPY to EUR, USD, GBP, CNY");
    printf("\nEnter 5 for converting from CNY to EUR, USD, GBP, JPY");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter your value in EUR: ");
            scanf("%f", &euro);
            printf("Choose the currency you'd like to convert to:\n");
            printf("1. USD\n");
            printf("2. GBP\n");
            printf("3. JPY\n");
            printf("4. CNY\n");
            printf("Enter your choice: ");
            scanf("%d", &choice_out);
            switch(choice_out)
            {
                case 1:
                    dollar = euro * 1.11;
                    printf("The amount of EUR you entered is equal to %.2f USD", dollar);
                    break;
                case 2:
                    pound = euro * 0.88;
                    printf("The amount of EUR you entered is equal to %.2f GBP", pound);
                    break;
                case 3:
                    yen = euro * 120.50;
                    printf("The amount of EUR you entered is equal to %.2f JPY", yen);
                    break;
                case 4:
                    yuan = euro * 7.70;
                    printf("The amount of EUR you entered is equal to %.2f CNY", yuan);
                    break;
                default:
                    printf("Invalid choice");
                    break;
            }
            // EUR to USD, GBP, JPY, CNY
            break;
        case 2:
            //USD to GBP, JPY, CNY,EUR
            printf("Enter your value in USD: ");
            scanf("%f", &dollar);
            printf("Choose the currency you'd like to convert to:\n");
            printf("1. EUR\n");
            printf("2. GBP\n");
            printf("3. JPY\n");
            printf("4. CNY\n");
            printf("Enter your choice: ");
            scanf("%d", &choice_out);
            switch(choice_out)
            {
                case 1:
                    euro = dollar * 0.90;
                    printf("The amount of USD you entered is equal to %.2f EUR", euro);
                    break;
                case 2:
                    pound = dollar * 0.79;
                    printf("The amount of USD you entered is equal to %.2f GBP", pound);
                    break;
                case 3:
                    yen = dollar * 108.50;
                    printf("The amount of USD you entered is equal to %.2f JPY", yen);
                    break;
                case 4:
                    yuan = dollar * 6.90;
                    printf("The amount of USD you entered is equal to %.2f CNY", yuan);
                    break;
                default:
                    printf("Invalid choice");
                    break;
            }
            break;
        case 3:
            //GBP to EUR, USD, JPY, CNY
            printf("Enter your value in GBP: ");
            scanf("%f", &pound);
            printf("Choose the currency you'd like to convert to:\n");
            printf("1. EUR\n");
            printf("2. USD\n");
            printf("3. JPY\n");
            printf("4. CNY\n");
            printf("Enter your choice: ");
            scanf("%d", &choice_out);
            switch(choice_out)
            {
                case 1:
                    euro = pound * 1.13;
                    printf("The amount of GBP you entered is equal to %.2f EUR", euro);
                    break;
                case 2:
                    dollar = pound * 1.26;
                    printf("The amount of GBP you entered is equal to %.2f USD", dollar);
                    break;
                case 3:
                    yen = pound * 137.50;
                    printf("The amount of GBP you entered is equal to %.2f JPY", yen);
                    break;
                case 4:
                    yuan = pound * 8.70;
                    printf("The amount of GBP you entered is equal to %.2f CNY", yuan);
                    break;
                default:
                    printf("Invalid choice");
                    break;
            }
            break;
        case 4:
            printf("Enter your value in JPY: ");
            scanf("%f", &yen);
            printf("Choose the currency you'd like to convert to:\n");
            printf("1. EUR\n");
            printf("2. USD\n");
            printf("3. GBP\n");
            printf("4. CNY\n");
            printf("Enter your choice: ");
            scanf("%d", &choice_out);
            switch(choice_out)
            {
                case 1:
                    euro = yen * 0.0083;
                    printf("The amount of JPY you entered is equal to %.2f EUR", euro);
                    break;
                case 2:
                    dollar = yen * 0.0092;
                    printf("The amount of JPY you entered is equal to %.2f USD", dollar);
                    break;
                case 3:
                    pound = yen * 0.0073;
                    printf("The amount of JPY you entered is equal to %.2f GBP", pound);
                    break;
                case 4:
                    yuan = yen * 0.063;
                    printf("The amount of JPY you entered is equal to %.2f CNY", yuan);
                    break;
                default:
                    printf("Invalid choice");
                    break;
            }
            //JPY to EUR, USD, GBP, CNY
            break;
        case 5:
            printf("Enter your value in CNY: ");
            scanf("%f", &yuan);
            printf("Choose the currency you'd like to convert to:\n");
            printf("1. EUR\n");
            printf("2. USD\n");
            printf("3. GBP\n");
            printf("4. JPY\n");
            printf("Enter your choice: ");
            scanf("%d", &choice_out);
            switch(choice_out)
            {
                case 1:
                    euro = yuan * 0.13;
                    printf("The amount of CNY you entered is equal to %.2f EUR", euro);
                    break;
                case 2:
                    dollar = yuan * 0.14;
                    printf("The amount of CNY you entered is equal to %.2f USD", dollar);
                    break;
                case 3:
                    pound = yuan * 0.11;
                    printf("The amount of CNY you entered is equal to %.2f GBP", pound);
                    break;
                case 4:
                    yen = yuan * 15.80;
                    printf("The amount of CNY you entered is equal to %.2f JPY", yen);
                    break;
                default:
                    printf("Invalid choice");
                    break;
            }
            break;
        default:
            printf("Invalid choice");
            break;
    }
} //just another tryout
void length() //length converter
{
    system("cls");
    int choice_in, choice_out;
    float value;
    printf("####################################Lenght converter####################################\n");
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
    printf("##########################################################################################\n");
    printf("Choose input unit: ");
    scanf("%d", &choice_in);
    switch(choice_in)
    {
        case 1:
                printf("Enter value in kilometers :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*1000);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*10000);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*100000);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*1000000);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*1000000000);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*1000000000000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*1093.61);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*3280.84);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*39370.1);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 2:
                printf("Enter value in meters :  ");
                scanf("%f ", &value);
                printf("Choose output unit: ");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.001);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*10);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*100);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*1000);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*1000000);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*1000000000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.000621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*1.09361);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*3.28084);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*39.3701);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 3:
                printf("Enter value in decimeters :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.0001);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.1);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*10);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*100);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*100000);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*100000000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.0000621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.109361);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*0.328084);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*3.93701);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 4:
                printf("Enter value in centimeters :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f  \n", value*0.00001);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.01);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*0.1);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*10);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*10000);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*10000000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.00000621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.0109361);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*0.0328084);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*0.393701);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 5:
                printf("Enter value in millimeters :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.000001);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.001);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*0.01);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*0.1);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*1000);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*1000000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.000000621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.00109361);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*0.00328084);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*0.0393701);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 6:
                printf("Enter value in micrometers :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.000000001);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.000001);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*0.00001);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*0.0001);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*0.001);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*1000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.000000000621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.00000109361);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*0.00000328084);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*0.0000393701);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 7:
                printf("Enter value in nanometers :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.000000000001);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.000000001);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*0.00000001);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*0.0000001);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*0.000001);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*0.001);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.000000000000621371192);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.00000000109361);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*0.00000000328084);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*0.0000000393701);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 8:
                printf("Enter value in miles :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*1.60934);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*1609.34);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*16093.4);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*160934);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*1609340);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*1609340000);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*1609340000000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*1760);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*5280);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*63360);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 9:
                printf("Enter value in yards :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.0009144);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.9144);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*9.144);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*91.44);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*914.4);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*914400);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*914400000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.000568182);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*3);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*36);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 10:    
                printf("Enter value in feet :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.0003048);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.3048);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*3.048);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*30.48);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*304.8);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*304800);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*304800000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.000189394);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.333333);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value*12);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;  
        case 11:
                printf("Enter value in inches :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilometers: %.2f \n", value*0.0000254);
                        break;
                    case 2 :
                        printf("Value in meters: %.2f \n", value*0.0254);
                        break;
                    case 3 :
                        printf("Value in decimeters: %.2f \n", value*0.254);
                        break;
                    case 4 :
                        printf("Value in centimeters: %.2f \n", value*2.54);
                        break;
                    case 5 :
                        printf("Value in millimeters: %.2f \n", value*25.4);
                        break;
                    case 6 :
                        printf("Value in micrometers: %.2f \n", value*25400);
                        break;
                    case 7 :
                        printf("Value in nanometers: %.2f \n", value*25400000);
                        break;
                    case 8 :
                        printf("Value in miles: %.2f \n", value*0.0000157828);
                        break;
                    case 9 :
                        printf("Value in yards: %.2f \n", value*0.0277778);
                        break;
                    case 10 :
                        printf("Value in feet: %.2f \n", value*0.0833333);
                        break;
                    case 11 :
                        printf("Value in inches: %.2f \n", value);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        default :
            printf("Invalid choice \n");
            break;
    }
}
void weight()
{
    system("cls");
    float value;
    int choice_out, choice_in;
    printf("#################################### Weight converter ####################################\n");
    printf("1 - Kilograms\n");
    printf("2 - Grams\n");
    printf("3 - Milligrams\n");
    printf("4 - Micrograms\n");
    printf("5 - Nanograms\n");
    printf("6 - Pounds\n");
    printf("7 - Tons\n");
    printf("##########################################################################################\n");
    printf("\nChoose input unit: ");
    scanf("%d", &choice_in);
    switch (choice_in)
    {
        case 1:
                printf("Enter value in kilograms :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilograms: %.2f \n", value);
                        break;
                    case 2 :
                        printf("Value in grams: %.2f \n", value*1000);
                        break;
                    case 3 :
                        printf("Value in milligrams: %.2f \n", value*1000000);
                        break;
                    case 4 :
                        printf("Value in micrograms: %.2f \n", value*1000000000);
                        break;
                    case 5 :
                        printf("Value in nanograms: %.2f \n", value*1000000000000);
                        break;
                    case 6 :
                        printf("Value in pounds: %.2f \n", value*2.20462);
                        break;
                    case 7 :
                        printf("Value in tons: %.2f \n", value*0.00110231);
                        break;
                    default :
                        printf("Invalid choice \n");
                        break;
                }
                break;
        case 2:
                printf("Enter value in grams :  ");
                scanf("%f ", &value);
                printf("Choose output unit:\n");
                scanf("%d", &choice_out);
                switch(choice_out)
                {
                    case 1 :
                        printf("Value in kilograms: %.2f \n", value*0.001);
                        break;
                    case 2 :
                        printf("Value in grams: %.2f \n", value);
                        break;
                    case 3 :
                        printf("Value in milligrams: %.2f \n", value*1000);
                        break;
                    case 4 :
                        printf("Value in micrograms: %.2f \n", value*1000000);
                        break;
                    case 5 :
                        printf("Value in nanograms: %.2f \n", value*1000000000);
                        break;
                    case 6 :
                        printf("Value in pounds: %.2f \n", value*0.00220462);
                        break;
                    case 7 :
                        printf("Value in tons: %.2f \n", value*0.00000110231);
                        break;
                    default : 
                        printf("Invalid choice \n");
                        break;
                }
                break;
                case 3 : 
                        printf("Enter value in milligrams :  ");
                        scanf("%f ", &value);
                        printf("Choose output unit:\n");
                        scanf("%d", &choice_out);
                        switch(choice_out)
                        {
                            case 1 :
                                printf("Value in kilograms: %.2f \n", value*0.000001);
                                break;
                            case 2 :
                                printf("Value in grams: %.2f \n", value*0.001);
                                break;
                            case 3 :
                                printf("Value in milligrams: %.2f \n", value);
                                break;
                            case 4 :
                                printf("Value in micrograms: %.2f \n", value*1000);
                                break;
                            case 5 :
                                printf("Value in nanograms: %.2f \n", value*1000000);
                                break;
                            case 6 :
                                printf("Value in pounds: %.2f \n", value*0.00000220462);
                                break;
                            case 7 :
                                printf("Value in tons: %.2f \n", value*0.00000000110231);
                                break;
                            default :
                                printf("Invalid choice \n");
                                break;
                        }
                        break;
                case 4 :
                        printf("Enter value in micrograms :  ");
                        scanf("%f ", &value);
                        printf("Choose output unit:\n");
                        scanf("%d", &choice_out);
                        switch(choice_out)
                        {
                            case 1 :
                                printf("Value in kilograms: %.2f \n", value*0.000000001);
                                break;
                            case 2 :
                                printf("Value in grams: %.2f \n", value*0.000001);
                                break;
                            case 3 :
                                printf("Value in milligrams: %.2f \n", value*0.001);
                                break;
                            case 4 :
                                printf("Value in micrograms: %.2f \n", value);
                                break;
                            case 5 :
                                printf("Value in nanograms: %.2f \n", value*1000);
                                break;
                            case 6 :
                                printf("Value in pounds: %.2f \n", value*0.00000000220462);
                                break;
                            case 7 :
                                printf("Value in tons: %.2f \n", value*0.00000000000110231);
                                break;
                            default :
                                printf("Invalid choice \n");
                                break;
                        }
                        break;
                case 5 :
                        printf("Enter value in nanograms :  ");
                        scanf("%f ", &value);
                        printf("Choose output unit:\n");
                        scanf("%d", &choice_out);
                        switch(choice_out)
                        {
                            case 1 :
                                printf("Value in kilograms: %.2f \n", value*0.000000000001);
                                break;
                            case 2 :
                                printf("Value in grams: %.2f \n", value*0.000000001);
                                break;
                            case 3 :
                                printf("Value in milligrams: %.2f \n", value*0.000001);
                                break;
                            case 4 :
                                printf("Value in micrograms: %.2f \n", value*0.001);
                                break;
                            case 5 :
                                printf("Value in nanograms: %.2f \n", value);
                                break;
                            case 6 :
                                printf("Value in pounds: %.2f \n", value*0.00000000000220462);
                                break;
                            case 7 :
                                printf("Value in tons: %.2f \n", value*0.00000000000000110231);
                                break;
                            default :
                                printf("Invalid choice \n");
                                break;
                        }
                        break;
                case 6 :
                        printf("Enter value in pounds :  ");
                        scanf("%f ", &value);
                        printf("Choose output unit:\n");
                        scanf("%d", &choice_out);
                        switch(choice_out)
                        {
                            case 1 :
                                printf("Value in kilograms: %.2f \n", value*0.453592);
                                break;
                            case 2 :
                                printf("Value in grams: %.2f \n", value*453.592);
                                break;
                            case 3 :
                                printf("Value in milligrams: %.2f \n", value*453592);
                                break;
                            case 4 :
                                printf("Value in micrograms: %.2f \n", value*453592000);
                                break;
                            case 5 :
                                printf("Value in nanograms: %.2f \n", value*453592000000);
                                break;
                            case 6 :
                                printf("Value in pounds: %.2f \n", value);
                                break;
                            case 7 :
                                printf("Value in tons: %.2f \n", value*0.0005);
                                break;
                            default :
                                printf("Invalid choice \n");
                                break;
                        }
                        break;
                case 7 :
                        printf("Enter value in tons :  ");
                        scanf("%f ", &value);
                        printf("Choose output unit:\n");
                        scanf("%d", &choice_out);
                        switch(choice_out)
                        {
                            case 1 :
                                printf("Value in kilograms: %.2f \n", value*907.185);
                                break;
                            case 2 :
                                printf("Value in grams: %.2f \n", value*907185);
                                break;
                            case 3 :
                                printf("Value in milligrams: %.2f \n", value*907185000);
                                break;
                            case 4 :
                                printf("Value in micrograms: %.2f \n", value*907185000000);
                                break;
                            case 5 :
                                printf("Value in nanograms: %.2f \n", value*907185000000000);
                                break;
                            case 6 :
                                printf("Value in pounds: %.2f \n", value*2000);
                                break;
                            case 7 :
                                printf("Value in tons: %.2f \n", value);
                                break;
                            default :
                                printf("Invalid choice \n");
                                break;
                        }
                        break;
                default :
                        printf("Invalid choice \n");
                        break;                    
    }
}
void temperature()
{
    float celsius, fahrenheit, kelvin;
    int choice,choice_out;
    //choose a unit
    printf("Temperature converter\n");
    printf("1. Celsius\n");
    //printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit\n ");
    //printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin\n");
    //printf("6. Kelvin to Fahrenheit\n");
    printf("Choose your option:\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius); //could have used strtof() but it's not supported by CodeBlocks
            //fahrenheit -> celsius [multiply by 1.8,or 9/5, then add 32]
            //fahrenheit = (celsius * 9/5) + 32;
            //int choice_out;
            printf("Choose output unit:\n");
            printf("1.Fahrenheit\n");
            printf("2.Kelvin\n");
            scanf( "%d", &choice_out);
            switch (choice_out)
            {
                case 1:
                    printf("Value in Fahrenheit: %.2f \n", (celsius * 9/5) + 32);
                    break;
                case 2:
                    printf("Value in Kelvin: %.2f \n", celsius + abs(absolute_zero));
                    break;
                default:
                    printf("Invalid choice \n");
                    break;
            }
            break;
       /* case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius); //strtof -> converts string to float
            //celsius -> kelvin [add 273.15]
            kelvin = celsius + abs(absolute_zero);
            printf("Temperature in Kelvin: %f\n", kelvin);
            break;*/
        case 3:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            //fahrenheit -> celsius [subtract 32, then multiply by 5/9]
            //celsius = (fahrenheit - 32) * n_val;
            //int choice_out;
            printf("Choose output unit:\n");
            printf("1. Celsius\n");
            printf("2. Kelvin\n");
            scanf( "%d", &choice_out);
            switch (choice_out)
            {
                case 1:
                    printf("Value in Celsius: %.2f \n", (fahrenheit - 32) * n_val);
                    break;
                case 2:
                    printf("Value in Kelvin: %.2f \n", (fahrenheit - 32) * n_val + abs(absolute_zero));
                    break;
                default:
                    printf("Invalid choice \n");
                    break;
            }
            //rintf("Temperature in Celsius: %f\n", celsius);
            break;
        /*case 4:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            //fahrenheit -> kelvin [temperature_fahrenheit + 459.67] * 5/9(n_val)
            kelvin = (fahrenheit + Rankine_scale) * n_val;
            printf("Temperature in Kelvin: %f\n", kelvin);
            break;*/
        case 5:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            //kelvin -> celsius [subtract 273.15]
            //celsius = kelvin - abs(absolute_zero);
            int choice_out;
            printf("Choose output unit:\n");
            printf("1. Celsius\n");
            printf("2. Fahrenheit\n");
            scanf( "%d", &choice_out);
            switch (choice_out)
            {
                case 1:
                    printf("Value in Celsius: %.2f \n", kelvin - abs(absolute_zero));
                    break;
                case 2:
                    printf("Value in Fahrenheit: %.2f \n", (kelvin - abs(absolute_zero)) * 9/5 + 32);
                    break;
                default:
                    printf("Invalid choice \n");
                    break;
            }
            //printf("Temperature in Celsius: %f\n", celsius);
            break;
        /*case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            //kelvin -> fahrenheit [temperature_kelvin * 9/5, or 1.8, then subtract 459.67]
            fahrenheit = kelvin * 9/5 - Rankine_scale;
            printf("Temperature in Fahrenheit: %f\n", fahrenheit);
            break;*/
        default:
            printf("Invalid option\n");
    }
}
int main() {
    system("cls");
    printf("#################################### Welcome to the converter! ####################################\n");
    printf("Press the key to choose your option:\n");
    printf("v - currency\n");
    printf("o - length\n");
    printf("h - weight\n");
    printf("t - temperature\n");
    printf("##########################################################################################\n");
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
