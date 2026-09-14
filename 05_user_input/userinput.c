#include <stdio.h> 
#include <string.h>	// provides functions related to working with strings 


int main() {

	int age; 
	float gpa; 
	char grade; 
	char name[30] = "";	// this limits the user to 30 bytes/characters. 
	char sirname[30] = "";
		
	//--- age example ---

	// printf("enter your age: ");	// tells the user what to input. note that you do not need to add a new line after this
	// scanf("%d", &age);	// & is the 'address of' operator - this just tells the compiler to add a value to the address of the variable.	
	// printf("%d\n", age);	// prints the value of age after the user has entered a value into the terminal
	
	// --- gpa example ---

	// printf("enter your gpa: ");
	// scanf("%f", &gpa); 
	// printf("%.1f\n", gpa);

	//--- grade example ---

	// printf("enter your grade: ");
	// scanf("%c", &grade);
	// printf("%c\n", grade);

	//--- name example ---
	// printf("enter your name: ");
	// scanf("%s", &name);	// scanf cannot read any whitespaces, any spaces in the user input will cause the input to be trunkated after the space

	// printf("enter your sirname: ");
	// scanf("%s", &sirname);
	// printf("your full name is %s %s\n", name, sirname);
	
	// getchar() - this function will clear out old values from the input buffer preventing unwanted behaviour 

	// to counter the limitations of scanf you could opt to using the fgets function - which stands for file get string 
	// printf("enter your full name ");
	// fgets(name, 30, stdin);	// takes the variable name, the amount of characters it can store, and stdin (stabdard input)
	// fgets(name, sizeof(name), stdin); // we can use the sizeof function to calculate the size of the variable, set here: 'name[30]'

	// name[strlength(name) -1] = '\0'; // this prevents 


	// printf("%s\n", name);

	return 0; 
}
