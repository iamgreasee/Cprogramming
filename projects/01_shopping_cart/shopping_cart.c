#include <stdio.h>
#include <string.h> 

int main() {
	
	// === SHOPPING CART PROGRAM === 
	// allows the user to enter an item, a price and a quantity - then calculates a price. 

	char item[50] = "";
	float price = 0.0f; 
	int quantity = 0; 
	char currency = '$';
	float total = 0.0f;

	printf("what item would you like to buy?: ");
	fgets(item, sizeof(item), stdin);	// for strings - so when the characters assigned to a variable have spaces in between

	//item[strlen(item) -1] = '\0';	// this uses the strlen function to take the amount of characters in the item variable and decrement it by 1.
					// this is useful if a new line character is still in the input buffer causing unwanted behaviours 

	printf("what is the price for each item?: ");
	scanf("%f", &price);

	printf("how many would you like?: ");
	scanf("%d", &quantity); 

	total = price * quantity; 

	printf("you have bought %d %s\n", quantity, item);
	printf("your total is: %c%.2f\n", currency, total);


	return 0; 
}
