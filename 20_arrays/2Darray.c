#include <stdio.h>

int main() {

	// 2D array - an array where each element is an array. 
	// 	      array[][] = {{}, {}, {}}; 
	
	//int numbers[] = {1, 2, 3}; // this is a one dimentional array.
	
	/*
	int numbers[][] = {{1, 2, 3},
			   {4, 5, 6},			// using this will return a compiler error
			   {7, 8, 9}};	
	*/


	int numbers[][3] = {{1, 2, 3}, 						// not initializing the bounds for the dimentions (except the first) will return an error. 
			    {4, 5, 6}, 
			    {7, 8, 9},
			    {10, 11, 12}}; 	// good for a grid or matrix of data. 
	


	// should print 1 2 3 4 5 6 7 8 9
	//printf("%d ", numbers[0][0]);
	//printf("%d ", numbers[0][1]);
	//printf("%d\n", numbers[0][2]);

	//printf("%d ", numbers[1][0]);
	//printf("%d ", numbers[1][1]);
	//printf("%d\n", numbers[1][2]);

	//printf("%d ", numbers[2][0]);
	//printf("%d ", numbers[2][1]);
	//printf("%d\n", numbers[2][2]);

	/*
	for(int i = 0; i < 3; i=i+1){	// rows 
		for(int j = 0; j < 3; j=j+1){	// columns 	// we could use the trick to calculate the size of the array instead 
			printf("%d ", numbers[i][j]);
		}printf("\n");
	}
	*/ 
	 
	// number of rows
	int rows = sizeof(numbers) / sizeof(numbers[0]); 

	// number of columns 
	int cols = sizeof(numbers[0]) / sizeof(numbers[0][0]); 

	for(int i = 0; i < rows; i=i+1){
		for(int j = 0; j < cols; j=j+1){
			printf("%d ", numbers[i][j]); 
		}printf("\n"); 
	}

	char numpad[][3] = {{'1', '2', '3'}, 
			    {'4', '5', '6'}, 
			    {'7', '8', '9'}, 
			    {'*', '0', '#'}};

	int numRows = sizeof(numpad) / sizeof(numpad[0]); 
	int numCols = sizeof(numpad[0]) / sizeof(numpad[0][0]); 

	for(int i = 0; i < numRows; i=i+1){
		for(int j = 0; j < numCols; j=j+1){
			printf("%c ", numpad[i][j]);	// i is for the rows, j is for the columns 
		}printf("\n"); 
	}

	return 0;
}
