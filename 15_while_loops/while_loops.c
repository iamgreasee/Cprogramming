#include <stdio.h> 
#include <string.h>


// while loop = continue some code WHILE the condition remains true
// 		condition must be true for us to enter a while loop


int main(){
	
	int number = 0; 

	while(number <= 0){						// we only enter the loop if the condition is true 
		printf("enter a number greater than zero: "); 
		scanf("%d", &number);
	}

	int number2 = 1; 
	
	// a do while loop is a variation of a while loop where the while condition is checked at the end, or after the code is executed. 

	do{								// here the condition doesn't have to be true for the code to run ONCE. 
		printf("enter a second number greater than zero: ");	// this means the condition in the while statement can be false and the code will still run, it just won't loop
		scanf("%d", &number2); 
	}while(number2 <=0);						// if the condition is true the do statement will still loop like a normal while loop. 


	
		
	return 0; 
}
