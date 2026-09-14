#include <stdio.h> 
#include <stdbool.h>

bool ageCheck(int age){		// here the age variable from the main function is set as the parameter for the ageCheck function. 
	if(age >= 18){	        // checks if the value of age set by the user in the main function is greater than or equal to 18. 
		return true;	// returns true
	}
	else{
		return false; 	// if the value is not greater to or equal to 18, or the conditions for the if statement dont meet, the function returns false. 
	}
}

int main(){ 

	int age = 0;	// initializes the value of age and sets it to zero 

	printf("enter your age: ");	// asks the user to enter their age 
	scanf("%d", &age); 		// writes the value entered by the user to the address of the variable 'age'

	if(ageCheck(age)){			// if the ageCheck function, with the value of age argument, returns true
		printf("you are an adult\n"); 	// print this statement 
	}
	else{	                                       // if the function returns false 
		printf("you are not an adult\n");	// print this statement
	}

	return 0;
}
