// === SUMMARY ===
// variable = a reusable container for a value. It behaves as if it were the value it contains. 
// int = whole numbers (4 bytes in modern systems)
// float = single-precision decimal number (4 bytes)
// double = double-precision decimal number (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true or false (1 byte, requires the <stdbool.h> header file)



#include <stdio.h> // for basic io 
#include <stdbool.h> // for boolean values 

int main(void) {

	// === INTEGERS === 
	int age = 25;

	printf("age: %d\n", age); // %d format specifier for digit values - values that whole numbers

	// storing a decinal in an integer variable will truncate the decimal -> 12.5 turns into 12 
	int score = 12.5;
	printf("your score: %d\n", score);

	int year = 2026; 
	printf("year: %d\n", year);

	int quantity = 1; 
	printf("quantity: %d\n", quantity);
	 
	// === FLOATING POINT ===
	// generally, floating point values can store up to 8 decimal points
	float gpa = 3.8;
	printf("your gpa is: %f\n", gpa); // %f format specifier for floating point values. using .xf (x being a value) specifies the amount of digits to be outputted 
	
	float price = 19.99;
	printf("the price is $%.2f\n", price);

	float temperature = -29.3;
	printf("temerature: %.1f degrees celcius \n", temperature);

	// === DOUBLE === 
	// generally, double values can store 15 to 16 decimals
	double pi = 3.14159; // can store 16 digits after the decimal
	printf("the value of pi is: %lf\n", pi); // %lf format specifier means LONG FLOAT
	
	double e =  2.718281828459045; 
	printf("the value of e is: %.12lf\n", e); // the decimal before the lf specifies how many decimala
	

	// === CHARACTERS ===
	char grade = 'A'; 
	printf("your grade is %c\n", grade); // the format specifier %c means char. this is important 
					     // because characters can be converted to integers 
	
	char symbol = '+';
	printf("the symbol you chose is %c\n", symbol); // symbols can also be stored as characters 
	
	char currency = '$';
	printf("the US currency is dollars or %c\n", currency);
	

	// === STRINGS === 
	// in the c programming language, we use an array of characters to represent a string.

	char name[] = "poo poo"; // the square brackets next to the name variable declares it as an array allowing it to store multiple values, important for strings. 
	printf("your name is, %s\n", name);
	
	char food[] = "nutella"; 
	printf("Paul's favourite food is, %s\n", food);

	char email[] = "example@mail.com"; 
	printf("paul's email is %s\n", email);


	// === BOOLEAN ===
	// boolean values are either true or false 
	
	bool isOnline = 1; // 1 means true 
	bool isOffline = 0; // 0 means false
	
	printf("is online (true): %d\n", isOnline);
	printf("is offline (false): %d\n", isOffline);

	if(isOnline){ // if isOnline is 1, OR true
		printf("you are online\n");
	}
	else {
		printf("you are offline\n");
	}
	
	bool isStudent = 1; 

	if(isStudent) {
		printf("you are a student\n");
	}
	else{
		printf("you are not a student\n");
	}
	
	bool forSale = 0; 

	if(forSale) {
		printf("the item is for sale\n");
	}
	else{
		printf("the item is not for sale\n");
	}
	return 0;
}
