#include <stdio.h> 

// return - returns a value back to where you call a function 

double cube(double num){
	return num * num * num;
}


double square(double num){		// has to be set to the data type you are returning
	double result = num * num; 

	return result;		// returns the value of the result variable back into the main function
}

int main() {
	
	double x = cube(2.4); 
	double y = square(3); 
	double z = square(4); 

	printf("%.2lf\n", x);
	printf("%.2lf\n", y); 
	printf("%.2lf\n", z);

	return 0; 
}
