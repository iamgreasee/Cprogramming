#include <stdio.h> 
#include <string.h> 

int main() {

	char name[50] = "";

	printf("enter your name: "); 
	fgets(name, sizeof(name), stdin); 
	name[strlen(name) - 1] = '\0';

	while(strlen(name) == 0){
		printf("name cannot be left blank, please try again: "); 
		fgets(name, sizeof(name), stdin);
		name[strlen(name) - 1] = '\0'; 
	}
	
	printf("hello, %s\n", name);

	return 0; 
}
