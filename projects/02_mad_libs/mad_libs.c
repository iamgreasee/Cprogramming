#include <stdio.h>
#include <string.h>


int main() {
	
	char adjective1[50] = ""; 
	char adjective2[50] = "";
	char adjective3[50] = ""; 
	char noun[50] = "";
	char verb[50] = ""; 

	printf("enter an adjetive: ");
	fgets(adjective1, sizeof(adjective1), stdin);
	adjective1[strlen(adjective1) - 1] = '\0';	// this gets rid of the newline fgets stores after pressing enter in the terminal
		

	printf("enter a noun: ");
	fgets(noun, sizeof(noun), stdin);
	noun[strlen(noun) - 1] = '\0';

	printf("enter an adjective again: ");
	fgets(adjective2, sizeof(adjective2), stdin);
	adjective2[strlen(adjective2) - 1] = '\0';

	printf("enter a verb (present): ");
	fgets(verb, sizeof(verb), stdin);
	verb[strlen(verb) - 1] = '\0';


	printf("enter an adjective again: ");
	fgets(adjective3, sizeof(adjective3), stdin);
	adjective3[strlen(adjective3) - 1] = '\0';

	printf("\nToday I went to a %s zoo.\n", adjective1);
	printf("In an exhibit, i saw a %s\n", noun);
	printf("%s was %s and %s\n", noun, adjective2, verb);
	printf("I was %s!\n", adjective3);


	return 0;
}
