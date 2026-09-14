#include <stdio.h> 

int main() {
	// FILE is a built in struct provided by the stdio header file. the date type is FILE
	// here we will be creating a pointer to a FILE struct. 

	FILE *pFile = fopen("Cprogramming/26_write_files/output.txt", "w");// output.txt is the name of the file, w is the mode for write - it can also be read for readonly. 
						// if were unable to create and open a file, this function is going to return a NULL value. Null is a pointer nothing (address 0) 
	
	char text[] = "hi my name is tom pearl\nand im going to eat my dihorrhoea for you.\n"; 

	if(pFile == NULL){
		printf("error opening file\n"); 

		return 1; 	// to exit a value prematurely we can return a value that isn't 0 - so we return 1. reaching the end of the program and returning 0 means 
				// there were no errors
	}

	fprintf(pFile, "%s", text); //takes pointer to file, format specifier and the string stored in text as an argument 

	printf("file was written successfully!\n");
	
	fclose(pFile);	// rememeber to close the file at the end of your program. 

	return 0; 
}

//FILE struct = the file's management record
//fopen()      = receptionist who creates the record and opens the file
//pFile        = your ticket/reference to that record
//fprintf()    = "write this through my ticket"
//fclose()     = "I'm finished with this file"
