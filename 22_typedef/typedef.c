#include <stdio.h>

typedef int Number; 

typedef char string[50]; 	// size needs to be specified.  

int main() {

	// typedef = reserved keyword that gives an existing datatype a "nickname"
	//           Helps simplify complex types and improves code readability. 
	//
	//           typedef existing_name = new_name; 

	/*
	Number x = 3; 
	Number y = 4; 
	Number z = x+y; 
	printf("%d", z); 
	*/ 
	
	string name = "paul logos"; 

	printf("%s", name); 

	return 0; 
}
