#include <stdio.h>
/*##############################################
 #                                             #
 #                                             #
 #            UNIT CONVERTER                   #
 #           Kristián Červenka                 #
 #           Matej Drienovský                  #
 #      Faculty of Informatics and Information #
 #               Technologies                  #
 #         Slovak Technical University         #
//##############################################
 */
void currency()
{}
void length()
{}
void weight()
{}
void temperature()
{}
int main() {
    printf("Hello, World!\n");
    int a=1;
    int b=6;
    int sum = a+b;
    printf("Sum is %d", sum);
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
