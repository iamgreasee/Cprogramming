#include <stdio.h> 
#include <string.h> 

char exercise(); 

int main() {

	// array of strings 
	
	char fruits[][15] = {"apple", 		// the 15 in the second bracket means that every fruit can only have 10 characters
			     "banana",
			     "watermelon", 
			     "pineapple"};

	int size = sizeof(fruits) / sizeof(fruits[0]);

	fruits[0][0] = 'e';	// this changes the 'a' in the first element 'apple' to an e.  
	fruits[2][4] = 'f';

	for(int i = 0; i < size; i=i+1){
		printf("%s\n", fruits[i]);
	}
	
	exercise();

	return 0; 
}

char exercise(){
	
	char names[3][25] = {0};	// can store 3 names, each name storing a maximum of 25 characters. {0} - initializes each value within the array to 0.
	int rows = sizeof(names) / sizeof(names[0]); 
	
	//printf("enter a name: ");
	//fgets(names[0], sizeof(names[0]), stdin); 
	//names[0][strlen(names[0]) - 1] = '\0';

	for(int i = 0; i < rows; i=i+1){
		printf("enter a name: "); 
		fgets(names[i], sizeof(names[i]), stdin);
		names[i][strlen(names[i]) - 1] = '\0';
	}

	for(int i = 0; i < rows; i=i+1){
		printf("%s\n", names[i]);
	}

}
