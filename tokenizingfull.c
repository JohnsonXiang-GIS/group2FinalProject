// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// Tokenizing Function
void tokenizing(void) {

	char userChoice[BUFFER_SIZE];

	do {
		printf("Demo 1 - Tokenizing Words\tDemo 2 - Tokenizing Phrases\tDemo 3 - Tokenizing Sentences\nChoice: ");

		fgets(userChoice, BUFFER_SIZE, stdin);

		userChoice[strlen(userChoice) - 1] = '\0';


		// V1
		if (strcmp(userChoice, "1") == 0) {
			printf("*** Start of Tokenizing Words Demo ***\n");
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
			printf("*** End of Tokenizing Words Demo ***\n\n");
		}
		else if (strcmp(userChoice, "2") == 0) {
			// V2
			printf("*** Start of Tokenizing Phrases Demo ***\n"); // Start Message to Indicate The Demo Type
			char    phrases[BUFFER_SIZE]; // Declare char variable "Phrases" with Buffer Size
			char* nextPhrase = NULL; // Declare char Variable "nextPhrase" with NULL value
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
		else if (strcmp(userChoice, "3") == 0) {
			// V3
			printf("*** Start of Tokenizing Sentences Demo ***\n"); // Start Message to Indicate The Demo Type
			char    sentences[BUFFER_SIZE]; // Declare char variable "sentences" with size of BUFFER_SIZE
			char* nextSentence = NULL; // Declare pointer type char variable "nextSentence" with no value.
			int     sentencesCounter; // Declare int variable sentencesCounter to 
			do {
				printf("Type a few sentences seperated by dot (q - to quit):\n"); // Prompt user with an outputted message 
				fgets(sentences, BUFFER_SIZE, stdin); // Asks user for input with newline character
				sentences[strlen(sentences) - 1] = '\0'; // Check for length of variable and add null terminator at the end
				if ((strcmp(sentences, "q") != 0)) { // If input does not equal to "q", continue
					nextSentence = strtok(sentences, "."); // Variable nextSentence equals to sentence variable seperated by a dot
					sentencesCounter = 1;
					while (nextSentence) {
						printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence); // Displays outputted message with the seperated sentences.
						nextSentence = strtok(NULL, "."); // Revert nextSentence back to NULL
					}
				}
			} while (strcmp(sentences, "q") != 0); // Loop until user inputs "q"
			printf("*** End of Tokenizing Sentences Demo ***\n\n"); // End Message
		}
	} while (strcmp(userChoice, "q") != 0);
}