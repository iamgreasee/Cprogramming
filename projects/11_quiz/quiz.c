#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 

int main(){
	
	// QUIZ GAME 
	
	char questions[][100] = {"1. What is the largest planet in the solar system?: ",
				 "2. What is the hottest planet in the solar system?: ",
				 "3. What planet has the most moons?: ",
				 "4. Is the Earth flat?: "}; 

	char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD.Neptune",
			       "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
			       "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
			       "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

	char answerKey[] = {'A', 'B', 'D', 'B'}; 

	int questionCount = sizeof(questions) / sizeof(questions[0]); 	// will return 4 
	
	char guess = '\0'; 
	int score = 0; 

	printf("=== QUIZ GAME ===\n");

	for(int i = 0; i < questionCount; i=i+1){
		printf("\n%s\n", questions[i]);
		printf("\n%s\n", options[i]);
		printf("\nEnter your choice: "); 
		scanf(" %c", &guess);

		guess = toupper(guess);		// turns lower case characters into upper case characters. 

		if(guess == answerKey[i]){
			printf("correct!\n");
			score = score + 1; 
		}
		else{
			printf("wrong.\n"); 
		}
	}
	printf("you got %d out of %d questions correct.\n", score, questionCount);



	return 0;
}


// things to do: 
// - read questions from a file. 
// - shuffle question order (random). 
// - multiple quiz files (dynamic loading). 
// - timer for each question.
// - different difficulty levels
