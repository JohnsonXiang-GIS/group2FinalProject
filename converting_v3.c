#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "converting.h"


// V3
void converting(void) {

	// Display the start message for the demo
	printf(" ***Start of Converting Strings to long Demo * **\n");

	// Declare a character array to store the user input string
	char longString[BUFFER_SIZE];

	// Declare a variable to hold the converted long integer
	long longNumber;

	// Loop until the user enters "q"
	do {
		// Prompt the user for a numeric string or 'q' to quit
		printf("Type the long numeric string (q - to quit):\n");

		// Read the input string from the user
		fgets(longString, BUFFER_SIZE, stdin);

		// Remove the newline character from the input string
		longString[strlen(longString) - 1] = '\0';

		// Check if the input is not "q"
		if ((strcmp(longString, "q") != 0)) {
			// Convert the string to a long integer using atol
			longNumber = atol(longString);

			// Display the converted number
			printf("Converted number is %1d\n", longNumber);
		}

		// Repeat loop until the user types "q"
	} while (strcmp(longString, "q") != 0);

	// Display end message for the demo
	printf(" *** End of Converting Strings to long Demo *** \n\n");
}
