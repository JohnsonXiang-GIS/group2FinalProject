// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizingv2.h"

// Tokenizing Function
void tokenizing(void) { 
	//V1
	/*printf("*** Start of Tokenizing Words Demo ***\n"); 
	char    words[BUFFER_SIZE];
	char* nextWord = NULL;
	int     wordsCounter;
	do {
		printf("Type a few words seperated by space (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);
		words[strlen(words) - 1] = '\0';
		if (strcmp(words, "q") != 0) {
			nextWord = strtok(words, " ");
			wordsCounter = 1;
			while (nextWord) {
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
				nextWord = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0);
	printf("*** End of Tokenizing Words Demo ***\n\n");*/

	//V2
	printf("*** Start of Tokenizing Phrases Demo ***\n"); // Start Message to Indicate The Demo Type
	char    phrases[BUFFER_SIZE]; // Declare char variable "Phrases" with Buffer Size
	char*   nextPhrase = NULL; // Declare char Variable "nextPhrase" with NULL value
	int     phrasesCounter; // Declare int variable "phrasesCounter" without any value yet
	do {
		printf("Type a few phrases seperated by comma (q - to quit):\n"); // Print statement asking user to type a phrase seperated by a comma
		fgets(phrases, BUFFER_SIZE, stdin); // Asks for user input with newline character
		phrases[strlen(phrases) - 1] = '\0'; // Check for length of phrase and add a null terminator
		if ((strcmp(phrases, "q") != 0)) { // If the phrase is not "q" (character to quit the program), seperate words through comma
			nextPhrase = strtok(phrases, ","); // strtok tokenizes the inputted phrase that has a comma
			phrasesCounter = 1; 
			while (nextPhrase) {
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); // Displays tokenized phrases
				nextPhrase = strtok(NULL, ",");
			}
		}
	} while (strcmp(phrases, "q") != 0); // Continue until user inputs "q"
	printf("*** End of Tokenizing Phrases Demo ***\n\n"); // End Message 

}
