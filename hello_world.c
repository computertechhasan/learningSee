/* 
Comments are the same
*/
#include <stdio.h>
#include <string.h>

#define MY_CONST "I am a const"

int globalInt = 0;

int main() {
    char a_char = 'D';
    int age = 21;
    long int biggest = 327670000;
    float deci_test = 3.14;

    printf("Hello, World!");
    printf("\n");
    printf("To print an int put a %d \n", age);
    printf("To print a float put a %.2f \n", deci_test);
    printf("To print a char put a %c \n", a_char);

    char my_name[50] = "Hasan";
    printf("To print a char array %s \n", my_name);
    strcpy(my_name, "Strings are immutable, so we use strcopy");
    printf("Now its %s \n", my_name);

}