#include <stdio.h> 
#include <stdlib.h> 

// calloc - contiguous allocation. OR clear allocation.
// 	    allocates memory dynamically and sets all allocated bytes to 0. 
// 	    malloc() is faster, but calloc() leads to less bugs. 
// 	    calloc(#, size) 

// dynamic - constantly changing , growing, etc. 

int main() {

	// lets pretend we're playing a game, theres a number of players but we don't know the number of players until the program is running. 
	
	int number = 0; 
	printf("enter num of players: "); 
	scanf("%d", &number); 

	//int *scores = malloc(number * sizeof(int)); 	// returns the address of a region in memory allocated with the bytes needed to store the number variable * 4 (for int bytes). 
							// the address is stored to the pointer called scores, the reference operator takes the address and returns the value 
							// stored within the address - just for recap. 
	

	
	// instead of malloc we can use calloc to prevent garbage memory from taking up space in the location in the heap. 
	int *scores = calloc(number, sizeof(int)); // instead of multiplying the number by the size, we take them as arguments individually. 


	if(scores == NULL){
		printf("memory allocation failed"); 
		return 1; 
	}

	for(int i = 0; i < number; i=i+1){
		printf("enter score #%d: ", i + 1);
		scanf("%d", &scores[i]); 	// stores the input at the address of out pointer at the index of i. 
	}

	for(int i = 0; i < number; i=i+1){
		printf("%d ", scores[i]);	// we can treat the pointer like its an array, accessing it by index. display whats at index i
	}
	
	free(scores); 	// frees the scores pointer - or the memory address of the scores variable. think of this as giving an apartment back (the space itself)
	scores = NULL; 	// sets scores to null - think of this as giving the key to your appartment (the space in memory) back after freeing the memory. 
	return 0;
}


// STACK - local variables stored here, memory is freed automatically when the function ends, limited size, Last in First out. 
// HEAP - dynamic memory lives here, control when its freed, much larger size available, persists untul you free it. 
