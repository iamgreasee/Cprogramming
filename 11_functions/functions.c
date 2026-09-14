#include <stdio.h> 
#include <string.h> 

// function = a reusable section of code that can be invoked "called". 
// 	      Arguments can be sent to a function so that it can use them. 

// task = sing the happy birthday song THREE times. 
// writing tons of statements wastes time, so just create a function for the song then call it three times 

void happyBirthday(char name[], int age){		// here the name and age variables from the main function are set as the parameters for the happyBirthday function.  
							// the types need to be specified to let the compiler know what data type the function expects - to not convert it or anything. 
	printf("\nHappy birthday to you"); 
	printf("\nHappy birthday to you"); 
	printf("\nhappy birthday dear %s", name);
	printf("\nhappy birthday to you"); 
	printf("\nyou are %d years old\n", age); 

}

int main() {

	char name[20] = ""; 
	int age = 0; 

	printf("what is your name?: ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';

	printf("how old are you?: "); 
	scanf("%d", &age);


	happyBirthday(name, age);	// here the name and age varbles are added as the arguments in the brackets when the function is called. this is required. 
	happyBirthday(name, age); 
	happyBirthday(name, age); 


	return 0;
}
