#include <stdio.h>

// variable scope - referts to where a variable is recognized and accessible.
// 		    variables can share the same name if they're in different scopes {} 

int result = 0; 	// this is known as a GLOBAL scope. this means that any scope within this file will recognise the scope of this variable since it is outside the main function. 

int add(int x, int y){
	int result = x + y; 
	return result; 
}

int subtract(int x, int y){
	int result = x - y; 
	return result; 
}

int main() {

	int x = 5; 
	int y = 6; 

	int result = subtract();

	printf("%d", result);
	return 0; 
}
