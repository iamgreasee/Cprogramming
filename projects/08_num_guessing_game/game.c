#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main() {
	
	// set the seed for the random function - defaults to 1
	
	srand(time(NULL)); 	// since the srand defaults to 1 as the seed and we need to generate different numbers each time, 
			// we will set the seed to the current time using the time() function - then pass 0 or NULL into the time function 
	
	int guess = 0; 
	int tries = 0; 
	int min = 1; 
	int max = 100; 
	int answer = (rand() % (max - min + 1)) + min;		// rand() generates a random number 
								// % (max - min + 1) limits it to a range of (0 to 99 for 1 to 100)
								// + min shifts the range up from (0 - 99 becomes 1 - 100 )

	printf("=== NUMBER GUESSING GAME ===\n"); 

	do{
		printf("guess a number between %d - %d: ", min, max);
		scanf("%d", &guess);
		tries = tries + 1;

		if(guess < answer){
			printf("too low\n");
		}
		else if(guess > answer){
			printf("too high\n");
		}
		else{
			printf("you guessed correctly\n"); 
		}

	}while(guess != answer);

	printf("the answer is %d\n", answer); 
	printf("it took you %d tries\n", tries); 

	return 0;
}
