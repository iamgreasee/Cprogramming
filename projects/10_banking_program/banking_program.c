#include <stdio.h> 

void checkBalance(float balance);
float deposit(); 
float withdraw(float balance);

int main() {

	int choice = 0; 
	float balance = 0.0f;

	printf("=== welcome to the bank ===\n");

	do{
		printf("\nSelect an option: \n"); 
		printf("\n1. Check Balance\n"); 
		printf("2. deposit money\n"); 
		printf("3. withdraw money\n"); 
		printf("4. exit\n"); 

		printf("\nEnter your choice: "); 
		scanf("%d", &choice); 

		switch(choice){
			case 1: 
				checkBalance(balance);
				break; 
			case 2: 
				balance = balance + deposit(); 
				break; 
			case 3: 
				balance = balance - withdraw(balance); 
				break; 
			case 4: 
				printf("goodbye!\n"); 
				break;
			default: 
				printf("\ninvalid input\n");

		}

	}while(choice != 4);

	return 0;
}

void checkBalance(float balance){
	printf("\nyour current balance is: $%.2f\n", balance); 
}
float deposit(){

	float amount = 0.0f; 

	printf("\nenter amount to deposit: ");
	scanf("%f", &amount); 

	if(amount < 0){
		printf("invalid amount\n"); 
		return 0.0f; 
	}
	else{
		printf("successfully deposited $%.2f\n", amount); 
		return amount; 
	}
	return 0.0f; 
} 
float withdraw(float balance){

	float amount = 0.0f; 

	printf("enter amount to withdraw: \n"); 
	scanf("%f", &amount); 

	if(amount < 0){
		printf("invalid amount\n"); 
		return 0.0f; 
	}
	else if(amount > balance){
		printf("insufficient funds, your balance is $%.2f", balance);
		return 0.0f; 
	}
	else{
		printf("successfully withdrew %.2f\n", amount);
		return amount; 
	}
}

