#include <stdio.h> 
#include <stdbool.h> 
#include <string.h>

int main() {
	
	char choice = '\0';
	float fahrenheit = 0.0f;
	float celsius = 0.0f; 

	printf("=== tmeperature converter ===\n");
	printf("C. celsius to fahrenheit\n"); 
	printf("F. fahrenheit to celsius\n"); 
	printf("is the temp in Celsius (C) or Fahrenheit (F)?:\n"); 
	scanf("%c", &choice); 

	if(choice == 'C' || choice == 'c'){
		// C to F
		printf("enter the temp in celsius: \n");
		scanf("%f", &celsius); 
		fahrenheit = (celsius * 9 / 5) + 32; 
		printf("%.1f degrees celsius is equal to %.1f degrees fahrenheit\n", celsius, fahrenheit);
	}
	else if(choice == 'F' || choice == 'f'){
		// F to C 
		printf("enter the temp in fahrenheit: \n"); 
		scanf("%f", &fahrenheit); 
		celsius = (fahrenheit - 32) * 5 / 9;
		printf("%.1f degrees fahrenheit is equal to %.1f degrees celcius\n", fahrenheit, celsius); 

	}
	else{
		printf("invalid choice\n");
	}


	return 0;
}
