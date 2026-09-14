#include <stdio.h> 
#include <stdlib.h> 

// realloc() = reallocation - resize previously allocated memory 
// realloc(pointer, new_size_in_bytes) returns new address, copies old data

int main() {

	// STEP 1: Ask user how many prices to store initially
	int number = 0; 
	printf("enter number of prices: "); 
	scanf("%d", &number); 

	// STEP 2: Allocate memory on heap for that many floats
	// malloc returns address of allocated memory, we store it in prices pointer
	float *prices = malloc(number * sizeof(float)); 
	// Example: if number = 3, we allocate 3 * 4 = 12 bytes

	// STEP 3: Check if malloc succeeded
	if(prices == NULL){
		printf("error allocating memory"); 
		return 1; 
	}

	// STEP 4: Get prices from user and store in allocated memory
	// Loop from 0 to number-1, ask for each price, store at prices[i]
	for(int i = 0; i < number; i=i+1){ 
		printf("enter price #%d: ", i + 1);
		scanf("%f", &prices[i]);  // &prices[i] = address of element i
	}

	// STEP 5: User wants to resize the array
	int newNumber = 0; 
	printf("enter a new number of prices: "); 
	scanf("%d", &newNumber);  // Example: user enters 5 (was 3 before)

	// STEP 6: Use realloc to resize the memory block
	// realloc does three things:
	//   1. Finds newNumber * sizeof(float) bytes of memory
	//   2. Copies old data (the 3 prices) to new location
	//   3. Returns address of new memory block
	// We use temp pointer to store this new address (safer than overwriting prices)
	float *temp = realloc(prices, newNumber * sizeof(float));

	// STEP 7: Check if realloc succeeded
	if(temp == NULL){
		printf("could not reallocate memory\n"); 
		// If realloc fails, old memory (prices) still exists and is still valid
		// We could free it here, but for this example we're leaving it
	}
	else{
		// STEP 8: Realloc succeeded, update prices to point to new memory
		prices = temp;  // Now prices points to new 5-element array (with old 3 values intact)

		// STEP 9: Ask for ONLY the new prices (prices #4 and #5, not #1-#3 again)
		// Loop starts at 'number' (3), ends before 'newNumber' (5)
		// So i goes: 3, 4 (skips 0, 1, 2 which already exist)
		for(int i = number; i < newNumber; i=i+1){
			printf("enter price #%d: ", i+1); 
			scanf("%f", &prices[i]);  // Store at position 3 and 4
		}

		// STEP 10: Print only the newly added prices
		// Same range: i = number (3) to i < newNumber (5)
		for(int i = number; i < newNumber; i=i+1){
			printf("price #%d: %.2f\n", i + 1, prices[i]); 
		}
	}

	// STEP 11: Free the memory back to the system
	free(prices);  // Return all 5 prices' worth of memory
	prices = NULL;  // Prevent accidental use of freed memory (dangling pointer)

	return 0;
}
