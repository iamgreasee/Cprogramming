#include <stdio.h> 
#include <math.h>

// --- CALCULATOR PROGRAM


int main() {

	char operator = '\0'; 
	double num1 = 0.0; 
	double num2 = 0.0; 
	double result = 0.0; 

	printf("=== CALCULATOR PROGRAM ===\n");
	printf("enter the first number: "); 
	scanf("%lf", &num1); // scanf reads the number but leaves the \n (the enter key) in the buffer

	printf("enter the operator (+ - * /): "); 
	scanf(" %c", &operator);	// the space before the %c skips the leftover \n from the previous input 

	printf("enter the second number: ");
	scanf("%lf", &num2); 

	switch(operator) {
		case '+':
			result = num1 + num2; 
			break; 
		case '-': 
			result = num1 - num2; 
			break;
		case '*':
			result = num1 * num2; 
			break; 
		case '/': 
			if(num2 == 0){
				printf("you cannot divide by zero\n");
			} 
			else{
				result = num1 / num2; 
			}
			break;
		default: 
			printf("invalid\n");
			break;
	}

	printf("result: %.4lf\n", result); 

	return 0; 
}
