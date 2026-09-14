#include <stdio.h> 
#include <stdlib.h> 

// calloc() = contiguous allocation OR cleared allocation
// Allocates memory dynamically AND sets all bytes to 0
// Syntax: calloc(number_of_elements, size_of_each_element)
// Returns: address of allocated memory (pointer)
// Difference from malloc: calloc initializes to 0, malloc leaves garbage

int main() {

	// STEP 1: Ask user how many players in the game
	// We don't know at compile time - user decides at runtime
	int number = 0; 
	printf("enter num of players: "); 
	scanf("%d", &number);  
	// Example: user enters 3

	// STEP 2: Allocate memory for that many integers on the HEAP
	// calloc(number, sizeof(int)) does this:
	//   - number = 3 (how many elements)
	//   - sizeof(int) = 4 bytes (size of each element)
	//   - calloc finds 3 * 4 = 12 contiguous bytes on heap
	//   - INITIALIZES all 12 bytes to 0 (unlike malloc)
	//   - returns the ADDRESS of the first byte (e.g., 0x3000)
	// We store that address in the scores POINTER
	int *scores = calloc(number, sizeof(int));
	// Now scores = 0x3000
	// And 12 bytes at 0x3000-0x300B contain all zeros: [0][0][0][0][0][0][0][0][0][0][0][0]
	// malloc would have garbage data here instead
	
	// STEP 3: Check if calloc succeeded
	// If system is out of memory, calloc returns NULL (0x0)
	if(scores == NULL){
		printf("memory allocation failed"); 
		return 1;  // exit code 1 = failure
	}
	// If we got here, calloc succeeded and scores points to valid memory (all zeros)

	// STEP 4: Get scores from user and store in allocated memory
	// Loop from i=0 to i<number (0, 1, 2)
	for(int i = 0; i < number; i=i+1){
		printf("enter score #%d: ", i + 1);  // ask for score 1, 2, 3
		scanf("%d", &scores[i]);  // store integer at position i
		// &scores[0] = address of first int (0x3000)
		// &scores[1] = address of second int (0x3004) [ints are 4 bytes]
		// &scores[2] = address of third int (0x3008)
	}

	// STEP 5: Display all the scores back to user
	// Loop through same range (0 to 2), print each score
	for(int i = 0; i < number; i=i+1){
		printf("%d ", scores[i]);  // scores[i] = the VALUE stored at that address
	}
	
	// STEP 6: Return memory to the system (CRITICAL!)
	// The 12 bytes we "rented" are no longer needed
	// free() returns them to the heap so OS can reuse them
	// If you DON'T call free(), you have a MEMORY LEAK
	free(scores);  
	// Now the 12 bytes at 0x3000-0x300B belong to the OS again

	// STEP 7: Prevent dangling pointer (pointer to freed memory)
	// scores still holds address 0x3000, but that memory is no longer ours
	// If someone accidentally used scores now, we'd access memory we don't own = SEGFAULT
	scores = NULL;  
	// Now if someone tries to use scores, it's NULL (which is safer)

	return 0;
}

// MEMORY COMPARISON:
// STACK - local variables stored here, freed automatically when function ends, limited size, LIFO
// HEAP - dynamic memory lives here, you control when freed, much larger size, persists until free()
