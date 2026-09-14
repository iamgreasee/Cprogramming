#include <stdio.h> 

//prototype at top
char getGrade(int score);

int main() {
	char grade = getGrade(95); 
	printf("grade: %c\n", grade);
	
	return 0; 
}

char getGrade(int score){
	if(score >= 90){
		return 'A';
	}
	else{
		return 'F';
	}

}
