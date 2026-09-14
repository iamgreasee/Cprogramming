#include <stdio.h> 

int main() {

	FILE *pFile = fopen("/Cprogramming/27_read_files/file.txt", "r"); 
	char buffer[1024] = {0}; 	// think of a buffer as a waiting room that temporarily stores data (for us to read in this case). 
	
	if(pFile == NULL){
		printf("failed to open file\n"); 
		return 1;
	}

	// once we run out of text to read, fgets will return a value of NULL. 
	while(fgets(buffer, sizeof(buffer), pFile) != NULL){	// takes the buffer, size of buffer and the pointer as arguments. 
		printf("%s\n", buffer); 
	}

	printf("file opened successfully!\n"); 



	fclose(pFile); 

	return 0; 
}
