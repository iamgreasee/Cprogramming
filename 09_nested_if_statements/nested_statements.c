#include <stdio.h> 
#include <stdbool.h> 

// nested if statements

int main() {
	
	float price = 10.0f; 
	bool isStudent = 1;
	bool isSenior = 1; 

	// student = 10% discount 
	// senior = 20% discount 
	// student AND senior = 30% discount 


	if(isStudent) {								// This if statement checks if isSenior is true
		if(isSenior){							// This if statement is nested within the first if statement, 
										// so if isStudent is true, it also checks if isSenior is true and lowers the price accordingly
			printf("you get a senior discount of 20%\n");		
			printf("you get a student discount of 10%\n"); 
			price = price * 0.7;
		}
		else{								// This else statement outside the nested if statement returns the student discount ONLY
			printf("you get a student discount of 10%\n"); 
			price = price * 0.9; 
		}
	}
	else{
		if(isSenior) {							//This else statement outside the original isStudent if statement only returns the 
										// senior discount. so if the user is not a student but is a senior, this block of code is returned. 
			printf("you get a senior discount of 20%\n"); 
			price = price * 0.8; 
		}
	}
	
	printf("total: %.2f\n", price);	// prints the total accoring to the result of the if statements above

	return 0; 
}
