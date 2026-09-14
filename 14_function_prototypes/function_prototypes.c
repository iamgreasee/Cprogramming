#include <stdio.h> 
#include <stdbool.h> 

// function prototype = A statement you list before the main function which provides the compiler with information about a function's: 
// 			name, return type, and parameters before its actual definition. 
// 			Enables type checking and allows functions to be used beofre they're defined. 
// 			Improves readability, organization, and helps prevent errors. 

void hello(char name[], int age);	// this is an example of a function protoype
					// without it, the hello function must be defined BEFORE the main function or else it cannot be called. It will just return an error. 
					// however this provides the compiler with the necessary information needed for the main function to execute.

bool ageCheck(int age); 

int main() { 
	

	hello("sponge bob", 30);

	if(ageCheck(20)){
		printf("you are old enough to work at the krusty crab"); 
	}
	else{
		printf("you must be at least 16 to work at the krusty crab"); 
	}
	return 0;
}

void hello(char name[], int age){	
	printf("hello %s\n", name); 
	printf("you are %d years old\n", age);
}

bool ageCheck(int age){
	if(age >=16){
		return true; 
	}
	else{
		return false; 
	}
	//return age >=16; 	// you could also just do this since the function is meant to return a boolean value, no need for the if statement. 

}

