#include <stdio.h> 
#include <stdlib.h>	// stanard library 
#include <time.h> 	// time header file

int oddEven(); 
int randomNumber(); 

int main(){

	// pseudo random - appear random but are determined by a 
	// 		   mathematical formula that uses a seed value
	// 		   to generate a predictable sequence of numbers. 
	// 		   advanced: Mersenne Twister or /dev/random (hardware entropy)
	
	srand(time(NULL));	// use the current time as the seed for the random function. 
	
	//printf("%d\n", RAND_MAX); 	// returns the RAND_MAX constant which is just the maximum value that can be set to a random value.
	
	//printf("%d\n", rand());

	oddEven();
	randomNumber();


	return 0; 
}

int oddEven(){
	int randomNum = rand() % 2; 

	//printf("%d", randomNum);
	
	if(randomNum != 0){
		printf("number is odd\n");
	}
	else{
		printf("number is even\n");
	}
}

int randomNumber(){

	int min = 0; 
	int max = 0;

	printf("enter the minimum range for a random number: ");
	scanf("%d", &min);

	printf("enter the maxumum range for a random number: "); 
	scanf("%d", &max); 

	int randomNum = (rand() % max) + min; 
	printf("random num: %d", randomNum);

}
