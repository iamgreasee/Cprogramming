#include <stdio.h> 
#include <stdbool.h> 
#include <string.h> 

int main() {

	int choice = 0; 
	float pounds = 0.0f;
	float kilograms = 0.0f; 

	printf("=== WEIGHT CONVERTER ===\n");
	printf("1. Kilograms to Pounds\n");
	printf("2. Pounds to Kilograms\n");
	printf("enter your choice: (1 - 2)");

	scanf("%d", &choice);

	if(choice == 1){
		//kg to pounds
		printf("enter weight in kg: \n");
		scanf("%f", &kilograms);
		pounds = kilograms * 2.20462; 
		printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
	}
	else if(choice == 2){
		// pounds to kg 
		printf("enter weight in lb: \n");
		scanf("%f", &pounds); 
		kilograms = pounds / 2.20462; 
		printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
	}
	else{
		printf("invalid choice\n");
	}

	return 0;
}
