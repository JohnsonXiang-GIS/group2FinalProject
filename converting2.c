#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "converting.h"


// V2
void converting(void) {
    // Print the start message for the string-to-double conversion demo
    printf(" *** Start of Converting Strings to double Demo ***\n");

    // Declare a buffer to store user input and a variable for the converted double value
    char doubleString[BUFFER_SIZE];
    double doubleNumber;

    do {
        // Prompt the user to enter a numeric string or 'q' to quit
        printf("Type the double numeric string (q - to quit) :\n");

        // Read input from the user using fgets (includes the newline character)
        fgets(doubleString, BUFFER_SIZE, stdin);

        // Remove the trailing newline character from the input string
        doubleString[strlen(doubleString) - 1] = '\0';

        // If the input is not "q", convert the string to a double and display the result
        if ((strcmp(doubleString, "q") != 0)) {
            doubleNumber = atof(doubleString); // Convert string to double using atof
            printf("Converted number is %f\n", doubleNumber); // Display the converted value
        }

    } while (strcmp(doubleString, "q") != 0); // Repeat loop until user enters "q"

    // Print the end message for the demo
    printf(" *** End of Converting Strings to double Demo***\n\n");
}
