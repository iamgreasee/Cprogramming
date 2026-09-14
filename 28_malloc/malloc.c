#include <stdio.h>
#include <stdlib.h> // standard lib - to get malloc function

// malloc - a function in C that dynamically allocates a specified number of bytes in memory. 

int main(){

	// the standard array that we've been creating are fixed in size, heres why you might want to use malloc. 
	
	//char grades[5] = {0}; // this works because we have a fixed size. but what if we don't know the amount of elements we will assign to the array? 
	
	// what we do is we need to return a pointer from the malloc function. 
	
	int number = 0; 
	printf("enter the number of grades: ");
	scanf("%d", &number); 

	char *grades = malloc(number * sizeof(char));  // malloc - allocates memory in heap, grades points to the address where that memory is located.
						       // if the malloc function fails, it will return a NULL which we can check for. 
						       // dereferencing a pointer can cause whats known as a segmentation fault, 
						       // which occurs when a program attempts to access a memory location that it is not allowed to access.
	
	
	if(grades == NULL){
		printf("memory allocation failed\n"); 
		return 1; // exit code
	}

	for(int i = 0; i < number; i=i+1){
		printf("enter grade number #%d: ", i + 1);
		scanf(" %c", &grades[i]);
	}

	for(int i = 0; i < number; i=i+1){
		printf("grade num %d: %c\n", i + 1, grades[i]); 
	}
	
	// the memory that we reserve, its from a location known as the HEAP. Basically malloc just borrows space from the heap. 
	// for most situations we use memory, its stored in the STACK.
	
	free(grades); // returning the "rented" space back to the heap or operating system. must be the pointer and not the dereferenced pointer (or the value stored).
	grades = NULL; // avoids dangling pointer - we don't want pointer that points to a location in memory that we are not using anymore. 


	return 0;
}
