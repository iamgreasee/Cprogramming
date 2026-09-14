#include <stdio.h> 

int main(){
	
	/*
	int scores[5];

	for(int i = 0; i < 5; i=i+1){
		printf("%d ", scores[i]); 
	}
	// running this code will return a bunch of garbage since there aren't actually any values within the scores array. 
	// C doesn't automatically clear memory from programs that used that memory previously. which can result in unwanted behaviours. 
	*/ 


	int scores[5] = {0};

	printf("enter a score: "); 
	//scanf("%d", &scores[0]);	// manually sets the value of a specific element within the score array to the user input
	
	int size = sizeof(scores) / sizeof(scores[0]);

	for(int i = 0; i < size; i=i+1){
		printf("enter a score: "); 
		scanf("%d", &scores[i]);
	}

	for(int i = 0; i < size; i=i+1){
		printf("%d\n", scores[i]);
	}

	return 0; 
}
