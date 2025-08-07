//FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"


void fundamentals(void)
{
	char userChoice[BUFFER_SIZE];

	do {
		printf("Which String Fundamental Module would you like to see? \n");
		printf("1 - Indexing\n");
		printf("2 - Measuring\n");
		printf("3 - Copying\n");
		printf("q - to quit\n");
		fgets(userChoice, BUFFER_SIZE, stdin);

		userChoice[strlen(userChoice) - 1] = '\0';

		//V1
		if (strcmp(userChoice, "1") == 0) {
			//initialize variables 
			printf("*** Start of Indexing Strings Demo ***\n");
			char buffer1[BUFFER_SIZE];
			char numInput[NUM_INPUT_SIZE];
			size_t position;

			/*
			* Ask a user to input their string
			* Then, ask the user to input a number to find the character at that index
			* If the number entered is too large, print a message
			* Otherwise, print the character found at the position
			* Repeat the process until the user enters in q to quit
			*/
			do
			{
				printf("Type not empty string (q - to quit): \n"); //prompt the user
				fgets(buffer1, BUFFER_SIZE, stdin); //read in the input from stdin, assign it to buffer1 with size = BUFFER_SIZE
				buffer1[strlen(buffer1) - 1] = '\0';//add the null terminator to the end of the string

				//if the user has not entered "q"
				if (strcmp(buffer1, "q") != 0)
				{
					//get user input of their desired string position
					printf("Type the character position within the string:\n");
					fgets(numInput, NUM_INPUT_SIZE, stdin);
					numInput[strlen(numInput) - 1] = '\0';//set the end of the input to the null terminator 
					position = atoi(numInput);//convert the string input to an integer

					//if the user has entered a number larger than the number of characters in the initial string input
					if (position >= strlen(buffer1))
					{
						//set position = 1 less than the strings length
						position = strlen(buffer1) - 1;

						//provide error to user
						printf("Too big... Position reduced to max. available\n");
					}

					printf("The character found at %d position is \'%c\'\n",
						(int)position, buffer1[position]);
				}
			} while (strcmp(buffer1, "q") != 0);
			printf("*** End of Indexing Strings Demo***\n\n");

//V2
		}
		else if (strcmp(userChoice, "2") == 0) {

			char buffer2[BUFFER_SIZE];
			//ask the user for an input until they enter q
			//if it is a valid input, 
			//print the length of the string that was entered by the user 
			do {
				printf("Type a string (q - to quit):\n");
				fgets(buffer2, BUFFER_SIZE, stdin);
				buffer2[strlen(buffer2) - 1] = '\0';
				if (strcmp(buffer2, "q") != 0)
					printf("The length of \'%s\' is %d characters\n",
						buffer2, (int)strlen(buffer2));

			} while (strcmp(buffer2, "q") != 0);

			printf("***End of Measuring Strings Demo ***\n\n");
		}


	} while ( strcmp(userChoice, "q") != 0 );




}



