#include <stdio.h>
#include <stdlib.h> // standard lib - contains malloc, free functions

// malloc() = memory allocation - dynamically allocate memory at runtime
// Returns: address of allocated memory (pointer)
// Syntax: malloc(number_of_bytes)

int main(){

	// STEP 1: Ask user how many grades they want to store
	// We don't know the size at compile time - user decides at runtime
	int number = 0; 
	printf("enter the number of grades: ");
	scanf("%d", &number);  
	// Example: user enters 4

	// STEP 2: Allocate memory for that many characters on the HEAP
	// malloc(number * sizeof(char)) does this:
	//   - number = 4 (from user)
	//   - sizeof(char) = 1 byte
	//   - 4 * 1 = 4 bytes total needed
	//   - malloc finds 4 contiguous bytes on heap
	//   - returns the ADDRESS of the first byte (e.g., 0x2000)
	// We store that address in the grades POINTER
	char *grades = malloc(number * sizeof(char));
	// Now grades = 0x2000 (example address)
	// And 4 bytes at 0x2000-0x2003 are "rented" from the heap

	// STEP 3: Check if malloc succeeded
	// If system is out of memory, malloc returns NULL (0x0)
	if(grades == NULL){
		printf("memory allocation failed\n"); 
		return 1; // exit code 1 = failure (don't continue)
	}
	// If we got here, malloc succeeded and grades points to valid memory

	// STEP 4: Get grades from user and store in allocated memory
	// Loop from i=0 to i<number (0, 1, 2, 3)
	for(int i = 0; i < number; i=i+1){
		printf("enter grade number #%d: ", i + 1);  // ask for grade 1, 2, 3, 4
		scanf(" %c", &grades[i]);  // store character at position i
		// &grades[0] = address of first byte (0x2000)
		// &grades[1] = address of second byte (0x2001)
		// &grades[2] = address of third byte (0x2002)
		// &grades[3] = address of fourth byte (0x2003)
	}

	// STEP 5: Display all the grades back to user
	// Loop through same range (0 to 3), print each grade
	for(int i = 0; i < number; i=i+1){
		printf("grade num %d: %c\n", i + 1, grades[i]); 
		// grades[i] = the VALUE stored at that address (dereferenced)
	}
	
	// STEP 6: Return memory to the system (CRITICAL!)
	// The 4 bytes we "rented" are no longer needed
	// free() returns them to the heap so OS can reuse them for other programs
	// If you DON'T call free(), you have a MEMORY LEAK
	// The memory stays allocated but you can't use it = wasted space
	free(grades); 
	// Now the 4 bytes at 0x2000-0x2003 belong to the OS again

	// STEP 7: Prevent dangling pointer (pointer to freed memory)
	// grades still holds address 0x2000, but that memory is no longer ours
	// If someone accidentally used grades now, we'd access memory we don't own
	// That causes a SEGMENTATION FAULT (program crash)
	grades = NULL;  
	// Now if someone tries to dereference grades (*grades), it crashes safely
	// Because dereferencing NULL is immediately caught

	return 0;
}
