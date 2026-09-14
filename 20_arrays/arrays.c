#include <stdio.h> 
#include <string.h> 


int main() {

	// array - a fixed size collection of elements of the same data type. 
	// 	   (similar to a variable but it holds more than one value). 
	
	//int numbers[] = {10, 20, 30, 40, 50}; 	// each value in an array is an element (10, 20, 30, etc is an element). starts with 0 - remember that.
						// that means printf("%d", numbers[0]); will return 10. 

	//printf("%d", numbers);		// if you pass an array to a function (including printf) it decays into a pointer - outputs  -608115184
	
	//printf("%d", numbers[0]);

	//printf("%d", numbers[5]); 	// technically out of bounds - this won't return a value but some random garbage. 

	
	char grades[] = {'A', 'B', 'C', 'D', 'F'}; 
	printf("%c\n", grades[0]);
							// both arrays of characters 
	char name[] = "paul logos"; 
	printf("%c\n", name[1]);

	int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	//numbers[0] = 100; 	// you can directly change the value of one of the elements within an array. 
	//printf("the first value is now equal to: %d\n", numbers[0]);


	for(int i = 0; i < 5; i=i+1){		// sets the value (total index) to zero, loop if i is less than 5, increment by 1
		printf("%c\n", grades[i]);	// this prints each letter in the grades array one after the other - note that i must go in the square brackets.  
	}
	/*
	for(int i = 0; i < 5; i=i+1){
		printf("%d\n", numbers[i]);
	}
	*/
	for(int i = 0; i < strlen(name); i=i+1){
		printf("%c\n", name[i]);
	}
	
	//printf("%d", sizeof(numbers));		// this will give us the total bytes in the numbers array. 
	//printf("%d", sizeof(numbers[0]));   	// this will give us the size of a single value in the array. 
	
	int size = sizeof(numbers) / sizeof(numbers[0]); // this finds the size of every value within the array.
	
	for(int i = 0; i < size; i=i+1){
		printf("%d\n", numbers[i]);
	}


	return 0; 
}
