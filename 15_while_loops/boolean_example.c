#include <stdio.h> 
#include <stdbool.h> 

int main() {
	
	bool isRunning = true; 
	char response = '\0'; 

	while(isRunning){
		printf("you are playing a game\n"); 
		printf("would you like to continue? (y/n): "); 
		scanf(" %c", &response); 
		
		if(response != 'Y' && response != 'y'){
			isRunning = false; 
		}
	}
	
	printf("you exit the game");
	return 0; 
}
