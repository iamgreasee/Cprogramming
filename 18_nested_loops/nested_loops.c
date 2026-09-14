#include <stdio.h> 


int mulitplication();
int symbols();


int main() {

	// a nested loop is basically just a loop inside of a loop.
	

	//for(int i = 1; i < 3; i=i+1){
	//	for(int j = 1; j < 10; j=j+1){
	//		printf("%d ", j);
	//	}
	//	printf("\n");
	//}

	//mulitplication();
	symbols();
	return 0;
}

int mulitplication(){ 
	for(int i = 1; i <= 10; i=i+1){
		for(int j = 1; j <= 10; j=j+1){
			printf("%3d ", i * j);
		}
		printf("\n");		// once 1 - 10 is returned and the sequence is escaped, \n is returned - then the loop continues.  
	}
}

int symbols(){

	int rows = 0; 
	int columns = 0; 
	char symbol = '\0'; 

	printf("enter the number of rows: "); 
	scanf("%d", &rows);

	printf("enter the number of columns: "); 
	scanf("%d", &columns);


	printf("enter a symbol: "); 
	scanf(" %c", &symbol);

	for(int i = 0; i < rows; i=i+1){			
		for(int i = 0; i < columns; i=i+1){
			printf("%c", symbol); 
		}
		printf("\n");
	}

}
