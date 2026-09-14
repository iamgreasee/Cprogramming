#include <stdio.h>
#include <stdbool.h> 

int main(){

	// ternary operator ? = shorthand for if-else statements. 
	
	// (condition) ? value_if_true : value_if_false
	
	/*
	int x = 5; 
	int y = 6; 
	int max = (x > y) ? x : y;	// takes a condition, think of the question mark as (in this case), 
					// is x > y ?, is x greater than y. if so do this : else do this. 

	printf("%d", max);
	*/ 
	
	/*
	bool isOnline = 1;	// or true 
	printf("%s", (isOnline) ? "online" : "offline");	// isOnline true ? if so do this : else do this
	*/

	/*
	int number = 7; 

	printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd"); 
	*/ 

	/*
	int age = 19; 

	printf("%s", (age > 18) ? "you are an adult" : "you are not an adult");
	*/ 
	
	int hours = 12; 
	int minutes = 3;
	char *meridiem = (hours < 12) ? "am" : "pm"; 	// meridiem will either point to the string of "am" or "pm"

	printf("%02d:%02d %s\n", hours, minutes, meridiem);

	return 0;
}
