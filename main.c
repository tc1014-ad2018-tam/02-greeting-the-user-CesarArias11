/*
 * This program will greet the user depending on the time.
 *
 * Author: Cesar Alejandro Arias Perales
 * Date: August 26th, 2018
 * Email: a01411995@itesm.mx
 */

#include <stdio.h>

// Here I declare the variables
int main() {
    int hour;
    char term;

    // Here I ask the user for the time
    printf("What time is it?\n");

    // Here I validate that the user's inputs are integers only. In case they're not the program will ask him/her to submit integers.
    if(scanf_s("%i%c", &hour, &term) != 2 || term != '\n'){
        printf("The hour is not valid.\n");
        printf("Write integers only.\n");
        return 0;
    }
    // Here the program greets the user depending on the hour submitted.
    if (hour < 0 || hour > 24) {
        printf("The hour is not valid.\n");
    } else if (hour < 12 && hour > 2 ) {
        printf("Good morning!\n");
    } else if ( hour >= 12 && hour < 19){
        printf("Good afternoon!\n");
    } else if ( hour >= 19 && hour < 22) {
        printf("Good evening!");
    } else {
        printf("Good night!");
    }
    return 0;
}