#include <stdio.h> 
#include <stdbool.h> 

int main() {
	
	// logical operators = used to combine or modify boolean expressions. 
	
	// && = AND 
	// || = OR 
	// ! = NOT 
	
	//double temp = 0; 
	
	//printf("enter the temperature in celsius: "); 
	//scanf("%lf", &temp); 

	//if(temp > 0 && temp < 30){			// if both conditions are true, return the code in the if statement. so the temp has to be above 0 and below 30. 
	//	printf("the temperature is good.\n");
	//}
	//if(temp <=0 || temp >= 30){			// this checks if either of the conditions are true. so if the temp is less than or equal to zero, 
							// OR the temperature is greater than or equal to 30 - the program will return the code below. 
	//	printf("the temperature is bad.\n");
	//}
	//else{
	//	printf("the temperature is good.\n");
	//}
	
	bool isSunny = false;  

	if(!isSunny){					// this does the opposite, meaning if isSunny is false, return the code below
		printf("it is cloudy.\n"); 
	}
	else{
		printf("it is sunny.\n"); 
	}

	return 0; 
}
