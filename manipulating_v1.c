
// MANIPULATING SOURCE
#define
CRT SECURE NO WARNINGS
#define BUFFER SIZE 80 #include "manipulating.h"
// V1
void manipulating (void) {
printf("*** Start of Concatenating Strings Demo ***\n"); char string1 [BUFFER_SIZE];
char
do {
string2 [BUFFER_SIZE];
-
to quit):\n");
printf("Type the 1st string (q fgets(string1, BUFFER_SIZE, stdin); string1 [strlen(stringl) - 1] = '\0'; if ((strcmp(stringl, "q") != 0)) {
-
printf("Type the 2nd string:\n"); fgets (string2, BUFFER_SIZE, stdin); string2[strlen(string2) - 1] = '\0'; strcat (string1, string2);
printf("Concatenated string is \'%s\'\n", string1);
} while (strcmp(string1, "q") != 0);
printf("*** End of Concatenating Strings Demo ***\n\n");
}