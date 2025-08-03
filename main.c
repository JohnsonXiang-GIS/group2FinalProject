#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"
#include "manipulating.h"
#include "tokenizing.h"
#include "converting.h"

void clearInputBuffer(void);

int main(void)
{

	int choice;
	int flag = 0;

	/*
	* Iterate until the user selects one of the following choices to demo
	* their desired module. If the user selects 0, exit the program. Otherwise, 
	* demo their selected string module. If the user does not enter something from 1-4,
	* handle the input by displaying an error message and get them to try again.
	*/
	do {
		printf("Which string manipulation module would you like to choose?\n");
		printf("0 - Exit, 1 - Indexing, 2 - Manipulation, 3 - Tokenizing, 4 - Converting\n");
		scanf("%d", &choice);


		if (choice == 1)
		{
			clearInputBuffer();
			fundamentals();

		}
		else if (choice == 2)
		{
			clearInputBuffer();
			manipulating();

		}
		else if (choice == 3)
		{
			clearInputBuffer();
			tokenizing();

	
		}
		else if (choice == 4)
		{
			clearInputBuffer();
			converting();

		}
		else if (choice == 0)
		{
			flag = 1;
		}
		else
		{
			printf("Please enter a valid input\n");
			clearInputBuffer();
		}


	} while (flag != 1);


	return 0;
}

/*clears the characters from standard input so
* that the user can enter a string properly
* and demo the module accurately
*/
void clearInputBuffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}